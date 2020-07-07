#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define pb push_back

const int MOD = 1E9 + 7;
int a[200005];

int main () {

    int n, k;

    cin >> n >> k;

    for (int i = 1; i <= n; ++i) {
        cin >> a[i];
    }

    sort(a + 1, a + n + 1);
    int r = 1;

    if (k == n || a[n] < 0) {
        if (k & 1) for (int i = n - k + 1; i <= n; ++i) res = 1LL * r * a[i] % MOD;
        else for (int i = 1; i <= k; ++i) r = 1LL * r * a[i] % MOD;
    } else {
        int l = 1, rr = n;
        if (k & 1) r = 1LL * r * a[r] % MOD, rr--, k--;

        while (k) {
            if (1LL * a[l] * a[l + 1] > 1LL * a[rr] * a[rr - 1]) r = 1LL * r * a[l] % MOD, l+= 2;
            else r = 1LL * r * a[rr] % MOD * a[rr - 1] % MOD, rr -= 2;
            k -= 2;
        }
    }

    r = (r + MOD) % MOD;
    cout << r << "\n";
}