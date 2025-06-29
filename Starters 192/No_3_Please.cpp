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
    pre[0]=arr[0];
    for(int i=1;i<n;i++){
        pre[i]=pre[i-1]+arr[i];
    }
    if(pre.back()%3==0){
        no();
        return;
    }
    if(n==1){
        yes();
        return;
    }
    int index=0;
    for(int i=0;i<n;i++){
        if(pre[i]%3==0){
            index=i;
        }
    }
    reverse(arr.begin(),arr.begin()+index+2);
    int sum=0;
    for(int i=0;i<n;i++){
        sum+=arr[i];
        if(sum%3==0){
            no();
            return;
        }
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