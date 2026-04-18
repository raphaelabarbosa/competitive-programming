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
        string c; cin >> c;
        char unit = c[c.size()-1]; c.pop_back();
        ll storage = stoll(c);
        if(unit == 'G') storage *= 1024;
        else if(unit == 'T') storage *= ll(1024*1024);

        vector<ll> pref_sum(n+1,0);
        for(int i = 1; i <= n; i++){
            cin >> pref_sum[i];
            pref_sum[i] += pref_sum[i-1];
        }

        int left = 1, right = n;
        int R = 0, L = -1;
        while(left <= right){
            int mid = (left+right)/2;
            bool val = true;
            for(int i = mid; i <= n; i++){
                if(pref_sum[i] - pref_sum[i-mid] > storage){val = false; break;}
            }
            if(val){
                R = mid;
                left = mid+1;
            }
            else right = mid-1;
        }

        for(int i = R+1; i <= n; i++){
                if(pref_sum[i] - pref_sum[i-(R+1)] > storage){L = i - R; break;}
        }

        cout << R << " " << L << '\n';

    }
    return 0;
}
