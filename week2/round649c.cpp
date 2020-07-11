#include <bits/stdc++.h>
    
using namespace std;
    
#define ll long long
#define pb push_back
#define mp make_pair
    
int main () {
    
    int n;
    cin >> n;

    vector <int> a (n);

    for (int i = 0 ; i < n; ++i) {
        cin >> a[i];
    }

    vector <int> b(n, -1);
    vector <bool> c (n);

    for (int i = 1; i < n; ++i) {
        if (a[i] != a[i - 1]) {
            b[i] = a[i - 1];
            c[b[i]] = 1;
        }
    }

    c[a[n - 1]] = 1;
    int m = 0;

    for (int i = 1; i <= n; ++i) {
        while (c[m]) {
            m++;
        }
        if (b[i] == -1) {
            b[i] = m;
            c[m] = 1;
        }
        cout << b[i] << " ";
    }
}