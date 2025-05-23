#include<bits/stdc++.h>
using namespace std;
void solve(){
    int a, b;
    cin>>a>>b;
    // int digitsize=(int)log2(b);
    // int digit=1<<digitsize;
    // int c=b%digit;
    // if(c<a){
        
    // }
    // else{
    //     int ans=min(abs(c-a)+1,(b-a));
    //     cout<<ans<<endl;
    // }
    int ans=b-a;
    int new_a=a;
    while(new_a<=b){
        int x=new_a-a;
        for(int y=0;y<=b-a;y++){
            ans=min(ans,x+y+1+(a+x)|(b+y)-(b+y));
        }
        new_a=((new_a-1)|new_a) +1;

    }
    cout<<ans<<endl;
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    int tt;
    cin>>tt;
    while(tt--){
        solve();
    }

}