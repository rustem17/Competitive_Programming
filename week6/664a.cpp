#include <bits/stdc++.h>

using namespace std;

int main () {

    int t;
    cin >> t;

    while (t--) {
    
        int r, g, b, w;
        cin >> r >> g >> b >> w;

        if (r % 2 + g % 2 + b % 2 + w % 2 <= 1) {
            cout << "Yes\n";
        } else if (r > 0 && g > 0 && ((r - 1) % 2 + (g - 1) % 2 + (b - 1) % 2 + (w + 1) % 2 <= 1)) {
            cout << "Yes\n";

        } else {
            cout << "No\n";
        }
    }
}