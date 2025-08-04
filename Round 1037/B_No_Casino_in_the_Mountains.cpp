#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define ll long long
#define ull unsigned long long
#define ld  long double
#define gcd(a,b) __gcd(a,b)
#define MOD 1000000007
#define all(a) a.begin(), a.end()
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

void solve(){
    int n, k;
    cin>>n>>k;
    vector<int> arr(n);
    fillarr(arr);
    if(arr[0]==1) arr[0]=-1;
    arr[0]++;
    for(int i=1;i<n;i++){
        if(arr[i]==1) arr[i]=0;
        else if(arr[i-1]==k) arr[i]=0;
        else arr[i]=arr[i-1]+1;

    }
    int ans=0;
    for(int i=0;i<n;i++){
        if(arr[i]==k) ans++;
    }
    cout<<ans<<endl;
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