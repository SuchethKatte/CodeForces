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
    vector<int> p(n);
    fillarr(p);
    int ans=0;

    //Consider pi=1. Number of inversions depends on how many values are tehre on left 
    //(1 is the smallest element)
    //we could also do pi=2*n-1, that time pi becomes the largest value 
    //count how many are there on right
    //choose whether to make pi 1 or 2n-1 depending on the mminimum value
    //now generalize for any pi
    //do bruteforce of how many value are greater than that element towards left
    //now change ai=2n-ai
    //count how many value are smaller than that element towards right
    //add the minimum number of both to answer


    for(int i=0;i<n;i++){
        int left=0, right=0;
        for(int j=0;j<i;j++){
            if(p[i]<p[j]) left++;   
        }
        for(int j=i+1;j<n;j++){
            if(p[i]<p[j]) right++;    //pi=2*n-pi it becomes. But with reference to initial value only we cehck
        }
        ans+=min(left,right);
        // if(left>right){
        //     p[i]=2*n-p[i];
        // }
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