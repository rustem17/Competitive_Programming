#include <bits/stdc++.h>

using namespace std;

int main () {

    int t;
    cin >> t;

    while (t--) {

        int n, m;

        cin >> n >> m;

        cout << 1440 - n * 60 - m << "\n";
    }
}