#include<bits/stdc++.h>
using namespace std;
int64_t solution(vector<int> arr, int n){
    vector<int64_t> mx(n+1);
    vector<int64_t> mn(n+1);
    for(int i=0;i<n;i++){
        mx[i+1]=max(mx[i],arr[i]-mn[i]);
        mn[i+1]=min(mn[i],arr[i]-mx[i]);
    }
    return mx[n];
}
int main(){
    int tt;
    cin>>tt;
    while(tt--){
        int n;
        cin>>n;
        int q;
        cin>>q;
        vector<int> testcase(n);
        for(int i=0;i<n;i++){
            cin>>testcase[i];
        }
        cout<<solution(testcase,n)<<endl;
    }
}
//Dynamic programming
//ans: arr[b1]-arr[b2]+arr[b3]-.......
//ans: arr[b1]-(arr[b2]-arr[b3]+.......)
//max ans: when arr[b2]-arr[b3]+.... is minimum

