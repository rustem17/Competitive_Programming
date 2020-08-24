#include <bits/stdc++.h>

using namespace std;

int main () {


    int t;
    cin >> t;

    while (t--) {

        int m, sum = 0, x, x1, x2, y, y1, y2;

        cin >> x >> x1 >> x2 >> y >> y1 >> y2;

        m = min(x, y2);

        x -= m;
        y2 -= m;

        m = min(x1, y);
        x1 -= m;
        y -= m;

        m = min(x2, y1);
        x2 -= m;
        y1 -= m;
        sum += 2 * m;

        sum -= 2 * min(x1, y2);
        cout << sum << "\n";
    }
}