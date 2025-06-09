#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define gcd(a,b) __gcd(a,b)
#define MOD 1000000007
void yes() { cout<<"YES\n"; }
void no() { cout<<"NO\n"; }

void solve(){
    int n;
    long long k;
    cin >> n >> k;

    vector<long long> a(n);
    long long sum = 0;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        sum += a[i];
    }

    if (k < n || k > sum) {
        no();
        return ;
    }

    multiset<long long> ms;
    for (auto x : a) {
        ms.insert(x);
    }

    long long current_size = n;

    while (current_size < k) {

        auto it = prev(ms.end());
        long long top = *it;
        ms.erase(it);

        if (top == 1) {
            no();
            return ;
        }

        long long half = top / 2;
        long long other_half = top - half;

        ms.insert(half);
        ms.insert(other_half);

        current_size++; // 
    }

    cout << (current_size == k ? "YES\n" : "NO\n");
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