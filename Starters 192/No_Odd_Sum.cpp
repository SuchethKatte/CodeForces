#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define gcd(a,b) __gcd(a,b)
#define MOD 1000000007
void fill(vector<int> &arr){ for(auto &it:arr) cin>>it;}
void yes() { cout<<"YES\n"; }
void no() { cout<<"NO\n"; }

void solve(){
    int n;
    cin>>n;
    int one=0, two=0;
    for(int i=0;i<n;i++){
        int temp;
        cin>>temp;
        if(temp==1) one++;
        else two++;
    }
    if(!(one&1)){
        cout<<min(two,one/2)<<endl;
        return;
    }
    cout<<two<<endl;
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