#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t =1; cin >> t;
    while (t--){
        string n; cin >> n;
        int cont = 0;
        while(n.size()>1){
            cont++;
            ll aux = 1;
            for(int i = 0; i < n.size(); i++) aux *= (n[i] - '0');
            n = to_string(aux);
        }
        cout << cont << '\n';
    }
    
    return 0;
}