#include<bits/stdc++.h>
using namespace std;
#define int long long 
void solve(){
    unordered_map<int,int> mpp;
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        int temp;
        cin>>temp;
        mpp[temp]++;
    }
    cout<<mpp.size()<<endl;
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