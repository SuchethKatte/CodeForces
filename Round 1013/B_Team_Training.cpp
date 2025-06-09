#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define gcd(a,b) __gcd(a,b)
#define MOD 1000000007
void yes() { cout<<"YES\n"; }
void no() { cout<<"NO\n"; }

void solve(){
    int n, target;
    cin>>n>>target;
    vector<int> arr(n);
    int count=1;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int ans=0;
    sort(arr.begin(),arr.end());
    reverse(arr.begin(),arr.end());
    for(int i=0;i<n;i++){
        if(arr[i]*count>=target){
            ans++;
            count=1;
        }
        else{ count++;}
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