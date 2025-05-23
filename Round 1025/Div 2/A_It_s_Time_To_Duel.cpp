#include<bits/stdc++.h>
using namespace std;
// #define int long long 
void solve(){
    int n;
    cin>>n;
    vector<int> count(2);
    vector<int> arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
        count[arr[i]]++;
    }
    if(count[1]==n||count[0]==n){
        cout<<"YES"<<endl; 
        return;
    }
    for(int i=0;i<n-1;i++){
        if(arr[i]==0&&arr[i+1]==0){
            cout<<"YES"<<endl; 
            return;
        }
    }
    cout<<"NO"<<endl;
    
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