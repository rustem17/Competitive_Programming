#include <bits/stdc++.h>

using namespace std;

int cc (const string & s, char a) {

    if (s.size() == 1) return s[0] != a;

    int m = s.size() / 2;

    int c = cc(string(s.begin(), s.begin() + m), a + 1);

    c += s.size() / 2 - count(s.begin() + m, s.end(), a);
    int c1 = cc(string(s.begin() + m, s.end()), a + 1);
    c1 += s.size() / 2 - count(s.begin(), s.begin() + m, a);

    return min (c, c1);
}

int main () {

    int t;
    cin >> t;

    while (t--) {

        int n;
        string s;

        cin >>  n >> s;

        cout << cc(s, 'a') << "\n";
    }
}