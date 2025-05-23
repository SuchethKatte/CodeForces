#include<bits/stdc++.h>
using namespace std;
void solve(){
    int n;
    cin>>n;
    //maximum must be nearest lower 2th power
    int p=1;
    while(p*2<n){
        p*=2;
    }
    //get the minimum number which is less than n and power of 2
    //print all numbers less than that
    for(int i=p-1;i>=0;i--) cout<<i<<" ";
    cout<<p<<" ";
    for(int i=p+1;i<n;i++) cout<<i<<" ";
    cout<<endl;
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    int tt;
    cin>>tt;
    while(tt--){
        solve();
    }
}