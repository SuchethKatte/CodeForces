#include<bits/stdc++.h>
using namespace std;
int solution(vector<int> &arr, long long sum_){
    int n=arr.size()+1;
    long long sum=(n*(n+1))/2;
    return sum-sum_;
}
int main(){
    int n;
    cin>>n;
    vector<int> arr(n-1);
    long long sum_=0;
    for(int i=0;i<n-1;i++){
        cin>>arr[i];
        sum_+=arr[i];
    }
    cout<<solution(arr,sum_);
}