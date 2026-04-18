#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;

int n, m; 
vector<vector<int>> adj; 
vector<int> grau,topo_sort;
queue<int> fila; 

void bfs(){
    while(!fila.empty()){
        int v = fila.front(); 
        fila.pop(); 
        topo_sort.push_back(v);
        for(int viz: adj[v]){
            grau[viz]--;
            if(!grau[viz]){
                fila.push(viz); 
            }
        }
    }
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t = 1;
    while(t--){
        cin >> n >> m; 
    
        adj.assign(n, vector<int>()); 
        grau.assign(n, 0); 

        for(int i = 0; i < m; i++){
            int a, b; cin >> a >> b;
            a--; b--; 
            adj[a].push_back(b); 
            grau[b]++;
        }

        for(int i = 0; i < n; i++){ 
            if(!grau[i]){ 
                fila.push(i);  
            }
        }
        bfs();

        if(topo_sort.size() == n){
            for(int i: topo_sort) cout << i+1 << " ";
        }
        else{
            cout << "IMPOSSIBLE";
        }
    }
    return 0;
}
