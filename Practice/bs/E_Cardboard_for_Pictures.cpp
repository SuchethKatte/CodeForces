#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define gcd(a,b) __gcd(a,b)
#define MOD 1000000007
void yes() { cout<<"YES\n"; }
void no() { cout<<"NO\n"; }

void solve(){
    int n, c;
    cin>>n>>c;
    vector<int> arr(n);
    int square=0, sum=0;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int l=0, r=1e9;
    while(l<=r){
        int mid=(l+r)/2;
        int sum=0;
        for(int i=0;i<n;i++){
            sum+=(arr[i]+(2*mid))*(arr[i]+(2*mid));
            if(sum>c){
                break;
            }
        }
        if(sum==c){
            cout<<mid<<endl;
            return;
        }
        else if(sum<c){
            l=mid+1;
        }
        else{
            r=mid-1;
        }
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