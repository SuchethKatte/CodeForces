#include <bits/stdc++.h>
using namespace std;

#define fastIO                                                                 \
    ios::sync_with_stdio(false);                                               \
    cin.tie(NULL);                                                             \
    cout.tie(NULL);                                                            \
    cout.precision(numeric_limits<double>::max_digits10);

#define int long long


void CoderAbhi27() {
    int n;
    cin >> n;
    vector<int> a(n);
    int c0 = 0, c1 = 0;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        if (a[i] % 2)
            c1++;
        else
            c0++;
    } // n
    if (c1 == 0 || c0 == 0) {
        int ans = *max_element(a.begin(), a.end()); // n
        cout << ans << '\n';
        return;
    }
    int ans = accumulate(a.begin(), a.end(), 0LL) - (c1 - 1); // n
    cout << ans << '\n';
}

// tc : O(n)
// sc : O(n)

int32_t main() {
    fastIO;

    int t = 1;
    cin >> t;
    while (t--) {
        CoderAbhi27();
    }
    return 0;
}