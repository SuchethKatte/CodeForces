#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define gcd(a,b) __gcd(a,b)
#define MOD 1000000007
void yes() { cout<<"YES\n"; }
void no() { cout<<"NO\n"; }

void solve(){
    int n, l; cin>>n>>l;
    vector<int> arr(n);
    vector<int> bits(32,0);
    for(int i=0;i<n;i++){
        cin>>arr[i];
        int temp=arr[i];
        int j=0;
        while(temp){
            bits[j]+=temp%2;
            temp/=2;
            j++;
        }
    }
    int ans=0;
    for(int i=0;i<32;i++){
        if(bits[i]>(n/2)){
            ans+=(1<<i);
        }
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