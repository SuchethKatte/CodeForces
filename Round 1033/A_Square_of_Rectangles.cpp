#include<bits/stdc++.h>
using namespace std;
#define int long long
#define gcd(a,b) __gcd(a,b)
#define MOD 1000000007
void yes() { cout<<"YES\n"; }
void no() { cout<<"NO\n"; }
bool PerfectSquare(int n) {
    if (n < 0) return false;
    int root = (int)(sqrt(n) + 0.5);
    return root * root == n;
}

void solve(){
    int l1, b1, l2, b2, l3, b3;
    cin>>l1>>b1>>l2>>b2>>l3>>b3;
    if(PerfectSquare(l1*b1+l2*b2+l3*b3)){
        int s=sqrt(l1*b1+l2*b2+l3*b3);
        if (b1 == b2 && b2 == b3 && b1 == s && l1 + l2 + l3 == s){
            yes();
            return;
            
        }
        if (l1 == l2 && l2 == l3 && l1 == s && b1 + b2 + b3 == s){
            yes();
            return;
        }
            
        if (b1 == b2 && b1 + b3 == s && l1 + l2 == s && l3 == s){
            yes();
            return;
        }
            
        if (l1 == l2 && l1 + l3 == s && b1 + b2 == s && b3 == s){
            yes();
            return;
        }
            
        if (l1 == s && l2 + l3 == s && b1 + max(b2, b3) == s) {
            yes();
            return;
        }
            
        if (b1 == s && b2 + b3 == s && max(l2, l3) + l1 == s){
            yes();
            return;
        }
            
    }
    no();


    


}
signed main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int tt;
    cin>>tt;
    while(tt--){
        solve();
    }
    return 0;
}