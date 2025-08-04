#include<bits/stdc++.h>
using namespace std;
#define int long long
#define int128 __int128_t
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

int factors(int l, int r, int factor){
    return r/factor - (l-1)/factor;
}

void solve(){
    int l, r;
    cin>>l>>r;
    int ans=r-l+1;
    // vector<int> vis(ans+1,0);
    // int index=l/2;
    // for(int i=2*index; i<=r; i+=2){
    //     if(i<l) continue;
    //     vis[i-l]=1;
    //     ans--;
    // }
    // index=l/3;
    // for(int i=3*index; i<=r; i+=6){
    //     if(i<l) continue;
    //     if(!vis[i-l]){
    //         vis[i-l]=1;
    //         ans--;
    //     }
        
    // }
    // index=l/5;
    // for(int i=5*index; i<=r; i+=10){
    //     if(i<l) continue;
    //     if(!vis[i-l]){
    //         vis[i-l]=1;
    //         ans--;
    //     }
        
    // }
    // index=l/7;
    // for(int i=7*index; i<=r; i+=14){
    //     if(i<l) continue;
    //     if(!vis[i-l]){
    //         vis[i-l]=1;
    //         ans--;
    //     }
        
    // }
    // for(int i=(l/2LL)*2LL;i<=r;i+=2LL){
    //     if(i<l) continue;
    //     ans--;
    // }
    // int index=(l/3LL)*3LL;
    // if(index%2==0) index+=3LL;
    // for(int i=index; i<=r;i+=6LL){
    //     if(i<l) continue;
    //     ans--;
    // }
    // index=(l/5LL)*5LL;
    // if(index%2==0) index+=5LL;
    // for(int i=index; i<=r;i+=10LL){
    //     if(i<l) continue;
    //     if(i%3LL) ans--;
    // }
    // index=(l/7LL)*7LL;
    // if(index%2==0) index+=7LL;
    // for(int i=index; i<=r;i+=14LL){
    //     if(i<l) continue;
    //     if(i%3LL&&i%5LL) ans--;
    // }


    // cout<<ans-1LL<<endl;
    ans-=factors(l,r,2);
    ans-=factors(l,r,3);
    ans-=factors(l,r,5);
    ans-=factors(l,r,7);
    ans+=factors(l,r,6);
    ans+=factors(l,r,15);
    ans+=factors(l,r,10);
    ans+=factors(l,r,14);
    ans+=factors(l,r,35);
    ans+=factors(l,r,21);
    ans-=factors(l,r,30);
    ans-=factors(l,r,105);
    ans-=factors(l,r,42);
    ans-=factors(l,r,70);
    ans+=factors(l,r,210);
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