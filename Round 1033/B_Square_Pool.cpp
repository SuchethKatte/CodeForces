#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define gcd(a,b) __gcd(a,b)
#define MOD 1000000007
void yes() { cout<<"YES\n"; }
void no() { cout<<"NO\n"; }

void solve(){
    int n, l;
    cin>>n>>l;
    vector<vector<int>> arr(n,vector<int>(4));
    int count=0;
    for(int i=0;i<n;i++){
        cin>>arr[i][0]>>arr[i][1]>>arr[i][2]>>arr[i][3];
        if(arr[i][2]==arr[i][3]){
            if(arr[i][0]==arr[i][1]){
                count++;
                continue;
            }
        }
        if(arr[i][2]+arr[i][3]==l){
            if(arr[i][0]==-arr[i][1]){
                count++;
            }
        }
    }
    cout<<count<<endl;

    
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