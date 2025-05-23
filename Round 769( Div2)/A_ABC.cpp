#include<bits/stdc++.h>
using namespace std;
void solve(){
    int n;
    cin>>n;
    string s;
    cin>>s;
    cout<<((n==1)||(n==2&&s[0]!=s[1])?"YES":"NO")<<endl;
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