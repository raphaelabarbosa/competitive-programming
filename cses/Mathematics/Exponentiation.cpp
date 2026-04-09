#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
const ll mod = 1e9+7;

ll fast_exp(ll a, ll e){ // Calcula y^e % mod em O(log e)
    ll ans = 1; //Acumula resposta
    while(e > 0){ //Ainda há bits a serem analisados
        if(e&1) ans = (ans*a)%mod; //Caso e[0] = 1,então usamos a potência atual de y na resposta
        a = (a*a)%mod; // Atualiza y para a próxima potência: y passa a ser y^(2^k) -> y^(2^(k+1))
        e >>= 1; // shift bit pra direita, ou seja, divide por 2, para analisar o próximo bit
    }
    return ans;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n; cin >> n;
    while(n--){
        ll a,b; cin >> a >> b;
        if(a+b) cout << fast_exp(a,b) << '\n';
        else cout << 1 << '\n';
    }
    return 0;
}
