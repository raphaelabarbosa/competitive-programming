#include <bits/stdc++.h>
using namespace std;

int main() {
  int n,w; cin >> n >> w;
  vector<long long> val(n+1); vector<int> peso(n+1);
  for(int i = 1; i < n+1; i++) cin >> peso[i] >> val[i];
  vector<long long> dp(w+1,0);

  for(int i = 1; i < n+1; i++){
    for(int j = w; j > 0;j--){
        if(peso[i] <= j){
            dp[j] = max((dp[j-peso[i]])+val[i],dp[j]);
        }
    }
  }
  cout << dp[w];
  return 0;
}