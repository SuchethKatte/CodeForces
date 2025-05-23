#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int solution(int n, int m, int p, int q){
    if(n%p==0&&((n/p)*q)!=m) return 0;
    return 1;
}
int main(){
    int tt;
    cin>>tt;
    while(tt--){
        int n, m, p, q;
        cin>>n>>m>>p>>q;
        cout<<(solution(n,m,p,q)?"YES":"NO")<<endl;
    }
}