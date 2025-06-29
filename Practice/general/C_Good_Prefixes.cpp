#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define gcd(a,b) __gcd(a,b)
#define MOD 1000000007
void yes() { cout<<"YES\n"; }
void no() { cout<<"NO\n"; }

void solve(){
    int n;
    cin>>n;
    vector<int> arr(n);
    for(auto &it:arr) cin>>it;
    int sum=0;
    int maxi=0;
    int ans=0;
    for(int i=0;i<n;i++){
        sum+=arr[i];
        maxi=max(maxi,arr[i]);
        if(sum-maxi==maxi){
            ans++;
        }
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