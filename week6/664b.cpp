#include <bits/stdc++.h>

using namespace std;

int main () {


    int n, m, x, y;

    cin >> n >> m >> x >> y;

    for (int i = 1; i <= n; ++i) {

        if (i & 1) {

            for (int j = 1; j <= m; ++j) {
                
                cout << (i + x - 2) % n + 1 << " " << (j + y - 2) % m + 1 << "\n";
            }
        } else {

            for (int j = m; j >= 1; --j) {
                cout << (i + x - 2) % n + 1 << " " << (j + y - 2) % m + 1 << "\n";
            }
        }
    }
}