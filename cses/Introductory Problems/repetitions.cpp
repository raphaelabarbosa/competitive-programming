#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t = 1;
    while(t--){
        string seq; cin >> seq; 
        int sum = 1, MAX = 1; // sum armazena o tamanho da sequência atual e MAX guarda o maior tamanho até o momento.
        for(int i = 1; i < seq.size(); i++){
            // Se o caractere atual for igual ao anterior, incrementamos o tamanho da sequência atual.
            // Caso contrário, iniciamos uma nova sequência com tamanho 1.
            sum = (seq[i] == seq[i-1]) ? sum+1 : 1;
            MAX = max(MAX,sum);
        }
        cout << MAX << '\n';
    }
    return 0;
}
