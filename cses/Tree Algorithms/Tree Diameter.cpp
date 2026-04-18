#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int N = 2e5;
vector<vector<int> > adj(N);
vector<int> dist(N,0);
 
void bfs(int x){
  dist[x] = 0;
  queue<int> fila; vector<int> vis(N);
  fila.push(x);
 
  while(!(fila.empty())){
    int v = fila.front(); fila.pop();
    vis[v] = 1;
    for(int i: adj[v]){
      if(vis[i] == 0){
        fila.push(i);
        dist[i] = dist[v]+1;
      }
    }
  }
}
int main() {
  ios_base::sync_with_stdio(false);cin.tie(NULL);
  int n; cin >> n;
 
  for(int i = 0; i < n-1; i++){
    int a,b; cin >> a >> b;a--;b--;
    adj[a].push_back(b);
    adj[b].push_back(a);
  }
 
  bfs(0); int ponta , MAX = -1;
  for(int i = 0; i < n; i++){
    if(dist[i]> MAX){
      MAX = dist[i]; ponta = i;
    }
    dist[i] = 0;
  }
  bfs(ponta); MAX = -1;
  for(int i = 0; i < n; i++) MAX = max(MAX,dist[i]);
  cout << MAX << '\n';
  return 0;  
}