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

class DSU{
    vector<int> parent, size, next;
    int n;
    public:
    DSU(int n){
        this->n=n;
        parent.resize(n+1);
        size.resize(n+1,1);
        next.resize(n+2);
        for(int i=1;i<=n;i++){ parent[i]=i; next[i]=i;}
        next[n+1]=n+1;
    }
    int get_parent(int node){
        if(node==parent[node]){
            return node;
        }
        return parent[node]=get_parent(parent[node]);
    }
    void merge1(int u, int v){
        int pu=get_parent(u);
        int pv=get_parent(v);
        if(pu==pv) return;
        if(size[pu]<=size[pv]){
            size[pv]+=size[pu];
            parent[pu]=pv;
        }
        else{
            size[pu]+=size[pv];
            parent[pv]=pu;
        }
    }
    int get_next(int node){
        if (node==next[node]) return node;
        return next[node]=get_next(next[node]);
    }
    void merge2(int x, int y){
        int nextnode=get_next(x);
        while(nextnode<y){
            merge1(nextnode,nextnode+1);
            next[nextnode]=nextnode+1;
            nextnode++;
        }
    }
    bool get(int u, int v){
        return get_parent(u)==get_parent(v);
    }
};


void solve(){
    int n, m;
    cin>>n>>m;
    DSU dsu(n);
    for(int i=0;i<m;i++){
        int a, b, c;
        cin>>a>>b>>c;
        if(a==1){
            dsu.merge1(b,c);
        }
        if(a==2){
            dsu.merge2(b,c);
        }
        if(a==3){
            dsu.get(b,c)?yes():no();
        }
    }
}
signed main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int tt;
    //cin>>tt;
    tt=1;
    while(tt--){
        solve();
    }
    return 0;
}