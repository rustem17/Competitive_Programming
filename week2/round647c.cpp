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

        if (n == 0) cout << "0\n";
        else {
            ll s = n;
            while (n) {
                n /= 2;
                s += n;
            }

            cout << s << "\n";
        }
    }
}