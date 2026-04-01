#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
 
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t =1;
    while (t--){
        int n,t; cin >> n >> t;
        vector<int> m(n);
        for(int i = 0; i < n; i++) cin >> m[i];
 
        ll l = 1,r = 1e18, ans = r;
        while(l <= r){
            ll q = 0;
            ll mid = l+((r-l)/2);
            for(int i = 0; i < n; i++){
                q += (mid/m[i]);
                if(q>t) break;
            }
            if(q < t){
                l = mid+1;
            }
            else {
                ans = mid;
                r = mid-1;
            }
        }
        cout << ans << '\n';
    }
    return 0;
}