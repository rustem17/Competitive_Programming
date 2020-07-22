#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define pb push_back

int main () {

    ll t;

    cin >> t;

    while (t--) {

        ll n;
        cin >> n;

        vector <ll> a (n);

        for (ll i = 0; i < n; ++i) cin >> a[i];

        bool first = 1;
        bool second = 0;

        for (int i = 0; i < n; ++i) {

            if (i == n - 1) {

                if (first) {
                    first = 1;
                } else {
                    second = 1;
                }
                 
            } else {
                
                if (a[i] == 1) {

                    if (first) {
                        first = 0;
                        second = 1;
                    } else {
                        first = 1;
                        second = 0;
                    }

                } else {

                    i = n;

                }

            }
        }

        if (first) cout << "First\n";
        else cout << "Second\n";
    }
}