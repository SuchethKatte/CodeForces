#include<bits/stdc++.h>
using namespace std;
bool solution(int x,int y, int a){
    int sum=a%(x+y);
    if(sum-x<0) return false;
    return true;
}
int main(){
    int tt;
    cin>>tt;
    while(tt--){
        int x,y,a;
        cin>>x>>y>>a;
        cout<<(solution(x,y,a)?"YES":"NO")<<endl;
    }
}