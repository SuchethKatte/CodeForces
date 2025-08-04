#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define ll long long
#define ull unsigned long long
#define ld  long double
#define gcd(a,b) __gcd(a,b)
#define MOD 998244353
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
    string s;
    cin>>s;
    int n=s.size();
    vector<int> arr;
    char pivot=s[0];
    for(int i=1;i<n;i++){
        int count=1;
        while(s[i]==pivot){
            count++;
            i++;
        }
        if(count!=1){
            arr.push_back(count);
        }
        pivot='0'+!(pivot-'0');
    }
    int sum=0ll, product=1LL;
    for(auto it:arr ){
        // cout<<it<<" ";
        sum+=(it-1LL);
        product=(product*it)%MOD;
    }
    
    //now we have the elements which are removed, which is basically the product.
    //to choose the order on how they get removed, we just need to find all the permutations
    //of the elements getting deleted
    // ex: 00011
    //final:0 1, 3*2=6
    //6 ways of getting the final answer by just removing them
    //but also you could remove the first 0 first, then 2nd 0 like that
    //so elements getting removed=sum
    //6*sum! is the answer

    for(int i=sum;i>=2;i--){
        product=(product*i)%MOD;
    }
    cout<<sum<<" "<<product<<endl;

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