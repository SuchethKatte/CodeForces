#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define gcd(a,b) __gcd(a,b)
#define MOD 1000000007
void yes() { cout<<"YES\n"; }
void no() { cout<<"NO\n"; }
const int MAXN = 10000001;
bool prime[MAXN];

void solve(){
    int n, ans = 0;
    cin >> n;
    
    for (int i = 2; i <= n; i++) {
        if (prime[i]) {
            ans += n / i;
        }
    }
    
    cout << ans << endl;

}
signed main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int tt;
    cin>>tt;
    prime[0] = prime[1] = 0;
    prime[2]=1;
    for(int i=3;i<MAXN;i++){
        if(i%2) prime[i]=1;
        else prime[i]=0;
    }
	for (int i = 3; i * i < MAXN; i+=2) {
	    if (!prime[i]) continue;
	    for (int j = i * i; j < MAXN; j += i*2) 
            prime[j] = 0;
	}
    while(tt--){
        solve();
    }
    return 0;
}