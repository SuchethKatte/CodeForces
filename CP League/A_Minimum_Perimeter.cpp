#include<bits/stdc++.h>
using namespace std;
int solutions(vector<vector<int>> arr){
    sort(arr.begin(),arr.end());
    vector<vector<int>> ans;
    for(int i=1;i<arr.size();i++){
        if(arr[i][0]==arr[i-1][0]||arr[i][1]==arr[i-1][1]){
            ans.push_back({arr[i][0],arr[i][1]});
        }
    }
    
}
int main(){
    int tt;
    cin>>tt;
    while(tt--){
        int n;
        cin>>n;
        vector<vector<int>> arr;
        for(int i=0;i<n;i++){
            int a, b;
            vector<int> temp;
            cin>>a>>b;
            temp.push_back(a);
            temp.push_back(b);
            arr.push_back(temp);
        }
        cout<<solutions(arr)<<endl;
    }
}