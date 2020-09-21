#include <bits/stdc++.h>

using namespace std;

int main () {


    int t;
    cin >> t;

    while (t--) {

        int a, b, c;
        cin >> a >> b >> c;
        bool d = 0;

        for (int i = 0; i < a.size(); ++i) {

            if (c[i] != a[i] && c[i] != b[i]) {
                cout << "NO\n";
                d = 1;
            }
        }

        if (!d) cout << "YES\n";
    }
}