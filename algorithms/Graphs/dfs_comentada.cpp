#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;

int n, m; // quantidade de vértices (nós) e arestas (ligações entre vértices)
vector<vector<int>> adj; // lista de adjacência: para cada vértice, guarda seus vizinhos
vector<int> vis; // vetor que indica se um vértice já foi visitado (0 = não, 1 = sim)

// DFS (Busca em Profundidade): explora o grafo seguindo um caminho
// até não conseguir mais avançar, e só então volta (recursão)
void dfs(int x){
    vis[x] = 1; // marca o vértice atual como visitado para não repetir
    // percorre todos os vizinhos do vértice atual (x)
    for(int viz : adj[x]){
        // se esse vizinho ainda não foi visitado
        if(vis[viz] == 0){
            // chamamos a DFS para esse vizinho,
            // continuando a busca a partir dele (indo mais "fundo")
            dfs(viz);
        }
    }
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    cin >> n >> m; // lê o número de vértices e arestas do grafo
    
    adj.assign(n, vector<int>()); // Corrige o tam do vetor de adjacência para n vértices
    vis.assign(n, 0); // Corrige o tam do vetor de visitados para n vértices

    // leitura das arestas
    for(int i = 0; i < m; i++){
        int a, b; cin >> a >> b;
        
        a--; b--; 
        // converte de 1-based (1 até n) para 0-based (0 até n-1),
        // que é o padrão em C++
        
        // adiciona a aresta nos dois sentidos (grafo não direcionado)
        adj[a].push_back(b); // b é vizinho de a
        adj[b].push_back(a); // a é vizinho de b
    }
    
    // Chamamos a função dfs() para realizar a busca no grafo
    // essa busca vai visitar todos os vértices conectados a ele,
    // ou seja, toda essa "parte" do grafo
    //Considerando a possibilidade de ser um grafo desconexo, 
    //verificamos se todos os vértices foram visitados
    //Assim, visitamos todas as suas componentes conexas
    for(int i = 1; i <= n; i++){ //Olho para todos os vértices
        if(vis[i] == 0){ //Caso ele não tenha sido visitado
            dfs(i); //Inicio uma nova busca visitando ele (Nova componente identificada)
        }
    }
    
    return 0;
}

