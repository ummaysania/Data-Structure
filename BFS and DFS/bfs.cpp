#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, m;
    cin >> n >> m;
    vector<vector<int>> adj(n+1);
    for(int i=0; i<m; i++){
        int u, v;
        cin >> u >> v;
        adj[u].push_back(v);
    }
    vector<int> vis(n+1, 0);
    queue<int> q;
    q.push(1);
    vis[1] = 1;
    while(!q.empty()){
        int node = q.front();
        q.pop();
        cout << node << " ";
        for(auto it: adj[node]){
            if(!vis[it]){
                q.push(it);
                vis[it] = 1;
            }
        }
    }
    return 0;
}