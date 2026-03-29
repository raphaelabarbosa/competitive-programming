#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;

int n;
vector<int> weight;

// Função recursiva que tenta todas as formas de dividir as maçãs em 2 grupos
// ind -> índice atual da maçã
// g1  -> soma dos pesos no grupo 1
// g2  -> soma dos pesos no grupo 2
ll solve(int ind, ll g1, ll g2){
    // Caso base: já distribuímos todos as maçãs
    if(ind == n) return abs(g1 - g2);
    // Tentamos as duas opções e pegamos a com menor diferença
    return min(solve(ind+1,g1+weight[ind],g2),solve(ind+1,g1,g2+weight[ind]));
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t = 1;
    while(t--){
        cin >> n;
        weight.assign(n,0);
        for(int i = 0; i < n; i++) cin >> weight[i];
        cout << solve(0,0,0) << '\n';
    }
    return 0;
}
