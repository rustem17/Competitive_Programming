#include <bits/stdc++.h>

using namespace std;

#define pb push_back

int main () {

    int t;
    cin >> t;

    while (t--) {

        int n, x;
        cin >> n >> x;

        vector <int> a (n);

        for (int i = 0; i < x; ++i) cin >> a[i];

        sort(a.begin(), a.end());

        int aa = 0;

        for (int i = n - 1, j = n; i >= 0; --i) {

            if ((j - i) * a[i] >= x) {
                j = i;
                aa++;
            }
        }

        cout << aa << "\n";
    }
}