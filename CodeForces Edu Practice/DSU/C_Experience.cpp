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
    vector<int> parent, points, size;
    public:
    DSU(int n){
        parent.resize(n+1);
        points.resize(n+1,0);
        size.resize(n+1,1);
        for(int i=1;i<=n;i++){
            parent[i]=i;
        }
    }
    int get_parent(int node){
        if(node==parent[node]){
            return node;
        }
        return parent[node]=get_parent(parent[node]);
    }
    void join(int u, int v){
        int up=get_parent(u);
        int vp=get_parent(v);
        if(up==vp){
            return;
        }
        if(size[up]<size[vp]){
            parent[up]=vp;
            size[vp]+=size[up];
        }
        else{
            parent[vp]=up;
            size[up]+=size[vp];
        }
    }
    void add(int node, int point){
        int parent_node=get_parent(node);
        for(int i=1;i<=parent.size();i++){
            if(get_parent(i)==parent_node){
                points[i]+=point;
            }
        }
    }
    int get(int node){
        return points[node];
    }


};





void solve(){
    int n, m;
    cin>>n>>m;
    DSU dsu(n);
    for(int i=0;i<m;i++){
        string a;
        cin>>a;
        if(a=="get"){
            int b;
            cin>>b;
            cout<<dsu.get(b)<<endl;
        }
        else if(a=="add"){
            int b, points;
            cin>>b>>points;
            dsu.add(b,points);
        }
        else{
            int u, v;
            cin>>u>>v;
            dsu.join(u,v);
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