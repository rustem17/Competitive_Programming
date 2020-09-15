#include <bits/stdc++.h>

using namespace std;

int main () {

    int t;
    cin >> t;

    int v[2][1000];

    while (t--) {

        int n;
        cin >> n;

        vector <int> a (n + 1);
        for (int i = 1; i <= n; ++i) cin >> a[i];
    
        for (int i = 1; i <= n; ++i) {

            if (!v[0][a[i]]) v[0][a[i]] = 1;
            else v[1][a[i]] = 1;
        }

        int c1 = 0, c2 = 0;
    
        while (v[0][c1]) c1++;
        while (v[0][c2]) c2++;

        cout << c1 + c2 << "\n";
    }
}