#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define gcd(a,b) __gcd(a,b)
#define MOD 1000000007
void yes() { cout<<"YES\n"; }
void no() { cout<<"NO\n"; }

void solve(){
    int a, b;
    cin>>a>>b;
    if(gcd(a,b)!=1){
        cout<<0<<endl;
        return;
    }
    if(a&1&&b&1){
        if(gcd(a+1,b)!=1||gcd(a,b+1)!=1){
            cout<<1<<endl;
            return;
        }
        cout<<2<<endl;
        return;
    }
    cout<<1<<endl;
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