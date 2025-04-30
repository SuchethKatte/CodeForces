#include<bits/stdc++.h>
using namespace std;
#define int long long 
void solve(){
    int n;
    cin>>n;
    string s;
    cin>>s;
    vector<int> A;
    vector<int> B;
    for(int i=0;i<n;i++){
        if(s[i]=='A') A.push_back(i+1);
        else B.push_back(i+1);
    }
    if(B.back()>A.back()&&B.size()!=1) cout<<"Bob"<<endl;
    else if(A.back()==n&&A[0]==1) cout<<"Alice"<<endl;
    else{
        cout<<"Bob"<<endl;
    }
    
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