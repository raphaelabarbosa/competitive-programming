#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t =1;
    while (t--){
        int n,x; cin >> n >> x;
        vector<int> coins(n);
        for(int i = 0; i < n; i++) cin >> coins[i];
        sort(coins.begin(),coins.end());
        int MAX = 1e6+7;
        vector<int> dp(x+1,MAX); dp[0] = 0;
        for(int i = 1; i <= x; i++){
            for(int j: coins){
                if(j>i)break;
                dp[i] = min(dp[i],1+dp[i-j]);
            }
        }
        if(dp[x] == MAX) cout << "-1\n";
        else cout << dp[x] << '\n';
    }   
    
    return 0;
}