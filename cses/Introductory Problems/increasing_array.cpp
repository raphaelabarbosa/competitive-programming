#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t = 1;
    while(t--){
        int n; cin >> n;
        ll moves = 0; 
        int pre; cin >> pre;
        for(int i = 1; i < n; i++){
            int curr; cin >> curr;
            if(curr < pre) moves += (pre - curr);
            else pre = curr;
        }
        cout << moves << '\n';
    }
    return 0;
}
