#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int> arr(101,1);
    for(int i=2;i<=100;i++){
        for(int j=i;j<=100;j+=i){
            arr[j]=!arr[j];
        }
    }
    int ans=0;
    for(int i=1;i<=100;i++){
        ans+=arr[i];
    }
    cout<<ans<<endl;
}