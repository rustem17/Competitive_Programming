#include <bits/stdc++.h>

using namespace std;

int main () {

    int t;
    cin >> t;

    while (t--) {

        int x, y, k;
        cin >> x >> y >> k;

        cout << ((y + 1) * k - 1 + x - 2) << "\n";
    }
}