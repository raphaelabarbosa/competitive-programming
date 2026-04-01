#include <bits/stdc++.h>
using namespace std;
 
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n; cin >> n;
    set <int> valores;
    while(n--){
        int x; cin >> x; valores.insert(x);
    }
    cout << valores.size();
    return 0;
}