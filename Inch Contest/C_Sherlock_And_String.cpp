#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int solution(int n,int a, int b, int c, int d){
    if(b==0&&c==0){
        if((a==n-1&&b==0)||(a==0&&b==n-1)){
            return 1;
        }
        return 0;
    }
    if(abs(b-c)>1) return 0;
    return 1;
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    int tt;
    cin>>tt;
    while(tt--){
        int n, a, b, c, d;
        cin>>n>>a>>b>>c>>d;
        cout<<solution(n,a,b,c,d)<<endl;
    }
}