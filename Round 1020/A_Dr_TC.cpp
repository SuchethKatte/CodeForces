#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
void solve(){
    int n;
    cin>>n;
    string s;
    cin>>s;
    int countone=0;
    for(int i=0;i<n;i++){
        if(s[i]=='1'){
            countone++;
        }
    }
    ll sum1=1;
    sum1*=(n-countone);
    sum1*=(1+countone);
    ll sum2=countone*(countone-1);
    cout<<sum1+sum2<<endl;
}
int main(){
    int tt;
    cin>>tt;
    while(tt--) solve();
    return 0;
}