#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define gcd(a,b) __gcd(a,b)
#define MOD 1000000007
void fill(vector<int> &arr){ for(auto &it:arr) cin>>it;}
void yes() { cout<<"YES\n"; }
void no() { cout<<"NO\n"; }

bool leaf(vector<vector<int>> &adj, int node){
    if(adj[node].size()==0) return true;
    return false;
}

bool dfs(vector<vector<int>> &adj, int node){
    if(leaf(adj,node)) return true;
    int count=0;
    bool flag=true;
    for(auto it:adj[node]){
        if(leaf(adj,it)){
            count++;
        }
        else{
            flag=flag&&dfs(adj,it);
        }
    }
    return flag&&count>=3;


}

void solve(){
    int n;
    cin>>n;
    vector<vector<int>> adj(n+1);
    int count=2;
    for(int i=1;i<n;i++){
        int root; cin>>root;
        adj[root].push_back(count);
        count++;
    }
    dfs(adj,1)?yes():no();

}
signed main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int tt;
    tt=1;
    while(tt--){
        solve();
    }
    return 0;
}