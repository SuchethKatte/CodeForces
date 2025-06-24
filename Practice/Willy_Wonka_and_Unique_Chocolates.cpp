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
    int left=0;
    unordered_map<char,int> mpp;
    int ans=0;
    for(int right=0;right<s.size();right++){
        if(mpp[s[right]]){
            left=mpp[s[right]];
            mpp.clear();
        }
        mpp[s[right]]=right+1;
        ans=max(ans,right-left+1);
    }
    cout<<ans<<endl;
}
signed main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    solve();
    return 0;
}