#include<iostream>
#include<list>
using namespace std;

int main(){
    int n;//no of vertices;
    int m;//no of edges

    cout<< "Enter the number of vertices: " << " ";
    cin >> n;
    cout<< "Enter the number of edges: " << " ";
    cin >> m;

    unordered_map<int, list<int>> adjList;
    for (int i = 0; i < m; i++)
    {
        int u, v;
        cin >> u >> v;
        adjList[u].push_back(v);
        adjList[v].push_back(u); //Write this graph is undirected
    }
    cout << "Adjacency List" << endl;
    
    for(auto i : adjList)
    {
        cout << i.first << "->" << endl;
        
        
    }
    return 0;
}