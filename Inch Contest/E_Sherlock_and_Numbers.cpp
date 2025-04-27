#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll solution(ll n, ll count){
    if(n/10==0) return 9;
    int a= n%10;
    if(a==0) a=10;
    count+=a;
    n=n+a;
    while(n%10==0){
        n/=10;
    }
    return solution(n, count);
}
int main(){
    int tt;
    cin>>tt;
    while(tt--){
        ll n;
        cin>>n;
        ll count=0;
        cout<<solution(n, count)<<endl;
    }
}