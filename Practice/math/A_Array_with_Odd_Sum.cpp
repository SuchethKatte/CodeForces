#include<bits/stdc++.h>
using namespace std;
typedef long ll;
bool solution(vector<ll> arr, ll sum, ll count){
    if(sum%2) return true;
    if(count==0||count==arr.size()) return false;
    return true;
}
int main(){
    int tt;
    cin>>tt;
    while(tt--){
        int n;
        cin>>n;
        vector<ll> arr(n);
        ll sum=0, count=0;
        for(int i=0;i<n;i++){
            cin>>arr[i];
            sum+=arr[i];
            if(arr[i]%2) count++;
        }
        cout<<(solution(arr,sum,count)?"YES":"NO")<<endl;
    }
}