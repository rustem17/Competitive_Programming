#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define pb push_back

int main () {

    int t;
    cin >> t;
    while (t--) {

        int n;
        cin >> n;

        ll a = 0;
        for (int i = 1; i <= n / 2; ++i) a += i * 1LL * i;
        cout << a << "\n";
    }
}