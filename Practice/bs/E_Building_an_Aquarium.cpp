#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define gcd(a,b) __gcd(a,b)
#define MOD 1000000007
void yes() { cout<<"YES\n"; }
void no() { cout<<"NO\n"; }
bool pos(vector<int> arr, int x, int h){
    int sum=0;
    for(int num:arr){
        sum+=max((int) 0,h-num);
        if(sum>x) return false;
    }
    return true;

}
void solve(){
    int n, x;
    cin>>n>>x;
    int l=INT_MAX;
    vector<int> arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
        l=min(l,arr[i]);
    }
    int r=1e10;
    while(l<=r){
        int mid=(l+r)/2;
        if(pos(arr,x,mid)){
            l=mid+1;
        }
        else{
            r=mid-1;
        }
    }
    cout<<r<<endl;
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