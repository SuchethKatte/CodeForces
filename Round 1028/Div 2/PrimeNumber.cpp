#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
    const ll N=1e9;
    bool prime[N]={0};
    prime[0]=0; prime[1]=0; prime[2]=1;
    for(ll i=3;i<N;i+=2){
        prime[i]=1;
    }
    for(ll i=3;i<N;i++){
        if(!prime[i]) continue;
        for(ll j=i*i;j<N;j+=2*i){
            prime[i]=0;
        }
    }
    for(ll i=2;i<N;i++){
        if(prime[i]){
            cout<<i<<endl;
        }
    }

}