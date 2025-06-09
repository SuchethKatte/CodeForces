#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define gcd(a,b) __gcd(a,b)
#define MOD 998244353
void yes() { cout<<"YES\n"; }
void no() { cout<<"NO\n"; }
const int N=1e5+5;
int s[N]={};

void solve(){
    int n;
    cin>>n;
    vector<int> p(n), q(n);
    for(int i=0;i<n;i++){
        cin>>p[i];
    }
    for(int i=0;i<n;i++){
        cin>>q[i];
    }
    for(int i=0, j=0, it=0; it<n; it++){
        if(p[it]>p[i]){
            i=it;
        }
        if(q[it]>q[j]){
            j=it;
        }
        
        if(p[i]!=q[j]){
            if(p[i]>q[j]){
                cout<<(s[p[i]]+s[q[it-i]])%MOD<<" ";
            }
            else{
                cout<<(s[q[j]]+s[p[it-j]])%MOD<<" ";
            }
        }
        else{
            cout<<(s[p[i]]+max(s[q[it-i]],s[p[it-j]]))<<" ";
        }
        // int pow1=(1<<p[i])%MOD;
        // int pow2=(1<<q[j])%MOD;
        // int pow3=(1<<p[it-j])%MOD;
        // int pow4=(1<<q[it-i])%MOD;
        // if(p[i]!=q[j]){
        //     if(p[i]>q[j]){
        //         cout<<(pow1+pow4)%MOD<<" ";
        //     }
        //     else{
        //         cout<<(pow2+pow3)%MOD<<" ";
        //     }
        // }
        // else{
        //     cout<<(pow1+max(pow3,pow4))<<" ";
        // }
    }
    cout<<endl;
}
signed main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    s[0] = 1; for(int i = 1 ; i < N ; i ++) s[i] = s[i - 1] * 2 % MOD;
    int tt;
    cin>>tt;
    while(tt--){
        solve();
    }
    return 0;
}