#include <bits/stdc++.h>

using namespace std;

#define ll long long

#define pb push_back

int main () {

    int n, p;
    cin >> n >> p;
    
    vector <int> b (262144);
    vector <int> bb (131072);

    vector <int> a (n);
    int mx = 0;
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
        mx = max(a[i], mx);
    }

    for (int i = 0; i < n; ++i) {
        b[max(0, a[i] - mx + n)]++;
    }

    for (int i = 1; i < 262144; ++i) {
        b[i] += b[i - 1];
    }

    int rr = 0;

    for (int i = 0; i <= n; ++i) {
        for (int j = 0; j < n; ++j) {
            if ((b[i + j] - j) <= 0) break;
            if ((b[i + j] - j) % p == 0) break;

            if (j == n - 1) {
                bb[rr] = i + mx - n;
                rr++;
            }
        }
    }

    cout << rr << "\n";

    for (int i = 0; i < rr; ++i) {
        cout << bb[i] << " ";
    }
    cout << "\n";    
}