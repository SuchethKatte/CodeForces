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
    vector<pair<int,int>> x, y;
    for(int i=0;i<n;i++){
        int a, b;
        cin>>a>>b;
        x[i].first=a; x[i].second=b; y[i].first=b; y[i].second=a;
    }
    sort(x.begin(),x.end());
    sort(y.begin(),y.end());
    int area=abs((x.back().first-x[0].first)*(y.back().first-y[0].first));
    //CASE1:
    

    
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