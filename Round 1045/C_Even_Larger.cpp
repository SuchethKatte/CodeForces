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
    int n; cin>>n;
    vector<int> arr(n);
    fillarr(arr);
    // int ans=0;
    // for(int i=1;i<n-1;i++){
    //     if((i&1)){
    //         if(arr[i]<arr[i-1]){
    //             ans+=(arr[i-1]-arr[i]);
    //             arr[i-1]=arr[i];
    //         }
    //         if(arr[i]<arr[i+1]){
    //             ans+=(arr[i+1]-arr[i]);
    //             arr[i+1]=arr[i];
    //         }
    //     }
    // }
    // if((n-1)%2){
    //     if(arr[n-1]<arr[n-2]){
    //             ans+=(arr[n-2]-arr[n-1]);
    //             arr[n-2]=arr[n-1];
    //         }
    // }
    // int k=3;
    
    // if(n>=3){
    //     int a=0, b=1, c=2;
    //     while(c<n){
    //         if(a%2==0){
    //             if(arr[b]<(arr[a]+arr[c])){
    //                 ans+=(arr[a]+arr[c]-arr[b]);
    //                 arr[a]-=arr[a]+arr[c]-arr[b];
    //             }
    //         }
    //         a++;b++;c++;
    //     }
    // }
    // cout<<ans<<endl;
    int ans=0;
    for(int i=1;i<n-1;i+=2){
        if(arr[i]<(arr[i-1]+arr[i+1])){
            ans+=arr[i-1]+arr[i+1]-arr[i];
            arr[i-1]=arr[i-1]-(arr[i-1]+arr[i+1]-arr[i]);
            if(arr[i-1]<0){
                arr[i+1]+=arr[i-1];
                arr[i-1]=0;
            }
        }
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    if(n%2==0){
        if(arr.back()<arr[n-2]){
            ans+=arr[n-2]-arr.back();
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