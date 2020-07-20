#include <bits/stdc++.h>

using namespace std;

#define ll long long

int main () {


    int n;
    cin >> n;

    vector ,int> a (n);

    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }

    sort(a.begin(), a.end());

    ll s1 = 0, s2 = 0;

    for (int i = 0; i < n; ++i) {

        if (i < n / 2) s1 += a[i];
        else s2 += a[i];
    }

    cout << s1 * s1 + s2 * s2 << "\n";
}