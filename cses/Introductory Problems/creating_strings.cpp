#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;

string s;
vector<int> used;
set<string> resp; // armazena todas as permutações únicas e ordenadas

// Função de backtracking para gerar todas as permutações
// ind -> posição atual que estamos preenchendo
// perm -> permutação construída até agora
void solve(int ind,string perm){
    // Caso base: já escolhemos caracteres para todas as posições
    if(ind == s.size()) {
        resp.insert(perm); 
        return;
    }
    
    // Tenta colocar cada caractere ainda não usado na posição atual
    for(int i = 0; i < s.size(); i++){
        if(!used[i]){
            perm.push_back(s[i]);
            used[i] = 1;
            solve(ind+1,perm);
            perm.pop_back();
            used[i] = 0;
        }
    }
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t = 1;
    while(t--){
        cin >> s;
        used.assign(s.size(),0);
        solve(0,"");
    }

    cout << resp.size() << '\n';
    for(string i: resp) cout << i << '\n';
    return 0;
}
