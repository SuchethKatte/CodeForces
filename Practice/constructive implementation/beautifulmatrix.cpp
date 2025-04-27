#include<bits/stdc++.h>
using namespace std;
int solution(vector<vector<int>> &matrix){
    int m,n;
    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){
            if(matrix[i][j]){
                m=i;
                n=j;
                break;
            }
        }
    }
    return (abs(m-2)+abs(n-2));
}
int main(){
    vector<vector<int>> testcase;
    for(int i=0;i<5;i++){
        vector<int> temp;
        for(int j=0;j<5;j++){
            int test;
            cin>>test;
            temp.push_back(test);
        }
        testcase.push_back(temp);
    }
    cout<<solution(testcase);
}