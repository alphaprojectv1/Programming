#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        string s(n, 'a');
        for (int i = n - 1; i >= 0; i--) {
            if (k == 1) break;
            s[i] = 'a' + min(k - 1, 25);
            k -= min(k - 1, 25);
        }
        cout << s << '\n';
    }
    return 0;
}
