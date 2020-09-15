#include <bits/stdc++.h>

using namespace std;

#define pb push_back

int main () {

    int n;
    cin >> n;

    vector <int> a (n), b(n), c;

    for (int i = 0; i < n; ++i) cin >> a[i];
    
    for (int i = 0; i < n; ++i) cin >> b[i];
    
    for (int i = 0; i < n; ++i) if (!b[i]) c.pb(a[i]);

    sort(c.rbegin(), c.rend());

    int j = 0;
    for (int i = 0; i < n; ++i) {

        if (b[i]) cout << a[i] << " ";
        else cout << c[j++] << " ";
    }

    cout << "\n";
}