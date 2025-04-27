#include<bits/stdc++.h>
using namespace std;
int lcm(int a, int b){
    if(b>a) return lcm(b,a);
    int i=1;
    while(true){
        if(!((a*i)%b)) return a*i;
        i++;
    }
}
void solution(int a, int b){
    for(int i=a;i<=b;i++){
        for(int j=i+1;j<=b;j++){
            if(lcm(i,j)<=b) {
                cout<<i<<" "<<j;
                break;
            }
        }
    }
    
}
int main(){
    int n;
    cin>>n;
    while(n--){
        int test1, test2;
        cin>>test1>>test2;
        solution(test1,test2);
        cout<<endl;
    }
}