#include<bits/stdc++.h>
using namespace std;
#define int long long 
typedef long long ll;
#define gcd(a,b) __gcd(a,b)
#define MOD 1000000007
void yes() { cout<<"YES\n"; }
void no() { cout<<"NO\n"; }
const int MAXN=1000005;
vector<vector<int>> facts;
void pre(){
    for(int i=1;i<MAXN;i++){
        facts.push_back({});
    }
    for(int i=1;i<MAXN;i++){
        for(int j=1;j*j<MAXN;j++){
            facts[i*j].push_back(i);
        }
    }
}
map<int,int> mpp;
int nooftries(int m, int k){
    //DP SOLUTION TRYING TO FIND THE MINIMUM NO OF TRIES FOR m TO REACH 1 BY DIVIDING
    //WE DO IT BY DIVIDING m WITH ITS FACTOR SUPPOSE L AND RECURSIVELY TRY AGAIN FOR m/L
    // WE GLOBALLY DECLARE mpp SO THAT WE CAN REUSE IT FOR OTHER FACTORS
    if(mpp.find(m)!=mpp.end()){
        return mpp[m];
    }
    if(m==1) return 0;
    int ans=12345678;
    vector<int> factors=facts[m];
    for(int L:factors){
        if(L<=k&&L>1){
            ans=min(ans,1+nooftries(m/L,k));
        }
    }
    if(ans==12345678){          // WHEN WILL THIS BE TRUE. WHEN A PRIME FACTOR WILL BE GREATER THAN K
        return -10000000;       // THT TIME ans=min(ans,1+nooftries(m/L,k))
    }                           // TS WILL BECOME ans=12345678, AND HENCE WILL RETURN -1000000 
    mpp[m]=ans;                 // THEREFORE 1+-10000000 WILL STILL BE LARGE NEGATIVE NUMBER SO ON
    return ans;                 // SO WE GET RETURNED A NEGATIVE NUMBER ULTIMATELY
}
void solve(){
    int x,y,k;
    cin>>x>>y>>k;
    int g=gcd(x,y);
    int a=nooftries(x/g,k);
    int b=nooftries(y/g,k);
    if(min(a,b)<0){
        cout<<-1<<endl;
        return;
    }
    cout<<a+b<<endl;
    mpp.clear();
    
    
}


signed main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    pre();
    int tt;
    cin>>tt;
    while(tt--){
        solve();
    }
    return 0;
}