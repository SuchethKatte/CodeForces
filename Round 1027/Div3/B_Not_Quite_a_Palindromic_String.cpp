#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define gcd(a,b) __gcd(a,b)
#define MOD 1000000007
void yes() { cout<<"YES\n"; }
void no() { cout<<"NO\n"; }
const int N=1000001;

void solve(){
    int n, k;
    cin>>n>>k;
    string s;
    cin>>s;
    int zero=0, one=0;
    for(char c:s){
        if(c=='0') zero++;
        else one++;
    }
    while(k--){
        if(zero>one){
            zero-=2;
        }
        else{
            one-=2;
        }
    }
    (zero==one)?yes():no();
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