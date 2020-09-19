#include <bits/stdc++.h>

using namespace std;

int cc (int a, int b, int c) {
    return abs(a - b) + abs(a - c) + abs(b - c);
}

int main () {


    int t;
    cin >> t;

    while (t--) {
        int a, b, c;
        cin >> a >> b >> c;

        int ans = cc(a, b, c);
        for (int j = -1; j <= 1; ++j) {
            for (int jj = -1; jj <= 1; ++jj) {
                for (int jjj = -1; jjj <= 1; ++jjj) {

                    int na = a + j;
                    int nb = b + jj;
                    int nc = c + jjj;
                    ans = min(ans, cc(na, nb, nc));
                }
            }
        }

        cout << ans << "\n";
    }
}