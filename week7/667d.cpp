#include <bits/stdc++.h>

using namespace std;

int sum (long long n) {

    int r = 0;
    while (n > 0) {
        r += n % 10;
        n /= 10;
    }

    return r;
}

int main () {

    int t;
    cin >> t;

    while (t--) {

        long long n;
        int s;
        cin >> n >> s;

        long long ans = 0;

        if (sum(n) <= s) {
            cout << 0 << "\n";
            continue;
        }

        long long pw = 1;

        for (int i = 0; i < 18; ++i) {

            int d = (n / pw) % 10;
            long long dd = pw * ((10 - d) % 10);
            n += dd;
            ans += dd;

            if (sum(n) <= s) break;

            pw *= 10;
        }

        cout << ans << "\n";
    }
}