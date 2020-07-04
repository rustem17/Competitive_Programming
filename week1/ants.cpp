#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define pb push_back

int main () {

    int t;
    cin >> t;

    while (t--) {

        int l, n;
        cin >> l >> n;

        int s = 0, l = 0;

        for (int i = 0; i < n; ++i) {
            int d;
            cin >> d;

            s = max(s, min(d, l - d));
            l = max(l, max(d, l - d));
        }

        cout << s << " " << l << "\n";
    }
}