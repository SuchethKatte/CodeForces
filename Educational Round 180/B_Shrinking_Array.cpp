#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define gcd(a,b) __gcd(a,b)
#define MOD 1000000007
void yes() { cout<<"YES\n"; }
void no() { cout<<"NO\n"; }
bool monotone(vector<int>& arr){
    bool flag1=true, flag2=true;
    for(int i=0;i<arr.size();i++){
        if(arr[i]>arr[i+1]){
            flag2=false;
        }
        if(arr[i]<arr[i+1]){
            flag1=false;
        }
    }
    return flag1||flag2;
}
void solve(){
    int n;
    cin>>n;
    vector<int> arr(n);
    for(int &it:arr) cin>>it;
    int ans=INT_MAX;
    for(int i=0;i<n-1;i++){
        if(abs(arr[i+1]-arr[i])<=1){
            cout<<0<<endl;
            return;
        }
    }
    // int max1=INT_MIN, min1=INT_MAX;
    // for(int i=0;i<n;i++){
    //     if(arr[i]<=max1&&arr[i]>=min1){
    //         cout<<1<<endl;
    //         return;
    //     }
    //     max1=max(max1,arr[i]);
    //     min1=min(min1,arr[i]);
    // }
    // cout<<-1<<endl;
    // int initial=arr[1]-arr[0];
    // bool flag=false;
    // for(int i=0;i<n-1;i++){
    //     if(initial>0){
    //         if(arr[i]>arr[i+1]){
    //             flag=true;
    //         }
    //     }
    //     else{
    //         if(arr[i]<arr[i+1]){
    //             flag=true;
    //         }
    //     }
    // }
    // cout<<(flag?1:-1)<<endl;
    cout<<(monotone(arr)?-1:1)<<endl;
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