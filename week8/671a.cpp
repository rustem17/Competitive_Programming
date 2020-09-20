#include <bits/stdc++.h>

using namespace std;

int main () {

    int t;
    cin >> t;

    while (t--) {

        int n;
        cin >> n;

        string s;
        cin >> s;

        bool odd = 0, even = 0;

        for (int i = 1; i <= n; ++i) {

            if (i % 2) {
                odd |= ((s[i] - '0') % 2 == 1);
            } else {
                even |= ((s[i] - '0') % 2 == 0);
            }
        }

        if (n % 2) cout << odd ? 1 : 2 << "\n";
        else cout << even ? 2 : 1 << "\n";
    }
}