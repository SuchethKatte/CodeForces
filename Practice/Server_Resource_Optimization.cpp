#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define gcd(a,b) __gcd(a,b)
#define MOD 1000000007
void yes() { cout<<"YES\n"; }
void no() { cout<<"NO\n"; }

void solve(){
    int n, q;
    cin>>n>>q;
    vector<int> arr(n);
    for(auto &it:arr) cin>>it;
    vector<pair<int,int>> qu(q);
    vector<int> count(n+1,0);
    for(auto &it:qu) {
        cin>>it.first>>it.second;
        it.first--; it.second--;
        count[it.first]++;
        count[it.second+1]--;
    }
    for(int i=1;i<n;i++){
        count[i]+=count[i-1];
    }
    count.pop_back(); //remove (n+1)th index. I dont need it
    sort(arr.begin(),arr.end());
    sort(count.begin(),count.end());
    int sum=0;
    for(int i=n-1;i>=0;i--){
        sum+=(count[i]*arr[i]);
    }
    cout<<sum<<endl;
    
    


}
signed main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    solve();
    return 0;
}