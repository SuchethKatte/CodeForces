#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define gcd(a,b) __gcd(a,b)
#define MOD 1000000007
void yes() { cout<<"YES\n"; }
void no() { cout<<"NO\n"; }

void solve(){
    int n, m, k;
    cin>>n>>m>>k;
    int l=0,r=m;
    while(l<=r){
        int mid=(l+r)/2;
        int x=mid;
        if(((m/(x+1))*x+(m%(x+1)))*n>=k){
            r=mid-1;
        }
        else{
            l=mid+1;
        }
    }
    cout<<l<<endl;
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