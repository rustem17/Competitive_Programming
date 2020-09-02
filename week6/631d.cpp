#include <bits/stdc++.h>

using namespace std;

int main () {

    int tt;
    cin >> tt;

    while (tt--) {

        int d, m;

        cin >> d >> m;

        long long a = 1;
        for (int i = 0; i < 30; ++i) {
            if (d < (1 << i)) break;
            a = a * (min((1 << (i + 1)) -1, d) - (1 << i) + 2) % m;
        }

        --a;
        if (a < 0) a += m;
        cout << a << "\n";
    }
}