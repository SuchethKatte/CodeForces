#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define gcd(a,b) __gcd(a,b)
#define MOD 1000000007
void fill(vector<int> &arr){ for(auto &it:arr) cin>>it;}
void yes() { cout<<"YES\n"; }
void no() { cout<<"NO\n"; }

void dfs(vector<vector<int>>&adj, vector<int> &a, vector<int> &arr, int node){
    if(adj[node].size()==0) a[node]=arr[node]; 
    for(auto it:adj[node]){
        dfs(adj,a,arr,it);
        a[node]=min({a[node],a[it],arr[it]});
    }
    if(arr[node]<a[node]&&node!=1){
        arr[node]=(arr[node]+a[node])/2; 
    }

}

void solve(){
    int n; 
    cin>>n;
    vector<int> arr(n+1);
    for(int i=1;i<=n;i++){
        cin>>arr[i];
    }
    vector<vector<int>> adj(n+1);
    for(int i=2;i<=n;i++){
        int temp;
        cin>>temp;
        adj[temp].push_back(i);
    }
    vector<int> a(n+1, INT_MAX);
    dfs(adj,a,arr,1);
    int ans=arr[1]+a[1];
    cout<<ans<<endl;
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