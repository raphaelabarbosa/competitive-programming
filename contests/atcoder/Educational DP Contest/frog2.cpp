#include <bits/stdc++.h>
using namespace std;
const int INF = 0x3f3f3f3f;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n,k; cin >> n >> k;
    vector<int>pedras(n),dp(n,INF);
    for(int i = 0; i < n; i++) cin >> pedras[i];
    dp[0]=0;
    for(int i = 0; i < n; i++){
       for(int j = i+1; j <= i+k; j++){
           if(j >= n) break;
           dp[j] = min(dp[j],dp[i]+ abs(pedras[j]-pedras[i]));
       } 
    }
    
    cout << dp[n-1];
    return 0;
}