#include <bits/stdc++.h>

using namespace std;

int main () {

    int t;
    cin >> t;

    while (t--) {

        int n, k;
        cin >> n >> k;

        string s;
        cin >> s;

        int z = 0, o = 0;

        bool cc = 1;

        for (int i = 0; i < k; i++) {

            int tt = -1;
            for (int j = i; j < n; j += k) {
                if (s[j] != '?') {
                    if (tt != -1 && s[j] - '0' != tt) {
                        cc = 0;
                        break;
                    }

                    tt = s[j] - '0';
                }
            }

            if (tt != -1) (tt == 0 ? z : o)++;
        }

        if (max(z, o) > k / 2) cc = 0;

        cout << (cc ? "YES\n" : "NO\n");
    }    
}