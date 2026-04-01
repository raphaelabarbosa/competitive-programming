#include <bits/stdc++.h>
using namespace std;
 
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n,soma; cin >> n >> soma;
    vector<pair<int,int>> seq(n);
    for(int i = 0; i < n;i++){
        int a; cin >> a;
        seq[i] = {a,i+1};
    }
    sort(seq.begin(), seq.end());
    int l = 0, r = n-1;
    while(l < r){
        if(seq[l].first+seq[r].first == soma) break;
        else if(seq[l].first+seq[r].first > soma) r--;
        else if(seq[l].first+seq[r].first < soma) l++;
    }
    
    if(l == r) cout << "IMPOSSIBLE";
    else{
        cout <<seq[l].second<< " " <<seq[r].second;
    }
    return 0;
}