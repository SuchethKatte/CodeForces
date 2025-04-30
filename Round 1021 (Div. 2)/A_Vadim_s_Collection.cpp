#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
void solve(){
    string s;
    cin>>s;
    vector<int> arr(10,0);
    string ans;
    for(int i=0;i<s.size();i++){
        arr[s[i]-'0']++;
    }
    for(int i=9;i>=0;i--){
        if(arr[i]){
            ans+=(i+'0');
            arr[i]--;
        }
        else{
            for(int j=i;j<=9;j++){
                if(arr[j]){
                    ans+=(j+'0');
                    arr[j]--;
                    break;
                }
            }
        }
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