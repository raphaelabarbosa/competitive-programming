#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t = 1;
    while(t--){
        int n,q; cin >> n >> q;
        vector<ll> pref_sum(n+1,0);
        for(int i = 1; i <= n; i++){
            cin >> pref_sum[i]; pref_sum[i]+= pref_sum[i-1];
        }

        for(int i = 0; i < q; i++){
            int a,b; cin >> a >> b;
            cout << pref_sum[b]-pref_sum[a-1] << '\n';
        }
    }
    return 0;
}
