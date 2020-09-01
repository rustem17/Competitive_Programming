#include <bits/stdc++.h>

using namespace std;

vector <int> maxd;

void erat (int l) {

    maxd.assign(l + 1, 0);
    maxd[0] = l + 10;
    maxd[1] = 1;

    for (int i = 2; i <= l; ++i) {

        if (maxd[i]) continue;

        for (int j = i; j <= l; j += i) {

            if (maxd[j]) continue;
            maxd[j] = j / i;
        }
    }
}

int main () {

    int n;
    cin >> n;

    erat(n);

    sort(maxd.begin(), maxd.end());

    for (int i = 1; i < n; ++i) cout << maxd[i] << " ";
}