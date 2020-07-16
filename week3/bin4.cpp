#include <bits/stdc++.h>

using namespace std;

bool good (string a, string b, int m, vector <int> & t) {

    for (int i = 0; i < m; ++i) {
        a[t[i] - 1] = '.';
    }

    for (int i = 0, j = 0; j < a.size(); ++j) {
        
        if (a[j] == b[i]) i++;
    
        if (i == b.size()) return 1;
    }

    return 0;
}

int main () {

    string a, b;
    cin >> a >> b;

    vector <int> t (a.size());

    for (int i = 0; i < a.size(); ++i) cin >> t[i];

    int l = 0;
    int r = a.size();

    while (l + 1 < r) {

        int m = (l + r) / 2;

        if (good(a, b, m, t)) l = m;
        else r = m;
    }

    cout << r << "\n";
}