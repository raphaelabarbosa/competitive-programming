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
        int sum = 1, MAX = 1;
        for(int i = 1; i < seq.size(); i++){
            sum = (seq[i] == seq[i-1]) ? sum+1 : 1;
            MAX = max(MAX,sum);
        }
        cout << MAX << '\n';
    }
    return 0;
}
