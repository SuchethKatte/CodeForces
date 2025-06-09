#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define gcd(a,b) __gcd(a,b)
#define MOD 1000000007
void yes() { cout<<"YES\n"; }
void no() { cout<<"NO\n"; }

void solve(){
    int x;
    cin>>x;
    int ans=2;
    int small=0;
    while(small<x){
        small=2*small+1;
        ans++;
        if(small>=x){
            cout<<ans<<endl;
            return;
        }
        ans++;
    }
    cout<<ans<<endl;
    
}
signed main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int tt;
    cin>>tt;
    while(tt--){
        solve();
    }
    return 0;
}