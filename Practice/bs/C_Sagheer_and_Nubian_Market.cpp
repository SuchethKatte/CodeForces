#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define gcd(a,b) __gcd(a,b)
#define MOD 1000000007
void yes() { cout<<"YES\n"; }
void no() { cout<<"NO\n"; }
int ans(vector<int> arr, int cost ,int k){
    for(int i=0;i<arr.size();i++){
        arr[i]=arr[i]+k*(i+1);
    }
    sort(arr.begin(),arr.end());
    int sum=0;
    for(int i=0;i<k;i++){
        sum+=arr[i];
        if(sum>cost) return cost+1;
    }
    return sum;
}
void solve(){
    int n, cost;

    cin>>n>>cost;
    vector<int> arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int l=1, r=n;
    int a=0;
    while(l<=r){
        int mid=(l+r)/2;
        if(ans(arr,cost,mid)<=cost){
            l=mid+1;
            a=ans(arr,cost,mid);

        }
        else{
            r=mid-1;
        }
    }
    cout<<r<<" "<<a<<endl;

}
signed main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int tt=1;
    while(tt--){
        solve();
    }
    return 0;
}