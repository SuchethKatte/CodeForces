#include<bits/stdc++.h>
using namespace std;
typedef long long ll; 
void solve(){
    //logic:
    // the lightbulbs which are on must be odd number, bcoz you change the parity of 4 bulbs
    // now we can see that the changing parity is done like the shape of 4
    // what we can come to conclusion is two straight lines can be drawn x=c, x=c+1. whichever line has odd bulbs will contain treasure
    // similar way consider diagonal x+y=c and x+y=c+1, and same logic
    // intersection of these two lines contains treasure
    // ****#****
    // ****##***  two vertical lines and two diagonal lines
    // *****#***

    int n; cin>>n;
    int treasuremap[n][2];
    unordered_map<int,int> Vertical, Diagonal;
    for(int i=0;i<n;i++){
        cin>>treasuremap[i][0]>>treasuremap[i][1];
        Vertical[treasuremap[i][0]]++;
        Diagonal[treasuremap[i][0]+treasuremap[i][1]]++;
    }
    int s, t;
    for( auto it:Vertical){
        if(it.second%2){
            s=it.first;
            break;
        }
    }
    for(auto it:Diagonal){
        if(it.second%2){
            t=it.first-s;
            break;
        }
    }
    cout<<s<<" "<<t<<endl;


}
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int tt;
    cin>>tt;
    while(tt--){
        solve();
    }
    return 0;
}