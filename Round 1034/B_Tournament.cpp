#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define gcd(a,b) __gcd(a,b)
#define MOD 1000000007
void fillarr(vector<int> &arr){ for(auto &it:arr) cin>>it;}
void yes() { cout<<"YES\n"; }
void no() { cout<<"NO\n"; }

struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};

TreeNode* fillbt(int n){
    unordered_map<int, TreeNode*> map;
    TreeNode* root = nullptr;

    for (int i=1; i<n; i++) {
        int a, b;
        char s;
        cin >> a >> b >> s;

        if (map.find(a) == map.end()) {
            map[a] = new TreeNode(a);
            if (!root) root = map[a]; 
        }

        if (map.find(b) == map.end()) {
            map[b] = new TreeNode(b);
        }

        if (s == 'L') {
            map[a]->left = map[b];
        } else if (s == 'R') {
            map[a]->right = map[b];
        }
    }
    return root;
}

void fillgraph(vector<vector<int>> &adj, int edges){
    for(int i=1;i<=edges;i++){
        int a,b;
        cin>>a>>b;
        adj[a].push_back(b);
        adj[b].push_back(a);
    }

}

void fillunigraph(vector<vector<int>> &adj, int edges){
    for(int i=1;i<=edges;i++){
        int a,b;
        cin>>a>>b;
        adj[a].push_back(b);
    }
}

void filltree(vector<vector<int>> &adj){
    int n=adj.size()-1;
    for(int i=2;i<=n;i++){
        int a;
        cin>>a;
        adj[a].push_back(i);
    }
}


void solve(){
    int n, j, k;
    cin>>n>>j>>k;
    vector<int> arr(n);
    fillarr(arr);
    int maxi=*max_element(arr.begin(),arr.end());
    if(k!=1){
        yes();
        return;
    }
    maxi==arr[j-1]?yes():no();
    
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