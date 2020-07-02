#include <bits/stdc++.h>

using namespace std;

#define ll long long

#define pb push_back

int main () {

    int t;
    cin >> t;
    
    while (t--) {
        int n, k;
        cin >> n >> k;

        if (k % n == 0) {
            cout << "0\n";
        } else {
            cout << "2\n";
        }

        int a[n + 2][n + 2];

        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < n; ++j) {
                a[i][j] = 0;
            }
            a[i][n] = 0;
        }

        int i = 0, j = 0;
        while (k > 0) {
            k--;
            a[i][j] = 1;

            i++; j++; j %= n;

            if (i == n) {
                i = 0; j++; j %= n;
            }
        }

        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < n; ++j) {
                cout << a[i][j] << " ";
            }
            cout << "\n";
        }
    
    }
}