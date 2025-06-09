#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define gcd(a,b) __gcd(a,b)
#define MOD 1000000007
void yes() { cout<<"YES\n"; }
void no() { cout<<"NO\n"; }

void solve(){
    int n, l, r;
    cin>>n>>l>>r;
    vector<int> arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    sort(arr.begin(),arr.end());
    int low=0, high=n-1;
    while(arr[0]+arr[high]>r&&high>=0){
        high--;
    }
    low=high-1;
    while(arr[low]+arr[high]>r&&low>=0){
        low--;
    }
    int ans1=(low*(low+1))/2+(high-low)*(low+1);
    low=0; high=n-1;
    while(arr[0]+arr[high]>l-1&&high>=0){
        high--;
    }
    low=high-1;
    while(arr[low]+arr[high]>l-1&&low>=0){
        low--;
    }
    int ans2=(low*(low+1))/2+(high-low)*(low+1);
    cout<<ans1-ans2<<endl;
    
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