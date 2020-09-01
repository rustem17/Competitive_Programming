#include <bits/stdc++.h>

using namespace std;

int main () {

    int n;
    cin >> n;

    vector <long long> p (n + 1, 0);

    for (int i = 0; i < n; ++i) {

        int x;
        cin >> x;

        p[i + 1] = p[i] + x;

    }

    int b = 0, e = 0;

    long long ans = 0;
    set <long long> s = {0};

    while (b < n) {

        while (e < n && !s.count(p[e + 1])) {

            ++e;
            s.insert(p[e]);
        }

        ans += e - b;
        s.erase(p[b]);
        ++b;
    }

    cout << ans << "\n";
}