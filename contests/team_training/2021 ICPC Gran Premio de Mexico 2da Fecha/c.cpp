#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
 
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t = 1; cin >> t;
    while(t--){
        string p; cin >> p;
        int n = p.size();
        int cont = 0, best = n;
        for(int i = n-1; i >= 0; i--){
            if(p[i] == 'B' && cont == 0){
                best = i;
            }
            else{
                if(p[i] == 'R') cont--;
                else cont++;
                if(cont == 0) best = i;
            }
        }

        int val = 0;
        bool resp = true;
        for(int i = best; i < n; i++){
            if(p[i] == 'B') val++;
            else val--;
        }
        for(int i = 0; i < best; i++){
            if(p[i] == 'B') val++;
            else val--;
            if(val < 0){resp = false; break;}
        }
        
        if(resp) cout << best << '\n';
        else cout << -1 << '\n';
    }
    return 0;
}