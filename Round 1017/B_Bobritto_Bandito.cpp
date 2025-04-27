#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
void solution(int n, int m, int l, int r){
    if(l==0||r==0){
        if(l==0){
            cout<<l<<" "<<m<<endl;
            return;
        }
        cout<<-m<<" "<<r<<endl;
        return;
    }
    if(m<=r){
        cout<<"0"<<" "<<m<<endl;
    }
    else if(abs(l)>=m){
        cout<<-m<<" "<<"0"<<endl;
    }
    else{
        int days=m-r;
        cout<<-days<<" "<<r<<endl;
    }

}
int main(){
    int tt;
    cin>>tt;
    while(tt--){
        int n, m, l, r;
        cin>>n>>m>>l>>r;
        solution(n,m,l,r);
    }
}