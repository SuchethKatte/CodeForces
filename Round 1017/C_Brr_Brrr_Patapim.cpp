#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
void solution(vector<vector<int>> &grid){
    int n=grid.size();
    ll sum=0, sum1=(n*(2*n+1));
    for(int i=0;i<n;i++){
        sum+=grid[0][i];
    }
    for(int i=1;i<n;i++){
        sum+=grid[i][n-1];
    }
    cout<<sum1-sum<<" ";
    for(int i=0;i<n;i++){
        cout<<grid[0][i]<<" ";
    }
    for(int i=1;i<n;i++){
        cout<<grid[i][n-1]<<" ";
    }

}
int main(){
    int tt;
    cin>>tt;
    while(tt--){
        int n;
        cin>>n;
        vector<vector<int>> grid(n, vector<int>(n));
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                cin>>grid[i][j];
            }
        }
        solution(grid);
        cout<<endl;
    }
}