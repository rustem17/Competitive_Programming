#include <bits/stdc++.h>

using namespace std;

#define pb push_back
#define ll long long

int e (int c1, char c, int c2) {

    if (c == '|') return c1 | c2;
    else if (c == '&') return c1 & c2;
    else return c1 ^ c2;
}

int main () {

    int t;
    cin >> t;

    while (t--) {

        string s;
        cin >> s;

        char st [1001];

        for (int x = 0; x < 2; ++x) {

            int c = 0;

            for (int i = 0; i < s.size(); ++i) {

                if (s[i] == ')') {
                    c -= 3;
                    st[c - 1] = e(st[c] - '0', st[c + 1], st[c + 2] - '0') + '0';
                } else if (s[i] == 'x') st[c++] = x + '0';
                else if (s[i] == 'X') st[c++] = (1 - x) + '0';
                else st[c++] = s[i];
            }

            res[x] = st[0];
        }

        cout << res[0] != res[1] << "\n";
    }
}