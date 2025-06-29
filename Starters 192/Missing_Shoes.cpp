#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define gcd(a,b) __gcd(a,b)
#define MOD 1000000007
void fill(vector<int> &arr){ for(auto &it:arr) cin>>it;}
void yes() { cout<<"YES\n"; }
void no() { cout<<"NO\n"; }

void solve(){
    int l, r;
    cin>>l>>r;
    cout<<abs(l-r);
}
signed main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int tt;
    tt=1;
    while(tt--){
        solve();
    }
    return 0;
}