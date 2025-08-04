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
    int n;
    cin>>n;
    string s; cin>>s;
    // int p0=n, s0=-1;
    // for(int i=0;i<n;i++){
    //     if(s[i]=='p'){
    //         p0=i;
    //         break;
    //     }
    // }
    // for(int i=n-1;i>=0;i--){
    //     if(s[i]=='s'){
    //         s0=i;
    //         break;
    //     }
    // }
    // if(p0<s0){
    //     no();
    //     return;
    // }
    // if(s0==-1||p0==n){
    //     yes();
    //     return;
    // }
    // int s1=0,p1=0;
    // for(int i=0;i<n;i++){
    //     if(s[i]=='s'){
    //         if(i&&s.back()!='p'){
    //             no();
    //             return;
    //         }
    //         s1++;
    //     }
    //     if(s[i]=='p'){
    //         if(i!=n-1&&s[0]!='s'){
    //             no();
    //             return;
    //         }
    //         p1++;
    //     }
    // }
    // if(s1>=2&&p1>=2){
    //     no();
    //     return;
    // }
    // yes();
    // int s0=0, p0=0;
    // if(s[0]=='s') s[0]='.';
    // if(s.back()=='p') s.back()='.';
    // for(int i=0;i<n;i++){
    //     if(s[i]=='s') s0++;
    //     if(s[i]=='p') p0++;
    // }
    // if(s0&&p0){
    //     no();
    //     return;
    // }
    // yes();
    int s0=0, p0=0;
    for(int i=0;i<n;i++){
        if(s[i]=='s'&&i) s0++;
        if(s[i]=='p'&&i!=n-1) p0++;
    }
    if(s0>=1&&p0>=1) no();
    else yes();
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