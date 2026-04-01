#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t =1;
    while (t--){
        int x; cin >> x;
        vector<int> dp(x+1,0); dp[0] = 1; 
        int MOD = 1e9+7;
        for(int i = 1; i <= x; i++){
            for(int j = 1; j <= 6 && j <= i; j++){
                dp[i] = (dp[i]+dp[i-j])%MOD;
            }
        }
        cout << dp[x] << '\n';
    }
    
    return 0;
}