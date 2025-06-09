#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define gcd(a,b) __gcd(a,b)
#define MOD 1000000007
void yes() { cout<<"YES\n"; }
void no() { cout<<"NO\n"; }

void solve(){
    int n; cin>>n;
    vector<int> dp(n+1,0);
    dp[0]=1; 
    for(int i=1;i<=n;i++){
        for(int j=1;j<=6&&j<=i;j++){
            dp[i]=(dp[i]+dp[i-j])%MOD;
        }
    }
    cout<< dp[n]<<endl;

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