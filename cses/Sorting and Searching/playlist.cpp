#include <bits/stdc++.h>
using namespace std;
 
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n; cin >> n;
    vector<int> m(n);
    set<int> c;
    
    for(int i = 0; i < n; i++) cin >> m[i];
    
    int l = 0,resp = 0;
    for(int i = 0; i < n; i++){
        //cout <<'i'<< m[i]<< " ";
        if(c.find(m[i]) != c.end()){
            while(m[l] != m[i]){
                //cout << m[l] << "ml ";
                c.erase(m[l]);
                ++l;
            }
            ++l;
        }
        else{
            c.insert(m[i]);
        }
        resp = max(resp,int(c.size()));
        //for(auto j:c){cout << j<< ' ';}
        //cout << '\n';
    }
    
    cout << resp;
    return 0;
}