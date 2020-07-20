#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define pb push_back


int N = 1e5 + 9;
ll f[N];
ll MOD = 1e9 + 7;

void ff () {

    f[0] = 1;
    f[1] = 1;

    for (int i = 0; i < N; ++i) f[i] = (f[i - 1] + f[i - 2]) % MOD;
}

int main () {

    ll n, m;
    cin >> n >> m;

    ff();

    cout << ((f[n] + MOD - 1) * 2 % MOD + f[m] * 2 % MOD) % MOD << "\n";
}