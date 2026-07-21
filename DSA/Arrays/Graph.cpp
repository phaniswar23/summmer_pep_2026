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

    unordered_map<int, list<int>> ajList;
    for (int i = 0; i < m; i++)
    {
        int u, v;
        cin >> u >> v;
        ajList[u].push_back(v);
    }
    
    return 0;
}