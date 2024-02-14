#include <iostream>
#include <list>

using namespace std;

class Graph {
    int V;
    list<int> *adj;

public:
    Graph(int V);
    void addEdge(int v, int w);
    void printAdjacencyList();
};

Graph::Graph(int V) {
    this->V = V;
    adj = new list<int>[V];
}

void Graph::addEdge(int v, int w) {
    adj[v].push_back(w);
}

void Graph::printAdjacencyList() {
    for (int v = 0; v < V; ++v) {
        cout << "Adjacency list of vertex " << v << ":\n";
        for (auto it = adj[v].begin(); it != adj[v].end(); ++it)
            cout << *it << " ";
        cout << endl;
    }
}

int main() {
    Graph graph(5);

    graph.addEdge(0, 1);
    graph.addEdge(0, 4);
    graph.addEdge(1, 2);
    graph.addEdge(1, 3);
    graph.addEdge(1, 4);
    graph.addEdge(2, 3);
    graph.addEdge(3, 4);

    graph.printAdjacencyList();

    return 0;
}
