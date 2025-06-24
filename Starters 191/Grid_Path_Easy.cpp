#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define gcd(a,b) __gcd(a,b)
#define MOD 1000000007
void yes() { cout<<"YES\n"; }
void no() { cout<<"NO\n"; }

void solve(){
    int n, q;
    cin>>n>>q;
    int count=0;
    vector<vector<int>> arr(2,vector<int>(n));
    for(int i=0; i<2; i++){
        for(int j=0;j<n;j++){
            cin>>arr[i][j];
            count+=arr[i][j];
        }
    }
    if(count<(n+1)){
        cout<<-1<<endl;return;
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