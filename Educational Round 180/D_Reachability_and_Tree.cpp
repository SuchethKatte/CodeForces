#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define gcd(a,b) __gcd(a,b)
#define MOD 1000000007
void yes() { cout<<"YES\n"; }
void no() { cout<<"NO\n"; }

void dfs(vector<vector<int>> &adj, vector<int> &vis, int node, bool flag){
    vis[node]=1;
    for(auto it:adj[node]){
        if(flag){
            cout<<node<<" "<<it<<endl;
        }
    }
    for(auto it:adj[node]){
        if(!vis[it]){
            dfs(adj,vis,it,!flag);
        }
    }
}

void solve(){
    int n;
    cin>>n;
    vector<vector<int>> adj(n+1);
    for(int i=0;i<n-1;i++){
        int a, b;
        cin>>a>>b;
        adj[a].push_back(b);
        adj[b].push_back(a);
    }

    // if(n<=2){
    //     no();
    //     return;
    // }
    // yes();
    // vector<int> vis(n+1,0);
    // queue<int> q;
    // vector<int> arr;
    // q.push(1);
    // int count=1;
    // while(!q.empty()){
    //     int size=q.size();
    //     while(size--){
    //         int node=q.front();
    //         q.pop();
    //         if(!vis[node]){
    //             if(count&1) arr.push_back(node);
    //             vis[node]=1;
    //             q.push(node);
    //         }
    //     }
    //     count++;
    // }
    // vector<vector<int>> ans(n+1);
    // for(int i=0;i<arr.size();i++){
    //     if(i==0){
    //         vector<int> nodearr=adj[arr[i]];
    //         int node=arr[i];
    //         int nodetobereplaced=nodearr.back();
    //         nodearr.pop_back();
    //         for(auto it:nodearr){
    //             ans[node].push_back(it);
    //         }
    //         ans[nodetobereplaced].push_back(node);

    //     }
    //     else{
    //         int node=arr[i];
    //         ans[node]=adj[node];
    //     }
    // }
    // for(int i=1;i<=n;i++){
    //     if(ans[i].size()){
    //         for(int j=0;j<ans[i].size();j++){
    //             cout<<i<<" "<<ans[i][j]<<endl;
    //         }
    //     }
    // }
    int node=0;
    for(int i=1;i<=n;i++){
        if(adj[i].size()==2){
            node=i;
            break;
        }
    }
    if(!node){
        no();
        return;
    }
    yes();
    vector<int> vis(n+1,0);
    vis[node]=1;
    cout<<node<<" "<<adj[node][0]<<endl;
    dfs(adj,vis,adj[node][0],0);
    dfs(adj,vis,adj[node][1],1);




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