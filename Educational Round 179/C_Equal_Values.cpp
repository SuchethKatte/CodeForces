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
    for(int i=0;i<n;i++){
        cin>>arr[i];
    } 
    int cost=LONG_LONG_MAX;
    int i=0;
    while(i<n){
        int j=i;
        while(j<n&&arr[i]==arr[j]){
            j++;
        }
        cost=min(cost,arr[i]*(i+n-j));
        i=j;
    }
    cout<<cost<<endl;
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