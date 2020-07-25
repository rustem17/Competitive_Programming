#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define pb push_back

int MOD = 1e9 + 7;

int main () {

    int t;

    cin >> t;

    while (t--) {

        int n;
        cin >> n;
        string s (300, 'a');
        cout << s << "\n";

        for (int i = 0; i < n; ++i) {

            int u;
            cin >> u;

            s[u] = s[u] == 'a' ? 'b' : 'a';
            cout << s << "\n";
        }
    }
}