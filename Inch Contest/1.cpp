#include<bits/stdc++.h>
using namespace std;
int solution(vector<int> &arr, int n,int target){
    vector<int> nums(50,0);
    vector<int> ans(n,0);
    ans[0]=1;
    nums[arr[0]-1]++;
    for(int i=1;i<n;i++){
        nums[arr[i]-1]++;
        // ans[i]=max(ans[i-1],)
    }
}
int main(){
    int tt;
    cin>>tt;
    while(tt--){
        int n;
        cin>>n;
        vector<int> test(n);
        for(int i=0;i<n;i++){
            cin>>test[i];
        }
        int t;
        cin>>t;
        cout<<solution(test,n,t)<<endl;
    }
}