#include<bits/stdc++.h>
using namespace std;
#define int long long 
void solve(){
    int n, k;
    cin>>n>>k;
    vector<int> a(n);
    vector<int> b(n);
    int sum=0;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=0;i<n;i++){
        cin>>b[i];
        sum+=max(a[i],b[i]);
        b[i]=(min(a[i],b[i]));
    }
    sort(b.begin(),b.end());
    for(int i=b.size()-1;i>b.size()-k;i--){
        sum+=b[i];
    }
    cout<<sum+1<<endl;
    
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