#include <iostream>
#include <vector>
#include <list>
#include <queue>
#include <set>
#include <cmath>

using namespace std;

class Node {
public:
    // Attributes of a node
    Node* const PARENT;
    const int ROW;
    const int COL;
    const int G_COST;
    const int HEURISTICS;
    const int F_COST; 

    // Constructor for storing info about each node
    Node(Node* parent, int row, int col, int gcost, int h) : PARENT(parent), ROW(row), COL(col), G_COST(gcost), HEURISTICS(h), F_COST(gcost + h) { } 
};

int manhattanFormula(int x1, int x2, int y1, int y2) {
    return abs(x1 - x2) + abs(y1 - y2);
}

void storeInputToBoard(int& size, vector<vector<int>>& board) {
    for (int i = 0; i < size; ++i) {
        vector<int> tmp;
        for (int j = 0; j < size; ++j) {
            int num;
            cin >> num;
            tmp.push_back(num);
        }
        board.push_back(tmp);
    }
}

void printOutput(vector<vector<int>>& board, vector<vector<int>>& path, int& size) {
    for (int i = 0; i < size; ++i) // 1. Change all of the board's cell to 0
        for (int j = 0; j < size; ++j)
            board[i][j] = 0;

    for (int i = 0; i < path.size(); ++i) // Change the board's shortest path found to 1
        board[path[i][0]][path[i][1]] = 1;

    for (int i = 0; i < size; ++i) { // Print the final output
        for (int j = 0; j < size; ++j) {
            cout << board[i][j] << " ";
        }
        cout << endl;
    }        
}

list<Node*> aStarSearchAlgorithm(vector<vector<int>> board, int n) {
    int startX = 0,  startY = 0,
        destX = n-1, destY = n-1;

    auto comp = [](Node* node1, Node* node2) { return node1->F_COST > node2->F_COST; };

    priority_queue<Node*, vector<Node*>, decltype(comp)> openNodes(comp);
    set<Node*> closedNodes;

    // Add the node to the queue and assign the Manhattan distance to the end 
    openNodes.push(new Node(nullptr, startX, startY, 0, manhattanFormula(startX, destX, destY, destX)));

    const int MAX_ITERATION = n * n;
    int iteration = 0;
    while(!openNodes.empty() && iteration < MAX_ITERATION) {
        // Get the node with least f cost and remove it from the queue
        Node* currentNode = openNodes.top();
        openNodes.pop();

        closedNodes.insert(currentNode);

        // Get the neighbors of currentNode
        vector<Node*> neighbors;
        const int PATH = 1;

        // Move across the board
        for (int i = -1; i <= 1; ++i) { 
            for (int j = -1; j <= 1; ++j) {
                bool satisfiedConstraints = currentNode->ROW + i >= 0 && currentNode->ROW + i < n && 
                                            currentNode->COL + j >= 0 && currentNode->COL + j < n;

                bool isRowWalkable = (i == PATH && j != PATH),
                     isColWalkable = (i != PATH && j == PATH);

                if (satisfiedConstraints && (isRowWalkable || isColWalkable) && board[currentNode->ROW + i][currentNode->COL + j] == PATH)
                    neighbors.push_back(new Node(currentNode, currentNode->ROW + i, currentNode->COL + j, currentNode->G_COST + 1, manhattanFormula(currentNode->ROW + i, destX, currentNode->COL + j, destY)));
            }
        }

        // For each neighbor: IF reached end node, return the path. IF not in CLOSED SET, add it to open queue
        for (int i = 0; i < neighbors.size(); ++i) {
            if (neighbors[i]->ROW == destX && neighbors[i]->COL == destY) { // if the position is found
                // Reconstruct the path
                Node* node = neighbors[i];
                list<Node*> route;
                while (node != nullptr) {
                    route.push_front(node);
                    node = node->PARENT;
                }
                return route;
            }

            if (closedNodes.find(neighbors[i]) != closedNodes.end()) continue;
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

    int size;
    cin >> size;
    vector<vector<int>> board;
    storeInputToBoard(size, board);
    
    list<Node*> route = aStarSearchAlgorithm(board, size);
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
        printOutput(board, path, size);
    }
    return 0;
}