#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define pb push_back

int N = 1e5 + 5;
int p[2 * N], a[N];
bool v[N];


int main () {


    int t;
    cin >> t;

    while (t--) {

        int n;
        cin >> n;

        int mx = 0;

        vector <int> ind;
        for (int i = 1; i <= 2 * n; ++i) {
            cin >> p[i];

            if (p[i] > mx) {
                mx = p[i];
                ind.pb(i);
            }
        }

        ind.pb(2 * n + 1);
        vector <int> le;

        for (int i = 1; i < (int) ind.size(); ++i) {

            le.pb(ind[i] - ind[i - 1]);
        }

        sort(le.begin(), le.end());

        fill(v, v + n + 1, 0);

        v[0] = 1;

        int m = le.size();

        for (int k = 0; k < m; ++k) {


            int r = k;

            while (r < m && le[r] == le[k]) r++;

            fill(a, a + n + 1, 0);

            for (int i = le[k]; i <= n; ++i) {

                if (!v[i] && v[i - le[k]] && a[i - le[k]] < r - k) {
                    a[i] = a[i - le[k]] + 1;
                    v[i] = 1;
                }
            }

            k = r - 1;
        }

        if (v[i]) cout << "YES\n";
        else cout << "NO\n";


    }
}