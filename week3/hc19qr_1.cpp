#include <bits/stdc++.h>

using namespace std;

#define pb push_back
#define ll long long

int main () {

    int t;
    cin >> t;

    while (t--) {

        string s;
        cin >> s;

        int c = 0;

        for (int i = 0; i < s.size(); ++i) {

            c += (s[i] == 'B');
        }

        if (s.size() / 2 <= c && c <= s.size() - 2) cout << "Y\n";
        else cout << "N\n";
    }
}