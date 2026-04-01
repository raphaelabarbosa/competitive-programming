#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;

int n, m; 
vector<vector<int>> adj; 
vector<int> vis; 

void dfs(int x){
    vis[x] = 1; 
    for(int viz : adj[x]){
        if(vis[viz] == 0){
            dfs(viz);
        }
    }
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    cin >> n >> m; 
    
    adj.assign(n, vector<int>()); 
    vis.assign(n, 0); 

    for(int i = 0; i < m; i++){
        int a, b; cin >> a >> b;
        a--; b--; 
        adj[a].push_back(b); 
        adj[b].push_back(a);
    }
    
    int componentes = 0; // quantidade de componentes conexas
    vector<int> lista;// guarda um representante de cada componente
    
    // percorre todos os vértices
    for(int i = 0; i < n; i++){ 
        // se ainda não foi visitado, encontramos uma nova componente
        if(vis[i] == 0){ 
            componentes++;// incrementa o número de componentes
            lista.push_back(i);// guarda esse vértice como representante
            dfs(i); // percorre toda a componente a partir dele
        }
    }

    // se houver mais de uma componente, precisamos conectá-las
    if(componentes > 1){
        cout << componentes - 1 << '\n'; // número mínimo de estradas necessárias
        
        // conecta os representantes em sequência
        // isso garante que todas as componentes fiquem conectadas
        for(int i = 0; i < lista.size()-1; i++){
            // +1 para voltar ao formato 1-based 
            cout << lista[i]+1 << " " << lista[i+1]+1 << '\n';
        }
    }
    else {
        // já está tudo conectado
        cout << 0 << '\n';
    }
    
    return 0;
}

