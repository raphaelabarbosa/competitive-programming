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
        vector<int> v(n),p(n);
        for(int i = 0; i < n; i++) cin >> v[i];
        for(int i = 0; i < n; i++) cin >> p[i];
        vector<int> dp(x+1,0);
        for(int i = 0; i < n; i++){
            for(int j = x; j >= 1; j--){
                if(j >= v[i]){
                    dp[j] = max(dp[j],p[i]+dp[j-v[i]]);
                }
            }
        }
        cout << dp[x] << '\n';
    }
    return 0;
}