#include <bits/stdc++.h>

using namespace std;

int main () {

    int t;
    cin >> t;


    while (t--) {

        int n, k;
        cin >> n >> k;

        int f = n - n % k;

        f += min(n % k, k / 2);
        cout << f << "\n";
    }
}