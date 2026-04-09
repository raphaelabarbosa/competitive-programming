#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
const ll MOD = 1e9+7;

ll fast_exp(ll a, ll e,ll mod){ 
    ll ans = 1; 
    if(!(a+e)) return ans; 
    while(e > 0){ 
        if(e&1) ans = (ans*a)%mod; 
        a = (a*a)%mod; 
        e >>= 1; 
    }
    return ans;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n; cin >> n;
    while(n--){
        ll a,b,c; cin >> a >> b >> c;
        b = fast_exp(b,c,MOD-1);
        cout << fast_exp(a,b,MOD) << '\n';
    }
    return 0;
}
