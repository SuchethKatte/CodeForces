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
    for(auto &it: arr) cin>>it;
    int k;
    cin>>k;
    for(int i=arr[0]; i<=arr.back();i++){
        int l=0, r=n-1;
        int flag=false;
        while(l<=r){
            int mid=(l+r)/2;
            if(arr[mid]==i){
                flag=true;
                break;
            }
            if(arr[mid]>i){
                r=mid-1;
            }
            else{
                l=mid+1;
            }

        }
        if(!flag){
            k--;
            if(k==0){
                cout<<i<<endl;
                return;
            }
        }
    }
    cout<<arr.back()+k<<endl;
}
signed main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    solve();
    return 0;
}