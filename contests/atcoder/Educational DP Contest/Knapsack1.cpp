#include <bits/stdc++.h>
using namespace std;

int main() {
  int n,w; cin >> n >> w;
  vector<int> val(n+1),peso(n+1);
  for(int i = 1; i < n+1; i++) cin >> peso[i] >> val[i];
  vector<vector<long long> > dp(n+1, vector<long long> (w+1));

  for(int i = 0; i < n+1; i++){
    for(int j = 0; j < w+1;j++){
      //base
      if(i == 0 || j == 0) dp[i][j] = 0; 
      //Podemos colocar
      else if(peso[i] <= j){
            dp[i][j] = max((dp[i-1][j-peso[i]])+val[i],dp[i-1][j]);
          }
          else{
            dp[i][j] = dp[i-1][j];
          }
    }
  }
  cout << dp[n][w];
  return 0;
}