#include <bits/stdc++.h>

using namespace std;

int main () {


    int t;
    cin >> t;

    while (t--) {

        int k, n;
        cin >> n >> k;


        if (n < k) cout << k - n << "\n";
        else if (n % 2 == k % 2) cout << "0\n";
        else cout << "1\n";
    }
}