#include <bits/stdc++.h>

using namespace std;

const int N = 1e9 + 7;
int c[N];
vector <int> a;
int n;

bool check (int x) {

    for (int i = 1; i <= n; ++i) c[i] = 0;
    for (int i = 0; i < n; ++i) c[a[i]]++;

    set <pair<int, int >, greater<pair <int, int > > > ss;

    for (int i = 1; i <= n; ++i) {
        if (c[i] > 0) ss.insert({c[i], i});
    }

    vector <int> b;

    for (int i = 0; i < n; ++i) {

        if (i >= x && c[b[i - x]]) ss.insert({c[b[i - x]], b[i - x]});
    
        if (ss.empty()) return 0;
        b.push_back(ss.begin() -> second);
        ss.erase(ss.begin());
        c[b.back()]--;
    }

    return 1;
}

int main () {


    int ttt;
    cin >> ttt;

    while (ttt--) {

        cin >> n;
        a.resize(n);

        for (int i = 0; i < n; ++i) {
            cin >> a[i];
        }

        int l = 0, r = n;

        while (r - l > 1) {

            int m = (r + l) / 2;
            if (check(m)) l = m;
            else r = m;

            cout << l - 1 << "\n";
        }
    }
}