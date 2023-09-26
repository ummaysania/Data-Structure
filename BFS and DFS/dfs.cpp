#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, m;
    cin >> n >> m;
    vector<vector<int>> adj(n+1);
    vector<bool> visited(n+1, false);
    for(int i = 0; i < m; i++){
        int u, v;
        cin >> u >> v;
        adj[u].push_back(v); // directed graph
    }
    stack<int> s;
    s.push(1);
    visited[1] = true;
    while(!s.empty()){
        int u = s.top();
        s.pop();
        cout << u << " ";
        for(int v : adj[u]){
            if(!visited[v]){
                s.push(v);
                visited[v] = true;
            }
        }
    }
    return 0;
}