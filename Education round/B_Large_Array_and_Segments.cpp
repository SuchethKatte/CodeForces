#include <iostream>
#include <map>
#include <unordered_map>
#include <set>
#include <unordered_set>
#include <queue>
#include <cstdint>
#include <cmath>
#include <algorithm>
#include <vector>
#include <string>
#include <climits>

#define int long long
#define uint unsigned long long
#define dbl long double
using namespace std;

void solve() {
    uint n, k, x; cin >> n >> k >> x;
    vector<uint> a(n);
    uint s = 0;
    for (uint i = 0; i < n; ++i) {
        cin >> a[i];
        s += a[i];
    }

    uint l = 0, r = k;
    uint m;
    while (l < r) {
        m = (l + r) / 2;
        if (s*m >= x) r = m;
        else l = m + 1;
    }
    // cout << (k-l)*n << '\n';
    uint tar = (k-l)*n, res = l*s;
    vector<uint> pref(n+1);
    for (uint i = 1; i <= n; ++i) pref[i] = pref[i-1] + a[i-1];

    l = 0; r = pref.size()-1;
    while (l < r) {
        m = (l + r + 1) / 2;
        if (res-pref[m] >= x) l = m;
        else r = m - 1;
    }
    if (res-pref[r] >= x) tar += r+1;
    cout << tar << '\n';
}

signed main() {
    ios_base::sync_with_stdio(0);cin.tie(0);
    // freopen("input.txt", "r", stdin);

    // solve();
    int t; cin >> t;
    while (t--) {
        solve();
    }

    return 0;
}