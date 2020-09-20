#include <bits/stdc++.h>

using namespace std;

int main () {

    int t;
    cin >> t;

    while (t--) {

        int n, x;
        cin >> n >> x;

        int cc = 0, sum = 0;

        for (int i = 0; i < n; ++i) {

            int v;
            cin >> v;
            cc += (v == x);
            sum += v;
        }

        if (cc == n) cout << "0\n";
        else if (cc > 0) cout << "1\n";
        else if (sum == n * x) cout << "1\n";
        else cout << "2\n";
    }
}