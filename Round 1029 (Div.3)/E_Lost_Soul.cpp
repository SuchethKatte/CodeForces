#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define gcd(a,b) __gcd(a,b)
#define MOD 1000000007
void yes() { cout<<"YES\n"; }
void no() { cout<<"NO\n"; }

void solve(){
    int n;
    cin>>n;
    vector<int> a(n), b(n);
    for(auto &it: a) cin>>it;
    for(auto &it: b) cin>>it;
    if(a.back()==b.back()){
        cout<<n<<endl;
        return;
    }
    vector<bool> found(n+1,0);
    int ans=0;
    for(int i=n-2;i>=0;i--){
        if(a[i]==b[i]||a[i]==a[i+1]||b[i]==b[i+1]||found[a[i]]||found[b[i]]){
            ans=i+1;
            break;
        }
        found[a[i+1]]=1;
        found[b[i+1]]=1;
        //Note that any index can be removed. So if we find an element which is equal to current element, 
        //we could make the element equal to the already found element
        //a[i]=b[i+1]=a[i+2]=b[i+3]...
        // suppose a[i]=b[i+2]
        //then we could remove index i+1
        //then a[i]=b[i+2]=a[i+3]
        // suppose a[i]=a[i+2], no need to change
    }
    cout<<ans<<endl;
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