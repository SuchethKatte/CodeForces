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
    vector<int> arr(n);
    vector<int> count(6,0);
    vector<int> ans;
    for(int i=0;i<n;i++){
        cin>>arr[i];
        if(arr[i]>5) continue;
        count[arr[i]]++;
        if(count[0]>=3&&count[1]>=1&&count[2]>=2&&count[3]>=1&&count[5]>=1){
            ans.push_back(i+1);
        }
    }
    cout<<(ans.size()==0?0:ans[0])<<endl;


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