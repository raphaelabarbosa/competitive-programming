#include <bits/stdc++.h>
using namespace std;
 
int main() {
  ios_base::sync_with_stdio(false);cin.tie(NULL);
  int n; cin >> n;
  vector<int> lista(n);
  for(int i = 0; i < n; i++) cin >> lista[i];
 
  sort(lista.begin(), lista.end());
 
  int resp = 0;
 
  for(int i = 0; i < n;i++){
    if(((i > 0) && (lista[i] != lista[i-1])) || i == 0){
      resp++;
    }
  }
 
  cout << resp << '\n';
  return 0;  
}