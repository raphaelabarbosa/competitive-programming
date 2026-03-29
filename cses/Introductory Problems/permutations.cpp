#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t = 1;
    while(t--){
        int n; cin >> n;
        //Casos particulares.
        if(n == 2 || n == 3) {cout << "NO SOLUTION\n"; return 0;}
        if(n == 4) {cout << "3 1 4 2 \n"; return 0;}
        //Sequência de números ímpares, seguida da sequência de números pares.
        // A diferença entre qualquer par adjacente será >= 2.
        for(int i = 1; i <= n; i+=2) cout << i << " ";
        for(int i = 2; i <= n; i += 2)cout << i << " ";
    }
    return 0;
}
