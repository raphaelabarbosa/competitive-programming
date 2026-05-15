#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t =1;
    while (t--){
        double t = 0,f;
        vector<pair<string,int>> v = {{"Rafael\n",0}, {"Leonardo\n",0}, {"Donatello\n",0}, {"Michelangelo\n",0}};

        for(int i = 0; i < 4; i++) {cin >> v[i].second; t+= v[i].second;}
        cin >> f; t+= f;

        sort(v.begin(),v.end());
        int val = true;
        for(int i = 0; i < 4; i++){
            if(v[i].second+f > t/2) {cout << v[i].first; val = false;}
        }
        if(val) cout << "sem vencedores\n";
    }
    
    return 0;
}