#include<bits/stdc++.h>
using namespace std;
int solution(vector<vector<int>> &grid, int n){
    int sumx=0, sumy=0;
    for(int i=1;i<grid.size();i++){
        grid[i][0]+=grid[i-1][0];
        grid[i][1]+=grid[i-1][1];
    }
    sumx=grid[grid.size()-1][0]+n-grid[0][0];
    sumy=grid[grid.size()-1][1]+n-grid[0][1];
    return 2*(sumx+sumy);
}
int main(){
    int tt;
    cin>>tt;
    while(tt--){
        int s, n;
        cin>>s>>n;
        vector<vector<int>> testcase;
        int xmin=INT_MAX, ymin=INT_MAX, xmax=INT_MIN, ymax=INT_MIN;
        for(int i=0;i<s;i++){
            vector<int> temp(2);
            cin>>temp[0]>>temp[1];
            testcase.push_back(temp);
        }
        cout<<solution(testcase, n)<<endl;
    }
}