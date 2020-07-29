#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define pb push_back
#define mp make_pair

int main () {

    int t;
    cin >> t;

    while (t--) {

        int n, k, z;
        cin >> n >> k >> z;

        vector <int> a (n);

        for (int i = 0; i < n; ++i) cin >> a[i];

        ll sum = a[0];

        int j = 1;
        for (; j <= k; ++j) {
            sum += a[j];
        }

        j--;

        vector <ll> ps (n - 1);

        ll mx = 0;

        for (int i = 0; i < k; ++i) {

            ps[i] = a[i] + a[i + 1];
        
            mx = max(mx, ps[i]);
        }

        for (int i = 0; i < z; ++i) {
            if (a[j] + a[j - 1] < mx) {
                sum += mx - a[j] - a[j - 1];
                j -= 2;
            }
        }

        cout << sum << "\n";
    }
}