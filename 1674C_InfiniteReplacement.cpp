#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define ll long long
#define pb push_back

ll binary(ll a,ll b){
    if(b==0) return 1;
    int res = binary(a,b/2);
    if(b&1){
        return (a*((res*1ll * res)));
    }
    else return (res * 1ll * res);
}
void solve(){
    string s;
    cin >> s;
    int cnt = 0,a = 0;
    for(int i=0;i<s.size();i++) if(s[i]=='a') cnt++;
    string x;
    cin >> x;
    for(int i=0;i<x.size();i++){
        if(x[i]=='a')a++;
    }
    if(x.size() == 1 && x[0] == 'a'){
        cout << 1 << endl;
        return;
    }
    else if(a > 0){
        if(cnt == 0){
            cout << 1 << endl;
            return;
        }
        else cout << -1 << endl;
    }
    else {
        ll n = s.size();
        cout << binary(2,n) << endl;
    }
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