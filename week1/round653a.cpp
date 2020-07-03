#include <bits/stdc++.h>

using namespace std;

#define ll long long

#define pb push_back

int main () {

    int t;
    cin >> t;

    while (t--) {
        int x, y, n;
        cin >> x >> y >> n;

        if ((n % x) < y) {
            cout << n - (n % x) - x + y << "\n";
        } else {
            cout << n - (n % x) + y << "\n";
        }
    }
}