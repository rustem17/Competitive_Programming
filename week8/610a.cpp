#include <bits/stdc++.h>

using namespace std;

int main () {

    int t;
    cin >> t;

    while (t--) {

        int a, b, c, r;
        cin >> a >> b >> c >> r;

        int l = max(min(a, b), c - r);
        int r = min(max(a, b), c + r);

        cout << max(a, b) - min(a, b) - max(0, r - l) << "\n";
    }
}