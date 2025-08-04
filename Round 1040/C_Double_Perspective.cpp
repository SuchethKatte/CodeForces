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

// struct DSU {
//     vector<int> p;
//     DSU(int n) {
//         p.resize(n + 2);
//         iota(all(p), 0);
//     }

//     int find(int x) {
//         if (p[x] != x)
//             p[x] = find(p[x]);
//         return p[x];
//     }

//     bool unite(int x, int y) {
//         int xr = find(x);
//         int yr = find(y);
//         if (xr == yr) return false;
//         p[yr] = xr;
//         return true;
//     }
// };


void solve(){
    // int n;
    // cin>>n;
    // vector<vector<int>> arr(n,vector<int>(4));
    // for(int i=0;i<n;i++){
    //     cin>>arr[i][1]>>arr[i][2];
    //     arr[i][0]=arr[i][2]-arr[i][1];
    //     arr[i][3]=i+1;
    // }
    // DSU dsu(2*n+5);
    // vector<int> ans;
    // sort(rall(arr));
    // for(auto a:arr){
    //     if(dsu.unite(a[1],a[2])){
    //         ans.push_back(a[3]);
    //     }
    // }
    // cout<<ans.size()<<endl;
    // for(auto it:ans){
    //     cout<<it<<" ";
    // }
    // cout<<endl;
    int n;
    cin>>n;
    vector<int> vis(n+4,1), ans;
    vector<int> a(n), b(n);
    for(int i=0;i<n;i++){
        cin>>a[i]>>b[i];
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(i==j) continue;
            if(a[j]<=a[i]&&b[i]<=b[j]) vis[i]=0;
        }
        if(vis[i]) ans.push_back(i+1);
    }
    cout<<ans.size()<<endl;
    for(auto it:ans){
        cout<<it<<" ";
    }
    cout<<endl;




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