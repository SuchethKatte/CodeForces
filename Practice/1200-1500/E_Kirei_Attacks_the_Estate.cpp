#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define gcd(a,b) __gcd(a,b)
#define MOD 1000000007
void yes() { cout<<"YES\n"; }
void no() { cout<<"NO\n"; }
vector<int> weight;
vector<vector<int>> adj;
vector<int> res;
void dfs(int v, int p, int maxi, int mini){
    res[v]=max(weight[v],weight[v]-mini);
    mini=min(weight[v],weight[v]-maxi);
    for(int u: adj[v]){
        if(u==p) continue;
        dfs(u,v,res[v],mini);
    }
}
void solve(){
    int n;
    cin>>n;
    weight.resize(n);
    for(int i=0;i<n;i++){
        cin>>weight[i];
    }
    res.assign(n,0);
    adj.assign(n, vector<int>());
    for(int i=0;i<n-1;i++){
        int u, v;
        cin>>u>>v;
        u--; v--;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    dfs(0,-1,0,0);
    for(int i=0;i<n;i++){
        cout<<res[i]<<" ";
    }
    cout<<endl;
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