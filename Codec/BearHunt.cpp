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
    Node(Node* parent, int row, int col, int g, int h) 
    : parent(parent), row(row), col(col), g(g), h(h), f(g + h) {        
    }

    Node* const parent;
    const int row;
    const int col;
    const int g;
    const int h;
    const int f; 
};

list<Node*> findShortestPath(const vector<vector<int>> map, int n) {
    int startX = 0,
        startY = 0,
        destX = n-1,
        destY = n-1;

    auto comp = [](Node* n1, Node* n2) { 
        return n1->f > n2->f; 
    };

    priority_queue<Node*, vector<Node*>, decltype(comp)> openNodes(comp);
    set<Node*> closedNodes;

    // Push the start node into the queue; heuristics is Manhattan distance to the end 
    openNodes.push(new Node(nullptr, startX, startY, 0, abs(startX - destX) + abs(startY - destY)));

    while(!openNodes.empty()) {
        // Get the node with least (f = cost + h) and remove it from the queue
        Node* currentNode = openNodes.top();
        openNodes.pop();

        closedNodes.insert(currentNode);

        // Get the neighbors of currentNode
        vector<Node*> neighbors;
        const int PATH = 1;

        for (int i = -1; i <= 1; ++i) {
            for (int j = -1; j <= 1; ++j) {
                bool sideConstraints = currentNode->row + i >= 0 && currentNode->row + i < n && 
                                       currentNode->col + j >= 0 && currentNode->col + j < n;

                if (sideConstraints && ((i == PATH && j != PATH) || (i != PATH && j == PATH)) && map[currentNode->row + i][currentNode->col + j] == PATH)
                    neighbors.push_back(new Node(currentNode, currentNode->row + i, currentNode->col + j, currentNode->g + 1, abs(currentNode->row + i - destX) + abs(currentNode->col + j - destY)));
            }
        }

        // For each neighbor:
        // If it is the end node, return the path if it is not in closed set, add it to open queue
        for (size_t i = 0; i < neighbors.size(); ++i) {
            if (neighbors[i]->row == destX && neighbors[i]->col == destY) {

                // Reconstruct the path because neighbor[i] is the last node
                Node* node = neighbors[i];
                list<Node*> route;
                while (node != nullptr) {
                    route.push_front(node);
                    node = node->parent;
                }
                return route;
            }

            if (closedNodes.find(neighbors[i]) != closedNodes.end()) {
                continue;
            }

            openNodes.push(neighbors[i]);       
        }
    }

    return list<Node*>();
}

void init() {
    freopen("../Input.txt", "r", stdin);
    freopen("../Output.txt", "w", stdout);
}

int main() {
    init();

    /** Source:
     *    https://codereview.stackexchange.com/questions/171296/find-shortest-path-using-a
     *    https://www.techiedelight.com/find-shortest-path-source-destination-matrix-satisfies-given-constraints/
     *    https://www.geeksforgeeks.org/queue-push-and-queue-pop-in-cpp-stl/
     */

    int size;
    cin >> size;

    vector<vector<int>> arr;

    for (int i = 0; i < size; ++i) {
        vector<int> tmp;
        for (int j = 0; j < size; ++j) {
            int num;
            cin >> num;
            tmp.push_back(num);
        }
        arr.push_back(tmp);
    }
    
    list<Node*> route = findShortestPath(arr, size);

    // Print the path
    if (route.size() == 0) {
        cout << "No route to target!" << endl;
    } else {
        for (list<Node*>::iterator nodeIt = route.begin(); nodeIt != route.end(); ++nodeIt) {
            cout << (*nodeIt)->row << " " << (*nodeIt)->col << endl;
        }
    }
    return 0;
}