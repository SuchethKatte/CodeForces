#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define gcd(a,b) __gcd(a,b)
#define MOD 1000000007
void yes() { cout<<"YES\n"; }
void no() { cout<<"NO\n"; }

void solve(){
    string l, r;
    cin>>l>>r;
    if(l==r){
        cout<<2*l.size()<<endl;
        return;
    }
    int ptr=0;
    while(ptr<l.size()&&l[ptr]==r[ptr]) ptr++;
    if(l[ptr]+1<r[ptr]){
        cout<<2*ptr<<endl;
    }
    else{
        int ans=2*ptr+1;
        for(int i=ptr+1;i<l.size();i++){
            if(l[i]=='9'&&r[i]=='0') ans++;
            else break;
        }
        cout<<ans<<endl;
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