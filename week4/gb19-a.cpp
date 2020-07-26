#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define pb push_back

int main () {


    int t;
    cin >> t;

    while (t--) {

        int n, k1, k2;
        cin >> n >> k1 >> k2;

        int mx1 = 0;

        for (int i = 0; i < k1; ++i) {
            int kk;
            cin >> kk;
            mx1 = max(kk, mx1);
        }

        int mx2 = 0;
        for (int i = 0; i < k2; ++i) {
            int kk;
            cin >> kk;
            mx2 = max(kk, mx2);

        }

        cout << ((mx1 > mx2) ? "YES\n" : "NO\n");
    }
}