#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t = 1;
    while(t--){
        ll n; cin >> n;
        ll soma = 0;
        for(int i = 0; i < n-1; i++){
            int x; soma += (cin >> x,x);
        }
        cout << ((n*n+n)/2) - soma << '\n';
    }
    return 0;
}
