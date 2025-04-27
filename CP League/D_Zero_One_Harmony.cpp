#include <iostream>
#include <vector>
#include <string>

using namespace std;

void solve() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        string s;
        cin >> s;
        
        vector<int> count_1s(n + 2, 0);
        for (int i = n - 1; i >= 0; --i) {
            count_1s[i] = count_1s[i + 1] + (s[i] == '1' ? 1 : 0);
        }
        
        long long res = 0;
        for (int i = 0; i < n; ++i) {
            
            if (s[i] == '0') {
                res += 1 + count_1s[i + 1];
            }
        }
        
        cout << res << endl;
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    return 0;
}