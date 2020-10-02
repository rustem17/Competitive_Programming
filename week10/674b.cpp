#include <bits/stdc++.h>

using namespace std;

int main () {

    int t;
    cin >> t;


    while (t--) {

        int n, m;
        cin >> n >> m;

        bool r = 0;

        for (int i = 0; i < n; ++i) {

            vector <int > a (4);
            for (int i = 0; i < 4; ++i) cin >> a[i];

            if (a[1] == a[2]) r = 1;

        }
        cout << (r && m & 1 * 1 ? "YES\n" : "NO\n");
    }
}