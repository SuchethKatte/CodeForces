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

int mex(vector<int> &nums){
    for(int i=0;i<nums.size();i++){
        int index=abs(nums[i])-1;
        if(index<nums.size()){
            nums[index]=-abs(nums[index]);
        }
    }
    for(int i=0;i<nums.size();i++){
        if(nums[i]>0) return i+1;
    }
    return nums.size()+1;
 
}



void solve(){
    int n;
    cin>>n;
    vector<int> a(n), b(n);
    fillarr(a); fillarr(b);
    vector<int> count(2*n+5,0), both(2*n+5);
    for(int i=0;i<n;i++){
        count[a[i]]++; count[b[i]]++;
        if(a[i]==b[i]) both[a[i]]++;
    }
    int c1=0;
    while(count[c1]>0) c1++;
    vector<int> ans;
    for(int i=0;i<c1;i++){
        if(count[i]&&both[i]==0){
            ans.push_back(i);
        }
    }
    int c2=(ans.size()>=2)?ans[1]:n+1;
    cout<<min(c1,c2)<<endl;



    

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