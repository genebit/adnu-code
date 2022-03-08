#include <fcntl.h>
#include <iostream>
#include <vector>
#include <list>
#include <queue>
#include <set>
#include <cmath>

using namespace std;

class Node {
public:
    Node* const parent;
    const int ROW;
    const int COL;
    const int G_COST;
    const int HEURISTICS;
    const int F_COST; 

    Node(Node* parent, int row, int col, int gcost, int h) 
    : parent(parent), ROW(row), COL(col), G_COST(gcost), HEURISTICS(h), F_COST(gcost + h) {
    }

};

list<Node*> findShortestPath(const vector<vector<int>> map, int n) {
    int startX = 0,
        startY = 0,
        destX = n-1,
        destY = n-1;

    auto comp = [](Node* n1, Node* n2) { return n1->F_COST > n2->F_COST; };

    priority_queue<Node*, vector<Node*>, decltype(comp)> openNodes(comp);
    set<Node*> closedNodes;

    // Add the node to the queue and assign the Manhattan distance to the end 
    int heuristics = abs(startX - destX) + abs(startY - destY);
    openNodes.push(new Node(nullptr, startX, startY, 0, heuristics));

    const int MAX_ITERATION = n * n;
    int iteration = 0;
    while(!openNodes.empty() && iteration < MAX_ITERATION) {

        // Get the node with least (f = cost + h) and remove it from the queue
        Node* currentNode = openNodes.top();
        openNodes.pop();

        closedNodes.insert(currentNode);

        // Get the neighbors of currentNode
        vector<Node*> neighbors;
        const int PATH = 1;

        for (int i = -1; i <= 1; ++i) {
            for (int j = -1; j <= 1; ++j) {
                bool sideConstraints = currentNode->ROW + i >= 0 && currentNode->ROW + i < n && 
                                       currentNode->COL + j >= 0 && currentNode->COL + j < n;

                if (sideConstraints && ((i == PATH && j != PATH) || (i != PATH && j == PATH)) && map[currentNode->ROW + i][currentNode->COL + j] == PATH)
                    neighbors.push_back(new Node(currentNode, currentNode->ROW + i, currentNode->COL + j, currentNode->G_COST + 1, abs(currentNode->ROW + i - destX) + abs(currentNode->COL + j - destY)));
            }
        }

        // For each neighbor:
        // If it is the end node, return the path if it is not in closed set, add it to open queue
        for (size_t i = 0; i < neighbors.size(); ++i) {
            if (neighbors[i]->ROW == destX && neighbors[i]->COL == destY) { // if the position is found
                // Reconstruct the path
                Node* node = neighbors[i];
                list<Node*> route;
                while (node != nullptr) {
                    route.push_front(node);
                    node = node->parent;
                }
                return route;
            }

            if (closedNodes.find(neighbors[i]) != closedNodes.end())
                continue;
            openNodes.push(neighbors[i]);       
        }
        iteration++;
    }

    return list<Node*>();
}

void init() {
    freopen("../Input.txt", "r", stdin);
    freopen("../Output.txt", "w", stdout);
}

int main() {
    init();

    // Recieve input
    int size;
    cin >> size;

    vector<vector<int>> board;

    for (int i = 0; i < size; ++i) {
        vector<int> tmp;
        for (int j = 0; j < size; ++j) {
            int num;
            cin >> num;
            tmp.push_back(num);
        }
        board.push_back(tmp);
    }
    list<Node*> route = findShortestPath(board, size);
    vector<vector<int>> path;

    if (route.size() == 0) {
        cout << "no solution path" << endl;
    } else {
        for (list<Node*>::iterator nodeIt = route.begin(); nodeIt != route.end(); ++nodeIt) {
            vector<int> pos;
            pos.push_back((*nodeIt)->ROW);
            pos.push_back((*nodeIt)->COL);
            path.push_back(pos);
        }

        // 1. Change all of the board's cell to 0
        for (int i = 0; i < size; ++i)
            for (int j = 0; j < size; ++j)
                board[i][j] = 0;

        // Change the board's shortest path found to 1
        for (int i = 0; i < path.size(); ++i)
            board[path[i][0]][path[i][1]] = 1;

        // Print the final output
        for (int i = 0; i < size; ++i) {
            for (int j = 0; j < size; ++j) {
                cout << board[i][j] << " ";
            }
            cout << endl;
        }        
    }
    return 0;
}