#include<bits/stdc++.h>
using namespace std;
#define int long long 
void solve(){
    int n; cin>>n;
    vector<int> arr(n);
    string s; cin>>s;
    int sum=n*(n+1)/2;
    int sum_=0;
    int count1=1, count2=n;
    for(int i=s.size()-1;i>=0;i--){
        if(s[i]=='>'){
            arr[i+1]=count2;
            sum_+=count2;
            count2--;
        }
        else{
            arr[i+1]=count1;
            sum_+=count1;
            count1++;
        }
    }
    arr[0]=(sum-sum_);
    for(int i=0;i<arr.size();i++){
        cout<<arr[i]<<" ";
    }
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