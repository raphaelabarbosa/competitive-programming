#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
vector<vector<int>> adj;
vector<int> vis, cor;
bool ver = true;
void dfs(int x){
    vis[x] = 1;
    for(int viz: adj[x]){
        if(vis[viz] == 0) {
            cor[viz] = -cor[x];
            dfs(viz);
        }
        else{
            //ciclo de tam impar
            if(cor[viz] == cor[x]) ver = false;
        }
    }
}

ll fast_exp(ll y, ll e, ll mod){
    ll ans = 1;
    while(e>0){
        if(e&1) ans = (ans*y)%mod;
        y = (y*y)%mod;
        e >>= 1;
    }
    return ans;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t = 1;
    while(t--){
        int n,m; ll p; cin >> n >> m >> p;
        adj.assign(n,vector<int>());
        vis.assign(n,0);
        cor.assign(n,0);
        for(int i = 0; i < m; i++){
            int a,b; cin >> a >> b; a--; b--;
            adj[a].push_back(b);
            adj[b].push_back(a);
        }
        ll comp = 0;
        for(int i = 0; i < n; i++){
            if(vis[i] == 0){
                comp++;
                cor[i] = 1;
                dfs(i);
            }
        }


        if(ver)cout << (fast_exp(ll(2), comp-1, p)+1)%p<< '\n';
        else cout << "impossible\n";

    }
    return 0;
}



