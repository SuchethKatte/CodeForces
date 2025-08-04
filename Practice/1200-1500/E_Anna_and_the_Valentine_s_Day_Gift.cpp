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
void fillarr(vector<string> &arr){ for(auto &it:arr) cin>>it;}
void yes() { cout<<"Sasha\n"; }
void no() { cout<<"Anna\n"; }
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
    vector<string> arr(n);
    vector<vector<int>> a(n,vector<int>(2));
    for(int i=0;i<n;i++){
        cin>>arr[i];    
        int index=arr[i].size()-1;
        int j=index;
        for(j=index;j>=0;j--){
            if(arr[i][j]!='0') {break;}
        }
        a[i][0]=index-j;
        a[i][1]=index+1;
    }
    sort(rall(a));
    int ans=0;
    // for(int i=0;i<n;i++){
    //     cout<<a[i][0]<<" "<<a[i][1]<<endl;
    // }
    for(int i=0;i<n;i++){
        if(i&1){
            ans+=a[i][1];
        }
        else{
            ans+=a[i][1]-a[i][0];
        }   
        // cout<<ans<<endl;
    }
    // cout<<ans<<endl;
    (ans-1<m)?no():yes();

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