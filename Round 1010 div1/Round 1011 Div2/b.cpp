#include<bits/stdc++.h>
using namespace std;
bool solution(int m, int n, vector<vector<int>> &matrix){
    for(int i=0;i<m;i++){
        if(matrix[i][0]){
            matrix[i][0]=2;
        }

    }
    for(int i=0;i<n;i++){
        if(matrix[0][i]){
            matrix[0][i]=3;
        }
    }
    for(int i=1;i<m;i++){
        for(int j=1;j<n;j++){
            if(matrix[i][j]){
                if(matrix[i-1][j]==4&&matrix[i][j-1]==4){
                    matrix[i][j]=4;
                }
                else if(matrix[i-1][j]==4){
                    matrix[i][j]=2;
                }
                else if(matrix[i][j-1]==4){
                    matrix[i][j]=3;
                }
                else if(matrix[i-1][j]==2&&matrix[i][j-1]==3){
                    matrix[i][j]=4;
                }
                else if(matrix[i-1][j]==2){
                    matrix[i][j]=2;
                }
                else if(matrix[i][j-1]==3){
                    matrix[i][j]=3;
                }
                else return false;
            }
        }
    }

    return true;
}
int main(){
    int tt;
    cin>>tt;
    while(tt--){
        int m,n;
        cin>>m>>n;
        vector<vector<int>> matrix;
        for(int i=0;i<m;i++){
            vector<int> temp(n);
            for(int j=0;j<n;j++){
                cin>>temp[j];
            }
            matrix.push_back(temp);
        }
        cout<<(solution(n,m,matrix)?"YES":"NO")<<endl;
    }
}