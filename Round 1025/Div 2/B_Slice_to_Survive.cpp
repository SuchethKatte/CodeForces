#include<bits/stdc++.h>
using namespace std;
#define int long long 

void solve(){
    int n, m, a, b;
    cin>>n>>m>>a>>b;
    int h=min(a,n-a+1);
    int v=min(b,m-b+1);
    
    int p=ceil(log2(h))+ceil(log2(m));
    int q=ceil(log2(v))+ceil(log2(n));
    cout<<1+min(p,q)<<endl;
    
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