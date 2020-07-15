#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define pb push_back

int main () {


    auto solve = [] (const string &s) {

        int n = s.size();
        int all = count(s.begin(), s.end(), '1');
        int a = all;

        vector <int> r (n);

        int p = 0;

        for (int i = 0; i < n; ++i) {
            int cc = (s[i] == '1');
            p += cc;

            r[i] = 1 - cc;
            if (i > 0) r[i] += min(r[i - 1], p - cc);
            a = min(a, r[i] + all - p);
        }

        return a;
    };


    int t;
    cin >> t;

    while (t--) {

        int n, k;
        cin >> n >> k;

        string s;
        cin >> s;

        vector <string> v(k);

        int c = count(s.begin(), s.end(), '1');
        for (int i = 0; i < n; ++i) {
            v[i % k] += s[i];
        }

        int a = 1e9 + 1;

        for (auto &i : v) a = min(a, solve(i) + (c - count(i.begin(), i.end(), '1')));
        cout << a << "\n";
    }
}