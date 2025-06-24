#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define gcd(a,b) __gcd(a,b)
#define MOD 1000000007
void yes() { cout<<"YES\n"; }
void no() { cout<<"NO\n"; }

void solve(){
    int n;
    cin>>n;
    vector<int> arr(n);
    for(int &it:arr) cin>>it;
    int ans=0;
    // for(int i=0;i<n;i++){
    //     for(int j=i+1;j<n;j++){
    //         int sum=arr[i]+arr[j];
    //         int left1=j+1, right1=n-1;
    //         while(left1<=right1){
    //             int k=(left1+right1)/2;
    //             if(sum>arr[k]){
    //                 left1=k+1;
    //             }
    //             else{
    //                 right1=k-1;
    //             }
    //         }
    //         int left2=j+1, right2=n-1;
    //         while(left2<=right2){
    //             int k=(left2+right2)/2;
    //             int sum1=sum+arr[k];
    //             if(sum1>arr.back()){
    //                 right2=k-1;
    //             }
    //             else{
    //                 left2=k+1;
    //             }
    //         }
    //         if(right1>=right2&&right1!=j&&right2!=j){
    //             ans+=(right1-right2)+1;
    //         }
    //     }
    // }
    // int a=arr.back();
    // int b=arr[n-2];
    // for(int i=2;i<n;i++){
    //     int a1=2*arr[i];
    //     int a2=a;
    //     if(i==n-1) a2=b;
    //     int sum=max(a1,a2)-arr[i];
    //     int left=0, right=i-1;
    //     while(left<=right){
    //         if(arr[left]+arr[right]>sum){
    //             ans+=right-left;
    //             right--;
    //         }
    //         else{
    //             left++;
    //         }
    //     }        

    // }
    // cout<<ans<<endl;
    // for(int i=0;i<n;i++){
    //     for(int j=i+1;j<n;j++){
    //         int sum=arr[i]+arr[j];
    //         // int left=j+1,right=n-1;
    //         // while(left<=right){
    //         //     int k=(left+right)/2;
    //         //     if(sum>arr[k]){
    //         //         left=k+1;
    //         //     }
    //         //     else{
    //         //         right=k-1;
    //         //     }
    //         // }
    //         // int right1=right;
    //         // if(right==j) continue;
    //         // left=j+1, right=n-1;
    //         // while(left<=right){
    //         //     int k=(left+right)/2;
    //         //     int sum1=sum+arr[k];
    //         //     if(sum1<=arr.back()){
    //         //         left=k+1;
    //         //     }
    //         //     else{
    //         //         right=k-1;
    //         //     }
    //         // }
    //         // if(right==j||right==n-1) continue;
    //         // ans+=right1-right+1;

    //     }
    // }
    for(int i=2;i<n;i++){
        int sum1=-arr[i];
        int sum2=arr[i]-arr.back();
        int sum=min(sum1,sum2);
        int l=0,r=i-1;
        while(l<=r){
            if(arr[l]+arr[r]+sum>0){
                ans+=r-l; //Pairs between r and l
                          // i.e if 1 2 3 4 5, sum=6, 1+5 is satisfyin, then 2,5 3,5 4,5 must satisfy as well
                r--;
            }
            else{
                l++;
            }
        }

    }
    cout<<ans<<endl;
}
signed main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int tt;
    cin>>tt;
    while(tt--){
        solve();
    }
    return 0;
}