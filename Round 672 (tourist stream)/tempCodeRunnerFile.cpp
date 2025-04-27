#include<bits/stdc++.h>
using namespace std;
long long solution(vector<int> arr){
    long long ans=0;
    vector<int> bit(32,0);
    for(int i=0;i<arr.size();i++){
        int temp=__builtin_clz(arr[i]);
        bit[temp]++;
    }
    for(int i=0;i<32;i++){
        ans+=(long long)((bit[i])*(bit[i]-1)/2);
    }
    return ans;
}
int main(){
    int n;
    cin>>n;
    while (n--){
        int tt;
        cin>>tt;
        vector<int> test(tt);
        for(int i=0;i<tt;i++){
            cin>>test[i];
        }
        cout<<solution(test)<<endl;
    }
}