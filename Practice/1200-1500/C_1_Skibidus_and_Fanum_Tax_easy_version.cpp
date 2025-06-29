#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define gcd(a,b) __gcd(a,b)
#define MOD 1000000007
void fill(vector<int> &arr){ for(auto &it:arr) cin>>it;}
void yes() { cout<<"YES\n"; }
void no() { cout<<"NO\n"; }

void solve(){
    int n, m;
    cin>>n>>m;
    m=1;
    vector<int> a(n), b(m);
    fill(a); fill(b);
    a[0]=min(a[0],b[0]-a[0]);
    for(int i=1;i<n;i++){
        if(a[i-1]<=min(a[i],b[0]-a[i])){
            a[i]=min(a[i],b[0]-a[i]);
        }
        else if(a[i-1]<=max(a[i],b[0]-a[i])){
            a[i]=max(a[i],b[0]-a[i]);
        }
        else{
            no();
            return;
        }
    }
    for(int i=0;i<n-1;i++){
        if(a[i]>a[i+1]){
            no();
            return;
        }
    }
    yes();

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