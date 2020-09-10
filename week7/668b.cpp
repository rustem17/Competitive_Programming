#include <bits/stdc++.h>

using namespace std;

int main () {

    int t;
    cin >> t;

    while (t--) {

        int n;
        cin >> n;

        long long c = 0;
        for (int i = 0; i < n; ++i) {
            long long x;
            cin >> x;

            c = max(0LL, c + x);


        }

        cout << c << "\n";
    }
}