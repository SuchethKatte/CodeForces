#include<bits/stdc++.h>
using namespace std;
long long solution(int y, int x){
    if(x==y) return -1;
    for(int i=0;i<pow(10,9);i++){
        long long temp1=(long long)(x+i);
        long long temp2=(long long)(y+i);
        if((temp1+temp2)==(temp1^temp2)){
            return i;
        }
    }
    return -1;
}
int main(){
    int tt;
    cin>>tt;
    while(tt--){
        int x,y;
        cin>>x>>y;
        cout<<solution(x,y)<<endl;
    }
}