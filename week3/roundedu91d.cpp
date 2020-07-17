#include <bits/stdc++.h>

using namespace std;

#define pb push_back
#define ll long long


const int N = int(2e5) + 9;

int n, m, a[N], b[N];
ll x, k, y;

bool u (int l, int r, ll & r) {

    if (l > r) return 1;

    bool c = 0;

    int mx = 0;

    for (int i = l; i < r + 1; ++i)
        mx = max(a[i], mx);

    int len = r - l + 1;

    if (l - 1 >= 0 && a[l - 1] > mx) c = 1;
    if (r + 1 < n && a[r + 1] > mx) c = 1;
    if (len < k && !c) return 0;
    

    int nn = len % k;
    r += nn * y;
    len -= nn;

    if (y * k >= x) r += len / k * x;
    else if (c) r += len * y;
    else r += (len - k) * y + x;

    return 1;
}

int main () {

    cin >> n >> m >> x >> k >> y;

    for (int i = 0; i < n; ++i) cin >> a[i];
    for (int i = 0; i < m; ++i) cin >> b[i];

    ll r = 0;

    int one = -1, pa = 0, pb = 0;

    while (pb < m) {

        while (pa < n && a[pa] != b[pb]) ++pa;

        if (pa == n) {
            puts("-1");
            return 0;
        }

        if (!u(one + 1, pa - 1, r)) {
            puts("-1");
            return 0;
        }

        one = pa;
        ++pb;
    }

    if (!u(one + 1, n - 1, r)) {
        puts("-1");
        return 0;
    }

    cout << r << "\n";
}