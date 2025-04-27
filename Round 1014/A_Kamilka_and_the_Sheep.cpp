#include<bits/stdc++.h>
using namespace std;
int solution(vector<int> &arr){
    int mini=INT_MAX, maxi=INT_MIN;
    for(int i=0;i<arr.size();i++){
        mini=min(mini,arr[i]);
        maxi=max(maxi,arr[i]);
    }
    return maxi-mini;
}
int main(){
    int tt;
    cin>>tt;
    while(tt--){
        int n;
        cin>>n;
        vector<int> arr(n);
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        cout<<solution(arr)<<endl;
    }
}