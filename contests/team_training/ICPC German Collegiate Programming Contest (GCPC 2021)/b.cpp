#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t = 1;
    while(t--){
        string s; cin >> s;
        int last = 100;
        for(int i = 0; i < s.size(); i++){
            if(s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u'){
                last = i;
            }
        }
        for(int i = 0; i < s.size(); i++){
            if(i <= last) cout << s[i];
            else break;
        }
        if(last != 100) cout << "ntry\n";
    }
    return 0;
}



