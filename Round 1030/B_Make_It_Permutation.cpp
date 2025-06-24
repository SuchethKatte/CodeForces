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
    cout<<2*n-3<<endl;
    for(int i=1;i<=n;i++){
        if(i==1){
            cout<<i<<" "<<2<<" "<<n<<endl;
        }
        else if(i==n){
            cout<<i<<" "<<1<<" "<<n<<endl;
        }
        else if(i==n-1){
            cout<<i<<" "<<1<<" "<<i<<endl;
        }
        else{
            cout<<i<<" "<<1<<" "<<i<<endl;
            cout<<i<<" "<<i+1<<" "<<n<<endl;
        }
    }
    
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