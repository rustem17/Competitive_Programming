#include <bits/stdc++.h>

using namespace std;

const int N = 1e9 + 7;

int n;
int a[N];
int dp[N][N];

int c (int p, int x) {

    int &r = dp[p][x];
    if (r != -1) return r;

    if (p == n) return r = 0;

    r = 1 + c(p + 1, n);

    r = min(r, c(p + 1, p) + a[p]);

    if (x != n) {

        if (a[x] >= a[p]) r = min(r, c(p + 1, p));
        else {
            r = min(r, c(p + 1, p) + a[p] - a[x]);
            r = min(r, 1 + c(p + 1, x));
        }
    }

    return r;
}

int main () {

    cin >> n;

    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }

    memset(dp, -1, sizeof(dp));
    cout << c(0, n) << "\n";s
}