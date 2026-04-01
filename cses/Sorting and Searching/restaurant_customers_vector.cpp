#include <bits/stdc++.h>
using namespace std;
 
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n,parcial = 0,resp = 0; cin >> n;
    vector<pair<int,char>> rest;
    for(int i = 0; i < n; i++){
        int a,b; cin >> a >> b; 
        rest.push_back({a,'a'});
        rest.push_back({b,'b'});
    }
    sort(rest.begin(),rest.end());
    for(int i = 0; i < rest.size();i++){
        if(rest[i].second == 'a') ++parcial;
        else --parcial;
        resp = max(resp,parcial);
    }
    
    cout << resp;
    return 0;
}