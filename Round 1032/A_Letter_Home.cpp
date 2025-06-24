#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define gcd(a,b) __gcd(a,b)
#define MOD 1000000007
void yes() { cout<<"YES\n"; }
void no() { cout<<"NO\n"; }

void solve(){
    int n, s;
    cin>>n>>s;
    vector<int> arr(n);
    for(auto &it:arr) cin>>it;
    if(s>=arr.back()){
        cout<<s-arr[0]<<endl;
        return;
    }
    if(s<=arr[0]){
        cout<<arr.back()-s<<endl;
        return;
    }
    int sum1=arr.back()-s, sum2=s-arr[0];
    int add1=min(sum1,sum2);
    int add2=max(sum1,sum2);
    cout<<add2+2*add1<<endl;

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