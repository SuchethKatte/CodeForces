#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define gcd(a,b) __gcd(a,b)
#define MOD 1000000007
void fill(vector<int> &arr){ for(auto &it:arr) cin>>it;}
void yes() { cout<<"YES\n"; }
void no() { cout<<"NO\n"; }

void solve(){
    int n;
    cin>>n;
    vector<int> arr(n);
    vector<int> pre(n);
    fill(arr);
    // for(int i=0;i<n;i++){
    //     pre[i]=arr[i]-i;
    // }
    // int mini=INT_MAX;
    // for(int i=0;i<n;i++){
    //     if(pre[i]<0){
    //         cout<<i<<endl;
    //         return;
    //     }
    //     if(pre[i]==0){
    //         cout<<i+1<<endl;
    //         return;
    //     }
    //     if(i){
    //         arr[i]++;
    //     }
    // }
    // cout<<*min_element(arr.begin(),arr.end())<<endl;int ans=arr[0];
    int ans=arr[0];
    for(int i=1;i<n;i++){
        int temp=max(arr[i]+1, i);
        ans=min(ans,temp);
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