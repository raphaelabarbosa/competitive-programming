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
        ll sum = 0;
        for(int i = 0; i < n-1; i++){
            int x; sum += (cin >> x,x);
        }
        //Calculamos a diferença entre a soma da PA de 1 até n e a soma dos valores lidos.
        //O resultado é o número que está faltando na sequência.
        cout << ((n*n+n)/2) - sum << '\n';
    }
    return 0;
}
