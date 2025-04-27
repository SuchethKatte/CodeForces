#include<bits/stdc++.h>
using namespace std;
bool solution(vector <int> arr){
    for(int i=0;i<arr.size()-1;i++){
        if(arr[i]<=arr[i+1]) return true;
    }
    return false;
}
int main(){
    int n;
    cin>>n;
    while(n--){
        int a;
        cin>>a;
        vector<int> tt(a);
        for(int i=0;i<a;i++){
            cin>>tt[i];
        }
        cout<<(solution(tt)?"YES":"NO")<<endl;
    }
}
//Logic: maximum possible pairs formed is sigma(n-1)
//if there exists a pair such that (arr[i]<arr[i+1]) problem can be done without breaking condition
