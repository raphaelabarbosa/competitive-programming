#include <bits/stdc++.h>
using namespace std;
 
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n,parcial = 0,resp = 0; cin >> n;
    set<pair<int,char>> rest;
    for(int i = 0; i < n; i++){
        int a,b; cin >> a >> b; 
        rest.insert({a,'a'});
        rest.insert({b,'b'});
    }
    //cout << '\n';
    for(auto it = rest.begin(); it != rest.end(); it++){
        if((*it).second == 'a') ++parcial;
        else --parcial;
        //cout << (*it).first << " " << parcial << '\n';
        resp = max(resp,parcial);
    }
    
    cout << resp;
    return 0;
}