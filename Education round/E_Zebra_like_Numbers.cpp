#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll solution(ll a, ll b, ll c ){
    vector<ll> z;
    z.push_back(1);
    ll i=1;
    while(i<=b){
        i=(i<<2)+1;
        z.push_back(i);
    }
    ll maincount=0;
    for(ll j=a;j<=b;j++){
        ll sidecount=0;
        for(int k=z.size()-1;k>=0;k--){
            sidecount+=(j/z[k]);
            ll dummy=j;
            dummy=dummy%z[k];
        }
        if(sidecount==c) maincount++;
    }
    return maincount;
}
int main(){
    int tt;
    cin>>tt;
    while(tt--){
        int a,b,c;
        cin>>a>>b>>c;
        cout<<solution(a,b,c)<<endl;
    }
}