#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define ll long long
#define ull unsigned long long
#define ld  long double
#define gcd(a,b) __gcd(a,b)
#define MOD 1000000007
#define all(a) a.begin(), a.end()
#define rall(a) a.rbegin(), a.rend()
void fillarr(vector<int> &arr){ for(auto &it:arr) cin>>it;}
void fillarr(vector<int> &a, vector<int> &b){ for(auto &it:a) {cin>>it;} for(auto &it:b) {cin>>it;}}
void fillarr(vector<vector<int>> &arr){ for(auto &it:arr) fillarr(it);}
void yes() { cout<<"YES\n"; }
void no() { cout<<"NO\n"; }
////////////////////////////////////////////////////////////////
void _print(int t) {cout << t;}
void _print(string t) {cout << t;}
void _print(char t) {cout << t;}
void _print(ld t) {cout << t;}
void _print(double t) {cout << t;}
void _print(ull t) {cout << t;}
int popcount(int a){return __builtin_popcountll(a);}
int clz(int a){return __builtin_clzll(a);}
 
 
template <class T> void _print(vector<vector<T>> v) {for(int j =0;j<v.size();j++){cout <<endl<<"[ "; for (T i : v[j]){_print(i); cout << " ";} cout << "]";};}
template <class T, class V> void _print(pair <T, V> p);
template <class T> void _print(vector <T> v);
template <class T> void _print(set <T> v);
template <class T, class V> void _print(map <T, V> v);
template <class T> void _print(multiset <T> v);
template <class T, class V> void _print(pair <T, V> p) {cout << "{"; _print(p.first); cout << ","; _print(p.second); cout << "}";}
template <class T> void _print(vector <T> v) {cout << "[ "; for (T i : v) {_print(i); cout << " ";} cout << "]";}
template <class T> void _print(set <T> v) {cout << "[ "; for (T i : v) {_print(i); cout << " ";} cout << "]";}
template <class T> void _print(multiset <T> v) {cout << "[ "; for (T i : v) {_print(i); cout << " ";} cout << "]";}
template <class T, class V> void _print(map <T, V> v) {cout << "[ "; for (auto i : v) {_print(i); cout << " ";} cout << "]";}
template <class T>void _print(vector<vector<vector<T>>> v){for(int k =0;k<v.size();k++){_print(v[k]);}}
/////////////////////////////////////////////////////////////

int bfs(int start, int b, int n, vector<vector<int>> &adj){
    stack<int> st;
    vector<int> vis(n+1,0);
    vis[start]=1;
    int ans=0;
    while(!st.empty()){
        int size=st.size();
        ans++;
        while(size--){
            int node=st.top();
            st.pop();
            for(auto it:adj[node]){
                if(adj[it].size()==1){
                    return ans;
                }
                if(!vis[it]&&it!=b){
                    vis[it]=1;
                    st.push(it);
                }
            }
        }
    }
    return -1;
}


void solve(){
    int n;
    cin>>n;
    vector<vector<int>> adj(n+1);
    vector<int> deg(n+1,0);
    for(int i=0;i<n-1;i++){
        int a, b;
        cin>>a>>b;
        adj[a].push_back(b);
        adj[b].push_back(a);
        deg[a]++; deg[b]++;
    }
    int k=0;
    int b=-1;
    for(int i=1;i<=n;i++){
        if(deg[i]>=3){
            k++;
            b=i;
        }
    }
    if(k==0){
        cout<<-1<<endl;
        return;
    }
    int u=-1, v=-1;
    for(auto it:adj[b]){
        if(u==-1) u=it;
        else if(v==-1){
            v=it;
            break;
        }
    }
    int uw=bfs(u,b,n,adj);
    int vw=bfs(v,b,n,adj);
    if(uw<=vw){
        cout<<v<<" "<<b<<" "<<u<<endl;
    }
    else{
    cout<<u<<" "<<b<<" "<<v<<endl;}

}
signed main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int tt;
    cin>>tt;
    //tt=1;
    while(tt--){
        solve();
    }
    return 0;
}