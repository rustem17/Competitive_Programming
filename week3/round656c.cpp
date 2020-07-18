#include <bits/stdc++.h>

using namespace std;

int main () {

    int t;
    cin >> t;

    while (t--) {

        int n;
        cin >> n;

        vector <int> a (n);

        for (int i = 0; i < n; ++i) cin >> a[i];

        int p = n - 1;

        while (p > 0 && a[p - 1] >= a[p]) p--;
        while (p > 0 && a[p - 1] <= a[p]) p--;

        cout << p << "\n";
    }
}