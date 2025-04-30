#include<bits/stdc++.h>
using namespace std;
#define int long long 
void solve(){
    int a, b, c;
    cin>>a>>b>>c;
    int avg=(a+b+c)/3;
    if((a+b+c)%3) cout<<"NO"<<endl;
    else if(avg<b) cout<<"NO"<<endl;
    else cout<<"YES"<<endl;
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