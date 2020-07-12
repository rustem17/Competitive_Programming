#include <bits/stdc++.h>

#define ll long long
#define pb push_back

int main () {

    int t;
    while (t--) {
        int n;
        cin >> n;


        vector <int> a (n);
        for (int i = 0; i < n; ++i) cin >> a[i];

        int r = [&]() -> int {
            int l = 0, h = n;
            while (l < h && a[l] == l) l++;
            while (l < h && a[h - 1] == h - 1) h--;

            if (l == h) return 0;

            bool tt = 0;

            for (int i = l, i < h; ++i) if (a[i] == i) tt = 1;

            if (!tt) return 1;

            return 2;
        }();

        cout << r << "\n";
    }
    return 0;
}