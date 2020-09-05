#include <bits/stdc++.h>

using namespace std;

const int N = 512000;
int n, m, a[N], l[N], r[N];

int main() {

    cin >> n >> m;

    for (int i = 1; i < N; ++i) {
        l[i] = i - 1;
        r[i] = i + 1;
    }

    r[0] = 1;

    for (int i = 0; i < m; ++i) {

        int le, re, w;
        cin >> le >> re >> w;
    
        int li = w;
        int ri = w;

        for (int j = w; j >= le;) {

            j = l[j];

            if (j >= le) a[j] = w;
            else li = j;
        }

        for (int j = w; j <= re;) {
            j = r[j];
            if (j <= re) a[j] = w;
            ri = j;
        }

        l[w] = li;
        r[w] = ri;
        r[li] = w;
        l[ri] = w;
    }

    for (int i = 1; i <= n; ++i) cout << a[i] << " ";
    cout << "\n";

    return 0;
}