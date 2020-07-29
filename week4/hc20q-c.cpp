#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define pb push_back

int main () {

    freopen("alchemy_input.txt", "r", stdin);
    freopen("alchemy_output.txt", "w", stdout);

    int t;
    cin >> t;

    int ii = 1;
    while (t--) {

        int n;
        cin >> n;

        vector <pair< int, int > > a (n);
        for (int i = 0; i < n; ++i) cin >> a[i].first >> a[i].second;

        sort(a.begin(), a.end());
        map <int, int> d;
        ll ans = 0;
        for (auto p : a) {

            int pp = p.first;
            int h = p.second;

            d[pp + h] = max(d[pp + h], d[pp] + h);
            d[pp] = max(d[pp], d[pp - h] + 1);
            ans = max({ans, d[pp], d[pp + h]});
        }

        cout << "Case #" << ii << ": ";
        cout << ans << "\n";
        ii++;
    }
}