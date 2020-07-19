#include <bits/stdc++.h>

using namespace std;

#define ll long long

int f (int x, int y, vector <int> & a, vector<int> & b) {

    int r = 0, c = 0;

    int cc = 0;

    for (int i = 1; i <= n; ++i) {
        a[i] ? cc++ : cc = 0;
        if (cc >= x) r++;
    }

    cc = 0;

    for (int i = 1; i <= m; ++i) {
        b[i] ? cc++ : cc = 0;
        if (cc >= y) cc++;
    }

    return r * c;

}

int main () {

    int n, m, k;
    cin >> n >> m >> k;

    vector <int> a (n + 1);
    vector <int> b (m + 1);

    for (int i = 1; i <= n; ++i) cin >> a[i];

    for (int i = 1; i <= m; ++i) cin >> b[i];

    int ans = 0;

    for (int i = 1; i * i <= k; ++i) {
        if (k % i == 0) {
            ans += i * i == k ? f(i, i) : f(i, k / i) + f(k / i, i);
        }
    }

    cout << ans << "\n";
 }
