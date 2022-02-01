#include <bits/stdc++.h>
using namespace std;

class Edge
{
public:
    int src, dest, weight;

    Edge(int src, int dest, int weight)
    {
        this->src = src;
        this->dest = dest;
        this->weight = weight;
    }
};

void addEdge(vector<Edge> graph[], int src, int dest, int weight)
{

    graph[src].push_back(Edge(src, dest, weight));
    graph[dest].push_back(Edge(dest, src, weight));
}

void Display(vector<Edge> graph[], int n)
{
    for(int i = 0;i<n;i++){
        cout << graph[i][0].src << " -> ";
        for(auto item : graph[i]){
            cout << item.dest << " ";
        }
        cout << endl;
    }
}

int main()
{
    int n = 7; // Number of edges
    vector<Edge> graph[n];
    // Adjacency list representation
    // Creating the graph
    addEdge(graph, 0, 1, 10);
    addEdge(graph, 0, 2, 10);
    addEdge(graph, 1, 3, 10);
    addEdge(graph, 2, 3, 10);
    addEdge(graph, 2, 4, 10);
    addEdge(graph, 4, 5, 10);
    addEdge(graph, 4, 6, 10);
    addEdge(graph, 5, 6, 10);

    Display(graph, n);
    return 0;
}