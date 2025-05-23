#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int solution(vector<int> arr){
    int s=arr[0];
    sort(arr.begin(),arr.end());
    int index=0;
    int n=arr.size();
    for(int i=0;i<arr.size();i++){
        if(arr[i]==s){
            index=i;
            break;
        } 
    }
    int ans1=(n-1)/2;
    int ans2=n-1-ans1;
    if(index<=ans2) return 1;
    return 0;

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
            arr[i]=abs(arr[i]);
        }
        cout<<(solution(arr)?"YES":"NO")<<endl;
    }
}