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
    int y=(2*arr[0]-arr[1])/(n+1);
    int x=arr[0]-n*y;
    if(x<0||y<0){
        no();
        return;
    }
    for(int i=0;i<n;i++){
        arr[i]-=x*(i+1);
        arr[i]-=y*(n-i);
        if(arr[i]){
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