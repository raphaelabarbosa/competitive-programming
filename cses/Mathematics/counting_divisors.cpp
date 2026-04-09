#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t = 1; cin >> t;
    while(t--){
        int x, cont = 0; cin >> x;

        for(int i = 1; (i*i) <= x; i++){
            if(!(x%i)) cont  += (i != (x/i) ? 2:1);
        }
        cout << cont << '\n';
    }
    return 0;
}
