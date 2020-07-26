#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define pb push_back

int main () {


    int t;
    cin >> t;

    while (t--) {

        int n;
        cin >> n;

        vector <int> a(n);

        for (int i = 0; i < n; ++i) cin >> a[i];

        bool j = 1;
        for (int i = 0; i + 1 < n; ++i) {

            if (abs(a[i] - a[i + 1]) >= 2) {

                cout << "YES\n" << i + 1 << " " << i + 2 << "\n";
                i = n;
                j = 0;
            }
        }

        if (j) cout << "NO\n";
    }
}