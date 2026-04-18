#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int N =  2e5;
vector<vector<int> > adj(N);
vector<int> Maxdist(N,0), distbfs(N);
 
void bfs(int x){
  queue<int> fila;
  vector<int> vis(N);
	fila.push(x);
  distbfs[x] = 0;
	while(!fila.empty()){
    	int v = fila.front();fila.pop();
    	vis[v]=1;
    	for(int i:adj[v]){
        	if(vis[i]==0){
            	fila.push(i);
              distbfs[i] = distbfs[v]+1;
        	}
    	}
	}
}
 
void bfsmax(int x){
  queue<int> fila;
  vector<int> dist(N),vis(N);
	fila.push(x);
  dist[x] = 0;
	while(!fila.empty()){
    	int v = fila.front();fila.pop();
    	vis[v]=1;
    	for(int i:adj[v]){
        	if(vis[i]==0){
            	fila.push(i);
              dist[i] = dist[v]+1;
              Maxdist[i] = max(Maxdist[i], dist[i]);
        	}
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
    int distmax = -1, ponta = 0;
    for(int i = 0; i < n; i++){
      if(distbfs[i]> distmax){
        distmax = distbfs[i]; ponta = i;
      }
    }
    bfsmax(ponta);
 
    distmax = -1;
    for(int i = 0; i < n; i++){
      if(Maxdist[i]> distmax){
        distmax = Maxdist[i]; ponta = i;
      }
    }
 
    bfsmax(ponta);
 
  for(int i = 0; i < n; i++){
    cout << Maxdist[i] << " ";
  }
  cout << '\n';
  return 0;  
}