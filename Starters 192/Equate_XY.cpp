#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define gcd(a,b) __gcd(a,b)
#define MOD 1000000007
int lcm(int a, int b){
    return (a*b)/gcd(a,b);
}
void fill(vector<int> &arr){ for(auto &it:arr) cin>>it;}
void yes() { cout<<"YES\n"; }
void no() { cout<<"NO\n"; }

void solve(){
    int x,y,z,c;
    cin>>x>>y>>z>>c;
    if(x>y) swap(x,y);
    if(x==y){ cout<<0<<endl; return;}
    int ans=2*c;
    if(y%x==0){
        for(int i=1;i*i<=y;i++){
        if(y%i==0){
            if(i%x==0){
                ans=min(ans,c+abs(z-i));
            }
            if((y/i)%x==0){
                ans=min(ans,c+abs(z-y/i));
            }
        }
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