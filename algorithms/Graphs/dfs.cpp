#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;

int n, m; 
vector<vector<int>> adj; 
vector<int> vis; 

void dfs(int x){
    vis[x] = 1; 
    for(int viz : adj[x]){
        if(vis[viz] == 0){
            dfs(viz);
        }
    }
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    cin >> n >> m; 
    
    adj.assign(n, vector<int>()); 
    vis.assign(n, 0); 

    for(int i = 0; i < m; i++){
        int a, b; cin >> a >> b;
        a--; b--; 
        adj[a].push_back(b); 
        adj[b].push_back(a);
    }
    
    for(int i = 0; i < n; i++){ 
        if(vis[i] == 0){ 
            dfs(i); 
        }
    }
    
    return 0;
}

