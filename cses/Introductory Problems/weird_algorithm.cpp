#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll n; cin >> n;
    while(true){ 
        cout << n << " ";
        if(n == 1) break; //Se n for 1, encerramos o loop.
        n = n%2 ? (n*3)+1 : n/2; // Caso contrário, aplicamos a regra: se for ímpar, n = 3n+1; se for par,  n = n/2.
    }
    return 0;
}
