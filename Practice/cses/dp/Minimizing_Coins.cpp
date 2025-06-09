#include<bits/stdc++.h>
using namespace std;
#define gcd(a,b) __gcd(a,b)
#define MOD 1000000007
void yes() { cout<<"YES\n"; }
void no() { cout<<"NO\n"; }

void solve(){
    int n,target;
    cin>>n>>target;
    vector<int> coin(n);
    vector<int> dp(target+1,target+1);
    int mini=0;
    for(int i=0;i<n;i++){
        cin>>coin[i];
        mini=min(mini,coin[i]);
    }
    dp[0]=0;
    for(int i=1;i<=target;i++){
        for(int j=0;j<n;j++){
            if(i-coin[j]>=0){
                dp[i]=min(dp[i],1+dp[i-coin[j]]);
            }
        }
    }
    cout<<(dp[n]==target+1?-1:dp[n])<<endl;
}
signed main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    solve();
    return 0;
}