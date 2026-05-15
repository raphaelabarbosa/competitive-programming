#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
const ll INF = 1e18;
const int max_v = 1e5;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t = 1;
    while(t--){
        int n,w; cin >> n >> w;
        int resp = 0;
        vector<pair<int,int>> obj(n+1);
        vector<vector<long long>>dp (n+1,vector<long long>(max_v+1,INF));
        dp[0][0] = 0;


        for(int i = 1; i <= n; i++){
            int wi,vi; cin >> wi >> vi;
            obj[i] =  make_pair(wi,vi);
        }

        for(int i = 1; i <= n; i++){
            for(int j = 0; j <= 1e5; j++){
                dp[i][j] = dp[i-1][j];
                if(j >= obj[i].second){
                    dp[i][j] = min(dp[i-1][j-obj[i].second]+obj[i].first,dp[i][j]);
                }
                
            }
        }

        for(int i = 0; i <= max_v; i++){
            if(dp[n][i] <= w) resp = i;
        }

        cout << resp << '\n';
    }
    return 0;
}
