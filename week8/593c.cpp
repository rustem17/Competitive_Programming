#include <bits/stdc++.h>
using namespace std;

int main () {

    int n, k;
    cin >> n >> k;

    string s;
    cin >> s;

    set <char> st;

    for (int i = 0; i < k; ++i) {
        char c;
        cin >> c;

        st.insert(c);
    }

    long long ans = 0;

    for (int i = 0; i < n; ++i) {

        int j = i;

        while (j < n && st.count(s[j])) ++j;
        int ll = j - i;
        ans += ll * 1ll * (ll + 1) / 2;
        i = j;
    }

    cout << ans << "\n";
}