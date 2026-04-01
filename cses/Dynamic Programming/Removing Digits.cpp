#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t =1;
    while (t--){
        int n; cin >> n;
        int MAX = 1e9+7;
        vector<int> dp(n+1,MAX);
        dp[0] = 0;
        for(int i = 1; i <= n; i++){
            string x = to_string(i);
            for(char j : x){
                if(j == '0') continue;
                dp[i] = min(dp[i],dp[i-(j-'0')]+1);
            }
        }
        cout << dp[n] << '\n';
    }
    return 0;
}