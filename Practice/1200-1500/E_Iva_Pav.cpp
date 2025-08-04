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

int range(vector<vector<int>> &prefix, int l, int r){
    int sum=0;
    for(int j=0;j<30;j++){
        if(prefix[j][r+1]-prefix[j][l]==0){
            sum+=(1ll<<j);
        }
    }
    return sum;
}




void solve(){
    int n;
    cin>>n;
    vector<int> arr(n); fillarr(arr);
    vector<vector<int>> prefix(30,vector<int>(n+1,0));
    for(int j=0;j<30;j++){
        for(int i=0;i<n;i++){
            prefix[j][i+1]=prefix[j][i];
            if(!(1<<j&arr[i])){  //count number of zeroes
                prefix[j][i+1]++;
            }
        }
    }
    int q; cin>>q;
    while(q--){
        int l, k;
        cin>>l>>k;
        l--;
        if(arr[l]<k){
            cout<<-1<<" ";
            continue;
        }
        int low=l, high=n-1;
        while(low<=high){
            int mid=(low+high)/2;
            if(range(prefix,l,mid)>=k){
                low=mid+1;
            }
            else{
                high=mid-1;
            }
        }
        cout<<high+1<<" ";


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