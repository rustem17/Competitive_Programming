#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define pb push_back

int main () {

    int t;
    while (t--) {

        int n, x;
        cin >> n >> x;

        x--;

        vector <vector <int > > e(n);

        for (int i = 0; i < n - 1; ++i) {
            int a, b;
            cin >> a >> b;

            a--;
            b--;

            e[a].pb(b);
            e[b].pb(a);
        }

        string nn[2] = {"Ayush", "Ashish"};

        if (e[x].size() <= 1) cout << nn[0] << "\n";
        else cout << nn[n % 2] << "\n";
    }
}