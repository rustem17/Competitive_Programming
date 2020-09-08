#include <bits/stdc++.h>

using namespace std;

int ask (int i, int j) {

    cout << "? " << i + 1 << " " << j + 1 << "\n";
    int k;
    cin >> k;
    return k;
}

int main () {

    int n;

    cin >> n;

    vector <int> a (n, -1);

    int mx = 0;

    for (int i = 0; i < n; ++i) {

        int a = ask(mx, i);
        int b = ask(i, mx);

        if (a > b) {
            ans[mx] = a;
            mx = i;
        } else {
            ans[i] = b;
        }
    }    

    ans[mx] = n;

    cout << "! ";
    for (int i = 0; i < n; ++i) cout << ans[i] << " ";
    cout << "\n";
}