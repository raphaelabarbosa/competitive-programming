#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t =1;
    while (t--){
        int n, MAX = 1, sum = 1, ant = -1; cin >> n;

        for(int i = 0; i < n; i++){
            int a; cin >> a;
            if(a-ant == 1){sum++; MAX = max(MAX,sum);}
            else sum = 1;
            ant = a;
        }
        cout << MAX << '\n';
    }
    
    return 0;
}