#include <bits/stdc++.h>

using namespace std;

#define ll long long

#define pb push_back

int main () {

    int t;
    cin >> t;
    while (t--) {

        ll n;
        cin >> n;

        int c2 = 0;
        int c3 = 0;

        bool ind = 0;

        while (!ind) {

            ind = 1;

            if (n % 2 == 0) {
                c2++;
                n /= 2;
                ind = 0;
            } else if (n % 3 == 0) {
                c3++;
                n /= 3;
                ind = 0;
            }
        }

        if (n == 1) {    
            if (c2 > c3) cout << "-1\n";
            else cout << c3 - c2 + c3 << "\n";
        } else {
            cout << "-1\n";
        }
    }
}