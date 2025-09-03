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
    int n; 
    cin>>n;
    map<int,int> mpp;
    for(int i=1;i<=n;i++){
        cout<<"? "<<i<<" "<<n<<" ";
        for(int i=1;i<=n;i++){
            cout<<i<<" ";
        }
        cout<<endl;
        cout.flush();
        int a;
        cin>>a;
        mpp[i]=a;
    }
    vector<vector<int>> count;
    for(auto it:mpp){
        count.push_back({it.second,it.first});
    }
    sort(rall(count));
    vector<int> ans;
    ans.push_back(count[0][1]);
    // for(int i=1;i<n;i++){
    //     if(count[i][0]==count[ans.back()][0]){
    //         continue;
    //     }
    //     // int index;
    //     // int someNumber=count[i][0];
    //     // for(int j=i+1;j<n;j++){
    //     //     int takesomenumber=count[j][0];
    //     //     int k=j;
    //     //     while(k<n){
    //     //         k++;
    //     //         if(count[k][0]==takesomenumber){
    //     //             continue;
    //     //         }
    //     //         else{
    //     //             break;
    //     //         }
                
    //     //     }
    //     //     cout<<"? "<<count[i][1]<<" "<<2+n-k<<" ";
    //     //     for(int l=k;l<n;l++){
    //     //         cout<<count[l][1]<<" ";
    //     //     }
    //     //     cout<<endl;
    //     //     cout.flush();
    //     //     int a;
    //     //     cin>>a;
    //     //     if(a==someNumber){
    //     //         ans.push_back(count[j][1]);
    //     //     }
    //     // }
    //     int someNumber=count[i][0];
    //     int countprev=count[ans.back()][0];
    //     int j=i+1;
    //     while(j<n&&count[j][0]==countprev){
    //         j++;
    //     }
    //     for(int k=i+1;k<j;k++){
    //         cout<<"? "<<count[i][1]<<" "<<2+n-j<<" "<<count[i][1]<<" "<<count[k][1]<<" ";
    //         for(int l=j;l<n;l++){
    //             cout<<count[j][1]<<" ";
    //         }
    //         cout<<endl;
    //         cout.flush();
    //         int a;
    //         cin>>a;
    //         if(a==countprev){
    //             ans.push_back(count[i][1]);
    //         }
    //     }

    // }
    

    // for (int i = 1; i < n; i++) {
    //     int someNumber = mpp[ans.back()];
    //     int nextNumber = count[i][0];

    //     if (nextNumber == someNumber) continue; 

    //     int temp = count[i][1];
    //     int j=i+1;
    //     for(j;j<n;j++){
    //         if(count[j][0]!=nextNumber){
    //             break;
    //         }
    //     }
    //     vector<int> S;
    //     S.push_back(ans.back());
    //     for(int k=j;k<n;k++){
    //         S.push_back(count[k][1]);
    //     }
    //     for(int l=i;l<n;l++){
    //         S.push_back(count[l][1]);
    //         cout << "? " << ans.back()<<" "<<(int)S.size() << " ";
    //         for (int v : S) cout << v << " ";
    //         cout << endl;
    //         cout.flush();

    //         int a;
    //         cin >> a;
    //         if (a == someNumber) {
    //             ans.push_back(temp);
    //             break;
    //         }
    //         else{
    //             S.pop_back();
    //         }
    //     }
    // }
    for (int i = 1; i < n; i++) {
    int someNumber = mpp[ans.back()];     
    int nextNumber = count[i][0];         

    if (nextNumber == someNumber) continue;

    
    int j = i;
    while (j < n && count[j][0] == nextNumber) j++;

    
    for (int idx = i; idx < j; idx++) {
        int candidate = count[idx][1];

        
        vector<int> S;
        S.push_back(ans.back());
        S.push_back(candidate);
        for (int k = j; k < n; k++) {
            S.push_back(count[k][1]);
        }

        
        cout << "? " << ans.back() << " " << (int)S.size() << " ";
        for (int v : S) cout << v << " ";
        cout << endl;
        cout.flush();

        int a;
        cin >> a;

        
        if (a == someNumber ) {
            ans.push_back(candidate);
            break;
        }
    }

    
    i = j - 1;
}




    cout<<"! "<<ans.size()<<" ";

    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }
    cout<<endl;
    cout.flush();


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