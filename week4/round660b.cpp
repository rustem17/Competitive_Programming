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

        string s;

        for (int i = 0; i < n; ++i) {
            s += '9';
        }

        int tt = (n % 4 == 0) ? n / 4 : n / 4 + 1;
        for (int i = n - 1; i >= 0 && tt; --i, tt--) {
            s[i] = '8';
        }

        cout << s << "\n";
    }
}