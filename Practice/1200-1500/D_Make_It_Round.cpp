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

void solve(){
    int n, m;
    cin>>n>>m;
    // int fact2=0, fact5=0;
    // int n0=n;
    // while(n%2==0){
    //     fact2++;
    //     n/=2;

    // }
    // while(n%5==0){
    //     fact5++;
    //     n/=5;
    // }
    // int k=1;
    // while(fact2<fact5&&k*2<=m){
    //     k*=2;
    //     fact2++;
    // }
    // while(fact5<fact2&&k*5<=m){
    //     k*=5;
    //     fact5++;
    // }
    // while(k*10<=m){
    //     k*=10;
    // }
    // k=k*(m/k);
    // cout<<n0*k<<endl;
    double digit_=log10(m);
    int digit=digit_;
    if(digit==digit_) digit--;
    int k=1;
    for(int i=1;i<=digit;i++){
        k*=10;
    }
    int ans=0, zeroes=0;
    for(int i=k;i<=m;i++){
        int temp=n*i;
        int zero=0;
        while(temp%10==0){
            zero++;
            temp/=10;
        }
        if(zero>zeroes){
            ans=n*i;
            zeroes=zero;
        }
        else if(zero==zeroes){
            ans=max(ans,n*i);
        }
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