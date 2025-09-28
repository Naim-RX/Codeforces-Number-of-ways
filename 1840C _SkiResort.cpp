#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define ll long long


void solve(){
    int n,k,q;
    cin >> n >> k >> q;
    ll cnt = 0;
    ll ans = 0;
    vector<int>v(n);
    for(int i=0;i<n;i++){
        cin >> v[i];
    }
    for(int i=0;i<n;i++){
        if(v[i] <= q){
            cnt++;
            if(i==n-1 || v[i+1] > q){
                if(cnt >= k){
                    ll x = (cnt - k) + 1LL;
                    ll add = (x * (x+1LL))/2LL;
                    ans += add;
                }
                cnt = 0;
            }
        }
    }
    cout << ans << endl;
}


int main(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif
    
    
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    
    int t=1;
    cin >> t;
    while(t--){
        solve();
    }
}