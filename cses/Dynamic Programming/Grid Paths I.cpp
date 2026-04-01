#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t =1;
    while (t--){
      int n,MOD = 1e9+7; cin >> n;
      vector<int> dp(n,0);
      string ant = "";
      for(int i = 0; i < n;i++){
        string x; cin >> x;
        for(int j = 0; j < n; j++){
            if(x[j] == '*') dp[j] = 0;
            else{
                if(i == 0 && j == 0) {dp[j] = 1; continue;}
                int atual = 0;
                if( j > 0) atual = (atual + dp[j-1])%MOD;
                if( i > 0) atual = (atual + dp[j])%MOD;
                dp[j] = atual;
            }
        }
        ant = x;
      }
      cout << dp[n-1] << '\n';  
    }
    
    return 0;
}