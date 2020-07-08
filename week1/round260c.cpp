#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define pb push_back
#define mp make_pair

const int N = 1000050;

int cnt[N];
ll f[N];

int main () {

    int n;
    cin >> n;

    memset(cnt, 0, sizeof(cnt)); // fill with zeros

    for (int i = 0; i < n; ++i) {
        int f;
        cin >> f;
        cnt[f]++;
    }

    f[0] = 0;

    for (int i = 1; i < N; ++i) {
        f[i] = (ll) i * cnt[i];
        if (i - 2 >= 0) {
            f[i] += f[i - 2];
        }

        f[i] = max(f[i], f[i - 1]);
    }

    cout << f[N - 1] << "\n";
}