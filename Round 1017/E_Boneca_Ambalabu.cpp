#include<bits/stdc++.h>
using namespace std;
#define int long long
// int countone(int n){
//     int count=0;
//     while(n){
//         count+=(n%2);
//         n/=2;
//     }
//     return count;
// }
// void solve(){
//     int n;
//     cin>>n;
//     vector<int> arr(n);
//     int num=INT_MAX;
//     int numone=countone(num);
//     // cout<<numone<<" ";
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//         int a=countone(arr[i]), b=countone(num);
//         // cout<<a<<" "<<b<<endl;
//         // cout<<arr[i]<<" "<<num<<endl;
//         if(a<b&&arr[i]<num){
//             num=arr[i];
//         }
//     }
//     cout<<num<<" ";
//     ll sum=0;
//     for(int a:arr){
//         sum+=(a^num);
//     }
//     cout<<sum<<endl;
// }
// attempt to find the number which is power of 2 and is small. 
// case fails. for example 111110 and 100000 ^ of them is 011110 but if you chose 111110 ^1 111111
// but in other cases 100000 will be useful to increase the number value overall
void solve(){
    int n;
    cin>>n;
    vector<int> cnt(30,0);
    int arr[n+1];
    for(int i=0;i<n;i++){
        cin>>arr[i];
        int temp=arr[i];
        int j=0;
        while(temp){
            cnt[j++]+=(temp%2);
            temp/=2;
        }
    }
    int ans=0;
    for(int i=0;i<n;i++){
        int tot = 0;
        for (int j = 0; j < 30; j++) {
            bool f = ((arr[i] >> j) & 1);
            if (f) tot += (1 << j) * (n - cnt[j]);//if the bit is set, then the xor is valid if other numbers are 0
            else tot += (1 << j) * cnt[j]; // bit is not set, so the other numbers should have bit 1
        }
        ans = max(ans, tot);

    }
    cout<<ans<<endl;
    
 
}
signed main(){
    int tt;
    cin>>tt;
    while(tt--){
        solve();
    }
    return 0;
}