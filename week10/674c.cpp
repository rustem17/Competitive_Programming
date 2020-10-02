#include <bits/stdc++.h>

using namespace std;

int main () {

    int t;
    cin >> t;


    while (t--) {

        double n;
        cin >> n;

        double r = ceil(sqrt(n));

        cout << (r - 1) + ceil(n / r) - 1 << "\n";
    }
}