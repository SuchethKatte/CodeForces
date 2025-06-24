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
    unordered_map<int,int> mpp;
    for(int i=0;i<n;i++){
        cin>>arr[i];
        mpp[arr[i]-i]++;
    }
    int ans=0;
    for(auto it:mpp){
        int temp=((it.second)*(it.second-1))/2;
        ans+=temp;
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