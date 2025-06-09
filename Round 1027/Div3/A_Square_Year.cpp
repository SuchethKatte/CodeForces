#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define gcd(a,b) __gcd(a,b)
#define MOD 1000000007
void yes() { cout<<"YES\n"; }
void no() { cout<<"NO\n"; }

void solve(){
    string s;
    cin>>s;
    double number=0;
    for(int i=0;i<s.size();i++){
        number=number*10+(s[i]-'0');
    }
    double sq=sqrt(number);
    if(ceil(sq)-sq!=0){ 
        cout<<-1<<endl;
        return;
    }
    cout<<sq<<" "<<0<<endl;


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