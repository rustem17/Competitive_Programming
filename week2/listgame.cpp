#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define pb push_back

int main () {

    int t;
    cin >> t;

    int c = 0;

    int tt = 2;

    while (tt * tt <= t) {
        if (t % tt == 0) {
            t /= tt;
            c++;
        } else {
            tt++;
        }
    }

    cout << c + 1 << "\n";
}