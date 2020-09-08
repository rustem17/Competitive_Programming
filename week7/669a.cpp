#include <bits/stdc++.h>

using namespace std;

int main () {

    int t;
    cin >> t;

    while (t--) {

        int n;
        cin >> n;

        vector <int> a (n), ans;

        int c1 = 0;

        for (int i = 0; i < n; ++i) {
            cin >> a[i];

            if (!a[i]) c1++;
        }

        int c2 = n - c1;

        if (c1 >= n / 2) {
            cout << c1 << "\n";
            for (int i = 0; i < c1; ++i) cout << 0 << " ";
        } else {
            cout << c2 - c2 % 2 << "\n";
            for (int i = 0; i < c2; ++i) cout << 1 << " ";    
        }

        cout << "\n";
    }
}