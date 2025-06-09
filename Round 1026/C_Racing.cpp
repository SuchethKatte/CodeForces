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
    vector<vector<int>> obs(n, vector<int>(2)),valid_obs(n, vector<int>(2,0));
    vector<int> arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=0;i<n;i++){
        cin>>obs[i][0]>>obs[i][1];
    }
    bool flag=true;
    int l=0, r=0;
    for(int i=0;i<n;i++){
        if(arr[i]==1){
            l++;
            r++;
        }
        if(arr[i]==-1) r++;
        l=max(l,obs[i][0]);
        r=min(r,obs[i][1]);
        if(l>r) flag=false;
        valid_obs[i]={l,r};
    }
    if(!flag){
        cout<<-1<<endl;
        return;
    }
    deque<int> ans;
    int poss=valid_obs.back()[1];
    for(int i=n-1;i>0;i--){
        if(arr[i]!=-1){
            ans.push_front(arr[i]);
            if(arr[i]) poss--;
            continue;
        }
        if(poss<=valid_obs[i-1][1]) ans.push_front(0);
        else {ans.push_front(1); poss--;}
    }
    if(arr[0]!=-1){
        ans.push_front(arr[0]);
    }
    else{
        if(poss<=0) ans.push_front(0);
        else ans.push_front(1);
    }
    for(auto &x:ans) cout<<x<<" ";
    cout<<endl;

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