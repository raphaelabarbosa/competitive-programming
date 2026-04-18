#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int N = 2e5;
vector<vector<int> > adj(N);
vector<int> sub(N),vis(N,0);
 
int dfs(int x){
  vis[x] = 1;
  int subordinates = 0;
  for(int i: adj[x]){
    if(vis[i] == 0){
      subordinates += dfs(i);
    }
  }
  sub[x] = subordinates;
  return (subordinates+1);
}
 
int main() {
  ios_base::sync_with_stdio(false);cin.tie(NULL);
  int n; cin >> n;
  for(int i = 1; i < n; i++){
    int a; cin >> a; a--;
    adj[a].push_back(i);
  }
  dfs(0);
 
  for(int i = 0; i < n; i++){
    cout << sub[i] << " ";
  }
  cout << '\n';
  return 0;  
}