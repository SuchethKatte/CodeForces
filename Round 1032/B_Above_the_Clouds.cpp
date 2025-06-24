#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define gcd(a,b) __gcd(a,b)
#define MOD 1000000007
void yes() { cout<<"YES\n"; }
void no() { cout<<"NO\n"; }

void solve(){
    int n;
    cin>>n;
    string s;
    cin>>s;
    unordered_map<char,int> mpp;
    mpp[s[0]]++; mpp[s.back()]++;
    for(int i=1;i<n-1;i++){
        if(mpp[s[i]]){
            yes();
            return;
        }
        mpp[s[i]]++;
    }
    no();
    
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