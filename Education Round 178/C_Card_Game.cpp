#include<bits/stdc++.h>
using namespace std;
#define int long long 
void solve(){
    int n;
    cin>>n;
    string s;
    cin>>s;
    if(s[0]==s[n-1]){
        cout<<(s[0]=='A'?"Alice":"Bob")<<endl;
        return;
    }
    vector<int> A,B;
    for(int i=0;i<n;i++){
        if(s[i]=='A') A.push_back(i);
        else B.push_back(i);
    }
    if(A[0]==0&&B.back()==n-1){
        if(B.size()!=1) cout<<"Bob"<<endl;
        else cout<<"Alice"<<endl;
        return;
    }
    if(n==2) cout<<"Bob"<<endl;
    else if(s[n-2]=='A'){
        cout<<"Alice"<<endl;

    }
    else cout<<"Bob"<<endl;

    
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