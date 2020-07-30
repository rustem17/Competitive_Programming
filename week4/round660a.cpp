#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define pb push_back
#define mp make_pair

int MOD = 1e9 + 7;

int main () {

    int t;
    cin >> t;

    while (t--) {

        ll n;
        cin >> n;

        if (n % 2 == 0) {
            n -= 6 + 10 + 14;
            if (n <= 0) cout << "NO\n"; 
            else {
                cout << "YES\n";
                if (n == 6) cout << "6 10 15 " << n - 1 << "\n";
                else if (n == 14) cout << "6 10 15 " << n - 1 << "\n";
                else if (n == 10) cout << "6 10 15 " << n - 1 << "\n";
                else cout << "6 10 14 " << n << "\n";
            }
        } else {
            n -= 1;
            n -= 6 + 10 + 14;
            if (n < 0) {
                cout << "NO\n";
            } else {
                n += 1;
                cout << "YES\n";
                if (n == 6) cout << "6 10 15 " << n - 1 << "\n";
                else if (n == 14) cout << "6 10 15 " << n - 1 << "\n";
                else if (n == 10) cout << "6 10 15 " << n - 1 << "\n";
                else cout << "6 10 14 " << n << "\n";
            }
        }
    }

}