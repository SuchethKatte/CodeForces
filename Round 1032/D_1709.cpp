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
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=0;i<n;i++){
        cin>>b[i];
    }
    vector<pair<int,int>> result;
    for(int i=0;i<n;i++){
        for(int j=0;j<n-1;j++){
            if(a[j]>a[j+1]){
                swap(a[j],a[j+1]);
                result.push_back({1,j+1});
            }
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n-1;j++){
            if(b[j]>b[j+1]){
                swap(b[j],b[j+1]);
                result.push_back({2,j+1});
            }
        }
    }
    for(int i=0;i<n;i++){
        if(a[i]>b[i]){
            swap(a[i],b[i]);
            result.push_back({3,i+1});
        }
    }
    cout<<result.size()<<endl;
    for(auto it:result){
        cout<<it.first<<" "<<it.second<<endl;
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