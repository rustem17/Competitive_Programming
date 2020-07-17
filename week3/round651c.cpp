#include <bits/stdc++.h>

using namespace std;

#define pb push_back

bool ifprime (int n) {

    for (int i = 2; i * i <= n; ++i) if (n % i == 0) return 0;
    return 1;
}

int main () {

    int t;
    cin >> t;

    while (t--) {

        int n;
        cin >> n;

        bool l = (n == 1);

        if (n > 2 && n % 2 == 0) {
            if (!(n & (n - 1))) l = 1;
            else if (n % 4 != 0 && ifprime(n / 2)) l = 1;
        }

        if (l) cout << "FastestFinger\n";
        else cout << "Ashishgup\n"; 
    }
}