#include <bits/stdc++.h>

using namespace std;

#define ll long long

#define pb push_back

int main () {

    int t;
    cin >> t;

    while (t--) {
        string n;

        cin >> n;

        int m1 = 0, g1 = 0, i1 = 0;

        int i;

        for (i = 0; i < n.size(); ++i) {

            if (n[i] == '$') {
                m1++;
            } else if (n[i] == '|') {
                i1++;
            } else if (n[i] == '*') {
                g1++;
            } else if (n[i] == 'b' && m1 > 0) {
                m1--;
            } else if (n[i] == 'j' && g1 > 0) {
                g1--;
            } else if (n[i] == 't' && i1 > 0) {
                i1--;
            } else if (n[i] == '.') {
                continue;
            } else {
                cout << "NO\n";
                i = n.size();
            }
        }

        if (i == n.size()) {
            if (m1 == 0 && g1 == 0 && i1 == 0) cout << "YES\n";
            else cout << "NO\n";
        }
    }
}