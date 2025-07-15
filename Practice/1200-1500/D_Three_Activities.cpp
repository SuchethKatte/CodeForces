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
    int n;
    cin>>n;
    vector<vector<int>> a(n,vector<int>(2)), b(n,vector<int>(2)), c(n,vector<int>(2));
    vector<int> a1(n), b1(n), c1(n);
    for(int i=0;i<n;i++){
        cin>>a[i][0];
        a[i][1]=i;
        a1[i]=a[i][0];
    }
    for(int i=0;i<n;i++){
        cin>>b[i][0];
        b[i][1]=i;
        b1[i]=b[i][0];
    }
    for(int i=0;i<n;i++){
        cin>>c[i][0];
        c[i][1]=i;
        c1[i]=c[i][0];
    }
    sort(a.begin(),a.end()); sort(b.begin(),b.end()); sort(c.begin(),c.end());
    int ans=0;
    vector<int> A={a[n-1][1],a[n-2][1],a[n-3][1]}, B={b[n-1][1],b[n-2][1],b[n-3][1]}, C={c[n-1][1],c[n-2][1],c[n-3][1]} ;

    for(int x=0;x<3;x++){
        for(int y=0;y<3;y++){
            for(int z=0;z<3;z++){
                int p=A[x], q=B[y], r=C[z];
                if(p!=q&&q!=r&&r!=p)
                ans=max(ans,a1[p]+b1[q]+c1[r]);
            }
        }
    }
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