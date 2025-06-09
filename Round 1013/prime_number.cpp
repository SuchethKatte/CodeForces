#include<bits/stdc++.h>
using namespace std;
int main(){
    int n=100;
    bool prime[n];
    prime[0]=0;
    prime[1]=0;
    prime[2]=1;
    for(int i=3;i<n;i++){
        if(i%2) prime[i]=1;
        else prime[i]=0;
    }
    for(int i=3;i*i<n;i+=2){
        if(!prime[i]) continue;
        for(int j=i*i;j<n;j+=i*2){
            prime[j]=0;
        }
    }
    for(int i=0;i<n;i++){
        cout<<i<<" "<<prime[i]<<endl;
    }
}