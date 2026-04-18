#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int N =  2e5;
vector<vector<int> > adj(N);
vector<ll> dist(N),soma(N,0),sub(N);
vector<int> visdfs(N,0),visdfs2(N,0);
 
void bfs(int x){
  queue<int> fila;
  vector<int> vis(N,0);
  fila.push(x);
  dist[x] = 0;
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
 
int dfs(int x){
  visdfs[x] = 1;
  int subarv = 0;
  for(int i: adj[x]){
    if(visdfs[i] == 0){
      subarv += dfs(i);
    }
  }
  sub[x] = subarv;
  return subarv+1;
}
 
void dfs2(int x,int q){
  visdfs2[x] = 1;
  for(int i: adj[x]){
    if(visdfs2[i] == 0){
      soma[i] = soma[x] - sub[i] + (q-(sub[i]+1)) - 1;
      dfs2(i,q);
    }
  }
}
 
int main() {
  ios_base::sync_with_stdio(false);cin.tie(NULL);
  int n; cin >> n;
 
  for(int i = 0; i < n-1; i++){
    int a,b; cin >> a >> b; a--; b--;
    adj[a].push_back(b);
    adj[b].push_back(a);
  }
  bfs(0);
  int aux = dfs(0);
 
  for(int i = 0; i < n; i++){
    soma[0] += dist[i];
  }
  dfs2(0,n);
 
  for(int i = 0; i < n; i++){
    cout << soma[i] << " ";
  }
  cout << '\n';
  return 0;  
}