#include<bits/stdc++.h>
using namespace std;
int64_t solution(vector<int> arr){
    int64_t ans=0;
    vector<int > bit(32,0);
    for(int i=0;i<arr.size();i++){
        int temp=__builtin_clz(arr[i]);
        bit[temp]++;
    }
    for(int i=0;i<32;i++){
        int64_t temp= bit[i];
        temp*=(bit[i]-1);
        temp/=2;
        ans+=temp;
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
//logic: __builtin_clz counts the no of leading zeroes bitwise.
// a&b >= a^b if and only if the msb is at the same position
// or no of leading zeroes is same
//initialize an array which counts the no of leading zeroes and stores them in an array 
//like a hashmap
//ans+=nc2 (n combination 2)

