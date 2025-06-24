#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define gcd(a,b) __gcd(a,b)
#define MOD 1000000007
void yes() { cout<<"YES\n"; }
void no() { cout<<"NO\n"; }

void solve(){
    int a, x, y;
    cin>>a>>x>>y;
    if(x>y){
        swap(x,y);
    }
    if(x<a&&a<y){
        no();
        return;
    }
    if(abs(x-a)<1||abs(a-y)<1){
        no();
        return;
    }
    yes();
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