#include<bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false),cin.tie(NULL);
typedef long long ll;
typedef long double ld;
const int INF  = 0x3f3f3f3f;
const long long INFL = 0x3f3f3f3f3f3f3f3f;
 
int main(){
  fastio;
  int n; cin >> n;
  vector<int> lista(n),resposta(n,0);
  for(int i = 0; i < n; i++) cin >> lista[i];
 
  stack<int> pilha; int ant = 0;
 
  for(int i = n-1; i >= 0; i--){
    if(lista[i] >= ant) pilha.push(i);
    else{
      while(!(pilha.empty()) && lista[i] < lista[pilha.top()]){
        resposta[pilha.top()] = i+1;
        pilha.pop();
      }
      pilha.push(i);
    }
    ant = lista[i];
  }
 
  while(!(pilha.empty())){
    resposta[pilha.top()] = 0;
    pilha.pop();
  }
 
  for(int i = 0; i < n; i++) cout << resposta[i] << " ";
  return 0;
}