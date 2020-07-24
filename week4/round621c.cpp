#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define pb push_back

int main () {


    string s;
    cin >> s;

    ll a1[26], a2[26][26];

    for (int i = 0; i < 26; ++i) {
        a1[i] = 0;
        for (int j = 0; j < 26; ++j) {
            a2[i][j] = 0;
        }
    }

    for (int i = 0; i < s.size(); ++i) {

        int t = s[i] - 'a';

        for (int j = 0; j < 26; ++j) {
            a2[j][t] += a1[j];
        }
        a1[t]++;
    }

    ll ans = 0;

    for (int i = 0; i < 26; ++i) ans = max(ans, a1[i]);

    for (int i = 0; i < 26; ++i) {
        for (int j = 0; j < 26; ++j) {
            ans = max(ans, a2[i][j]);
        }
    }

    cout << ans << "\n";
}