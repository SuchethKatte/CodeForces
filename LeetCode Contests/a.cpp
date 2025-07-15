#include<bits/stdc++.h>
using namespace std;
long long minCost(int m, int n, vector<vector<int>>& waitCost) {
        vector<vector<long long>> ans((long long)m,vector<long long>((long long) n,0));
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                ans[i][j]+=((i+1)*(j+1));
                if(i==m-1&&j==n-1) continue;
                if((i+j)&1){
                    ans[i][j]+=waitCost[i][j];
                }
            }
        }
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                cout<<ans[i][j]<<" ";
            }
            cout<<endl;
        }
        for(int i=1;i<m;i++){
            ans[i][0]+=ans[i-1][0];
        }
        for(int i=1;i<n;i++){
            ans[0][i]+=ans[0][i-1];
        }
        for(int i=1;i<m;i++){
            for(int j=1;j<n;j++){
                ans[i][j]+=min(ans[i-1][j],ans[i][j-1]);
            }
        }
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                cout<<ans[i][j]<<" ";
            }
            cout<<endl;
        }
        return ans[m-1][n-1];
        
}
int main(){
    vector<vector<int>> root={{6,1,4},{3,2,5}};
    cout<<minCost(2,3,root);
}