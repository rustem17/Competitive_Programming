#include <bits/stdc++.h>

using namespace std;
#define ll long long
#define pb push_back

int find_lower (vector <int> &a, int x) {

    int l = -1;
    int r = (int) a.size();

    while (r > l + 1) {
        int m = (l + r) / 2;
        if (a[m] <= x) {
            l = m;
        } else {
            r = m;
        }
    }    
    return l;
}

int find_upper (vector <int> &a, int x) {

    int l = -1;
    int r = (int) a.size();

    while (r > l + 1) {
        int m = (l + r) / 2;
        if (a[m] < x) {
            l = m;
        } else {
            r = m;
        }
    }    
    return l;
}

bool bin_s (vector <int> &a, int x) {
    int n = find_lower(a, x);
    return n >= 0 && a[n] == x;
}


int main () {

    ios::sync_with_stdio(false);

    int n, k;
    cin >> n >> k;

    vector <int> a(n);
    for (int i = 0; i < n; ++i) cin >> a[i];

    while (k--) {
        int x;
        cin >> x;
        cout << bin_s(a, x) + 1 << "\n";
    }
}