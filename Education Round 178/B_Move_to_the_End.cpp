#include<bits/stdc++.h>
using namespace std;
#define int long long 
void solve(){
    int n;
    cin>>n;
    vector<int> arr(n);
    vector<int> psum(n+1);
    psum[0]=0;
    vector<int> pmax(n+1);
    pmax[0]=0;
    for(int i=0;i<n;i++){
        cin>>arr[i];
        pmax[i+1]=max(pmax[i],arr[i]);
        psum[i+1]=psum[i]+arr[i];
    }
    for(int k = 1; k <= n; k++)
            cout << pmax[n - k + 1] + psum[n] - psum[n - k + 1] << " ";
    cout << endl;

    
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