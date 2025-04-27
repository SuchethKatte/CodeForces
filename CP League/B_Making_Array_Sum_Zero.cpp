#include<bits/stdc++.h>
using namespace std;
int solution(vector<int> & arr){
    int oddsum=0, evensum=0, n=arr.size();
    for(int i=0;i<arr.size();i++){
        if(i%2){
            oddsum+=arr[i];
        }
        else{
            evensum+=arr[i];
        }
    }
    int a, b;
    if(n%2){
        int temp=n/2 +1;
        a=temp*temp;
        temp=n/2;
        b=(temp)*(temp+1);
    }
    else{
        int temp=n/2;
        a=temp*temp;
        b=(temp)*(temp+1);
    }
    if((oddsum+evensum)>0&&(a-b)>0) return -1;
    if((oddsum+evensum)<0&&(a-b)<0){
        return -1;
    }
    if(abs(oddsum+evensum)%abs(a-b)) return -1;
    return (abs(oddsum+evensum)/abs(a-b));
}
int main(){
    int tt;
    cin>>tt;
    while(tt--){
        int n;
        cin>>n;
        vector<int> arr (n);
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        cout<<solution(arr)<<endl;
    }
}