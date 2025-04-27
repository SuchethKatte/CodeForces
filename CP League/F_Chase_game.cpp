#include<bits/stdc++.h>
using namespace std;
bool solution(vector<int> &arr){
    int n=arr[0];
    int x=arr[1], y=arr[2];
    int a=arr[3], b=arr[4];
    if((y-x)<=a) return true;
    
}
int main(){
    int tt;
    cin>>tt;
    while(tt--){
        vector<int> arr(5);
        for(int i=0;i<5;i++){
            cin>>arr[i];
        }
        cout<<(solution(arr)?"P1":"P2");
    }
}