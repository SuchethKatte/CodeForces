#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define gcd(a,b) __gcd(a,b)
#define MOD 1000000007
void yes() { cout<<"YES\n"; }
void no() { cout<<"NO\n"; }

void solve(){
    int n, s, x;
    cin>>n>>s>>x;
    vector<int> arr(n);
    for(auto &it:arr) cin>>it;
    int count=0;
    for(int i=0;i<n;i++){
        int sum=arr[i];
        int maxi=arr[i];
        if(sum==s&&maxi==x) count++;
        for(int j=i+1;j<n;j++){
            sum+=arr[j];
            maxi=max(maxi,arr[j]);
            if(maxi>x) break;
            if(sum==s&&maxi==x) count++;
        }
    }
    cout<<count<<endl;
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