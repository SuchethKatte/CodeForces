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
    vector<int> parent, size, minimum, maximum;
    public:
    DSU(int n){
        size.resize(n+1,1);
        parent.resize(n+1);
        minimum.resize(n+1);
        maximum.resize(n+1);
        for(int i=1;i<=n;i++){
            parent[i]=i;
            minimum[i]=i;
            maximum[i]=i;
        }
    }
    int ult_parent(int node){
        if(node==parent[node]){
            return node;
        }
        return parent[node]=ult_parent(parent[node]);
    }

    int Size(int node){
        return size[ult_parent(node)];
    }

    int Minimum(int node){
        return minimum[ult_parent(node)];
    }

    int Maximum(int node){
        return maximum[ult_parent(node)];
    }

    void UnionBySize(int u, int v){ 
        int pu=ult_parent(u);
        int pv=ult_parent(v);
        if(pu==pv){
            return;
        }
        if(Size(pu)<Size(pv)){
            size[pv]+=size[pu];
            parent[pu]=pv;
            minimum[pv]=min(minimum[pv],minimum[pu]);
            maximum[pv]=max(maximum[pv],maximum[pu]);

        }
        else{
            size[pu]+=size[pv];
            parent[pv]=pu;
            minimum[pu]=min(minimum[pv],minimum[pu]);
            maximum[pu]=max(maximum[pv],maximum[pu]);
        }
    }
    void get(int node){
        cout<<Minimum(node)<<" "<<Maximum(node)<<" "<<Size(node)<<endl;
    }

};


void solve(){
    int n, m;
    cin>>n>>m;
    DSU dsu(n);
    for(int i=0;i<m;i++){
        string a; 
        cin>>a;
        if(a=="union"){
            int b, c;
            cin>>b>>c;
            dsu.UnionBySize(b, c);
        }
        else if(a=="get"){
            int b;
            cin>>b;
            dsu.get(b);
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