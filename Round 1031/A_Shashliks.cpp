#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define gcd(a,b) __gcd(a,b)
#define MOD 1000000007
void yes() { cout<<"YES\n"; }
void no() { cout<<"NO\n"; }

void solve(){
    int n, a, b, x, y;
    cin>>n>>a>>b>>x>>y;
    int ans=0;
    if(x<y){
        int count=(n-a)/2 +1;
        int tempafter=n-(count*x);
        ans+=count;
        n=tempafter;
        count=(n-b)/2+1;
        tempafter=n-(count*y);
        ans+=count;
        cout<<ans<<endl;
    }
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