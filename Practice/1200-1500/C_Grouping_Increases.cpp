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

void solve(){
    int n;
    cin>>n;
    vector<int> arr(n);
    fillarr(arr);
    //GREEDY
    //Preserve the bigger last number if the element is 
    //greater/lesser than both a.back() and b.back()
    vector<int> a,b;
    a.push_back(INT_MAX);
    b.push_back(INT_MAX);
    for(int i=0;i<n;i++){
        int x=a.back(),  y=b.back();
        if(arr[i]<=x&&arr[i]<=y){
            if(x<=y){
                a.push_back(arr[i]);
            }
            else{
                b.push_back(arr[i]);
            }
        }
        else if(arr[i]<=x){
            a.push_back(arr[i]);
        }
        else if(arr[i]<=y){
            b.push_back(arr[i]);
        }
        else{
            if(x<=y){
                a.push_back(arr[i]);
            }
            else{
                b.push_back(arr[i]);
            }
        }
    }
    int ans=0;
    if(a.size()>=2)
    {for(int i=0;i<a.size()-1;i++){
        if(a[i]<a[i+1]){
            ans++;
        }
    }}
    if(b.size()>=2)
    {for(int i=0;i<b.size()-1;i++){
        if(b[i]<b[i+1]){
            ans++;
        }
    }}
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