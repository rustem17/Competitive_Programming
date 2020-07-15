#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define pb push_back

int main () {

    int n = 1e9 + 7;
    int a[n];

    int a, b, c, d;
    cin >> a >> b >> c >> d;

    for (int i = a; i <= b; ++i) {
        aa[i + b]++;
        aa[i + c + 1]--;
    }

    for (int i = 1; i < n; ++i) aa[i] += aa[i - 1];

    for (int i = 1; i < n; ++i) aa[i] += aa[i - 1];

    ll an = 0;

    for (int i = c; i <= d; ++i) an += aa[n - 1] - aa[i];

    cout << an << "\n";
}