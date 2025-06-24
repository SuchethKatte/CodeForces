#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define gcd(a,b) __gcd(a,b)
#define MOD 1000000007
void yes() { cout<<"YES\n"; }
void no() { cout<<"NO\n"; }

void solve(){
    int n, m;
    cin>>n>>m;
    int arr[n][m];
    int maxi=0;
    vector<pair<int,int>> results;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>arr[i][j];
            if(arr[i][j]==maxi){
                results.push_back({i,j});
            }
            if(arr[i][j]>maxi){
                maxi=arr[i][j];
                results.clear();
                results.push_back({i,j});
            }
        }
    }
    if(results.size()<=2||n==1||m==1){
        cout<<maxi-1<<endl;
        return;
    }
    pair<int,int> p1=results[0];
    int i=1, index=0;
    pair<int,int> p2;
    for(i=1;i<results.size();i++){
        if(p1.first!=results[i].first&&p1.second!=results[i].second){
            p2=results[i];
            break;
        }
    }
    if(i==results.size()){
        cout<<maxi-1<<endl;
        return;
    }
    for(int i=1;i<results.size();i++){
        if(p1.first!=results[i].first&&p1.second!=results[i].second&&p2.first!=results[i].first&&p2.second!=results[i].second){
            cout<<maxi<<endl;
            return;
        }
        int flag1=false, flag2=false;
        for(int i=1;i<results.size();i++){
        if(p1.first==results[i].first){
            flag1=true;
        }
        if(p1.second==results[i].second){
            flag2=true;
        }
        if(flag1&&flag2){
            cout<<maxi<<endl;
            return;
        }
    }
    }
    cout<<maxi-1<<endl;
    // bool flag=false;
    // for(int i=0;i<n;i++){
    //     for(int j=0;j>m;j++){
    //         int size=0;
    //         for(auto it:results){
    //             if(i==it.first||j==it.second){
    //                 size++;
    //             }
    //         }
    //         if(size==results.size()){
    //             flag=true;
    //             cout<<maxi-1<<endl;
    //             return;
    //         }
    //     }
    // }
    // cout<<maxi<<endl;
    // int n, m;
    // cin>>n>>m;
    // int arr[n][m];
    // vector<int> r(n), c(m);
    // int maxi=0;
    // for(int i=0;i<n;i++){
    //     for(int j=0;j<m;j++){
    //         cin>>arr[i][j];
    //         if(maxi<arr[i][j]){
    //             maxi=arr[i][j];
    //         }
    //     }
    // }
    // int cnt_max=0;
    // for(int i=0;i<n;i++){
    //     for(int j=0;j<m;j++){
    //         if(arr[i][j]==maxi){
    //             r[i]++;
    //             c[j]++;
    //             cnt_max++;
    //         }
    //     }
    // }
    // bool flag=false;
    // for(int i=0;i<n;i++){
    //     for(int j=0;j<m;j++){
    //         if(arr[i][j]==maxi){
    //             if(r[i]+c[j]-1==cnt_max){     //Subtract because you're counting the same element twice
    //                 flag=true;
    //             }   
    //         }
    //         else if(r[i]+c[j]==cnt_max){
    //             flag=true;
    //         }
    //         if(flag){
    //             cout<<maxi-1<<endl;
    //             return;
    //         }
    //     }
    // }
    // cout<<maxi<<endl;

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