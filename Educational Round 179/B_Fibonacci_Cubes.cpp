#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define gcd(a,b) __gcd(a,b)
#define MOD 1000000007
void yes() { cout<<"YES\n"; }
void no() { cout<<"NO\n"; }

void solve(){
    int n, m;
    cin>>n>>m;
    vector<vector<int>> arr(m,vector<int>(3));
    for(int i=0;i<m;i++){
        for(int j=0;j<3;j++){
            cin>>arr[i][j];
        }
        sort(arr[i].begin(),arr[i].end());
    }
    vector<int> fib(n+2);
    fib[1]=1; fib[2]=2;
    for(int i=3;i<n+2;i++){
        fib[i]=fib[i-1]+fib[i-2];
    }
    for(int i=0;i<m;i++){
        if(arr[i][0]>=fib[n]&&arr[i][2]>=fib[n+1]){
            cout<<"1";
        }
        else{
            cout<<"0";
        }
    }
    cout<<endl;
}
signed main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int tt;
    cin>>tt;
    while(tt--){
        solve();
    }
    return 0;
}
//Since cubes are fibo, the cubes perfectly align themselves
// like 1, 2, 3, 5, 8, 13, 21
// take max length 8 for example
// * * * * * * * * + + + + +
// * * * * * * * * + + + + +
// * * * * * * * * + + + + +
// * * * * * * * * + + + + +
// * * * * * * * * + + + + +
// * * * * * * * * . . . - -
// * * * * * * * * . . . - -
// * * * * * * * * . . . @
// They fit like this perfectly