#include <bits/stdc++.h>

using namespace std;

#define pb push_back
#define ll long long

int n;
int MOD = 1e9 + 7;

int as[2000005];
vector <int> e[2000005];

int d[2][2000005];
int q[2000005];

void bfs (int* di, int s) {

    fill(di, di + n, MOD);

    int qh = 0;
    int qt = 0;

    q[qh++] = s;
    di[s] = 0;

    while (qt < qh) {

        int x = q[qt++];

        for (int y : e[x]) {

            if (di[y] == MOD) {
                di[y] = di[x] + 1;
                q[qh++] = y;
            }
        }
    }
}

int main () {

    int m, k;
    cin >> n >> m >> k;

    for (int i = 0; i < k; ++i) {

        cin >> as[i];
        as[i]--;
    } 

    sort(as, as + k);

    for (int i = 0; i < m; ++i) {

        int x, y;

        cin >> x >> y;

        x--;
        y--;

        e[x].pb(y);
        e[y].pb(x);
    } 

    bfs(d[0], 0);
    bfs(d[1], n - 1);

    vector <pair <int, int > > data;

    for (int i = 0; i < k; ++i) {

        data.emplace_back(d[0][as[i]] - d[1][as[i]], as[i]);

    }

    sort(data.begin(), data.end());

    int b = 0;
    int mx = -1 * MOD;

    for (auto i : data) {

        int aa = i.second;

        b = max(b, mx + d[1][aa]);
        mx = max(mx, d[0][aa]);
    }

    cout << min(d[0][n - 1], b + 1) << "\n";
}