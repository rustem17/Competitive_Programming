#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define is insert
#define pb push_back
#define mp make_pair

int main () {

    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n, m;
    cin >> n >> m;
    vector <int> deg(n, 0);

    for (int i = 0; i < m; ++i) {
        int n1, n2;
        cin >> n1 >> n2;
        deg[n1]++;
        deg[n2]++;
    }

    set <pair <int, int > > joined;
    set <pair <int, int > > unjoined;

    vector <int> ones;

    for (int i = 0; i < n; ++i) {
        if (deg[i] == 1) ones.pb(i);
        else unjoined.is(mp(deg[i], i));
    }

    if (unjoined.size() == 0) {
        cout << 0 << "\n";
        cout << 2 << " " << 1 << "\n";
        cout << 0 << " " << 1 << "\n";
        return 0;
    }

    vector <pair <int, int > > edges;

    int satisfied = 0;

    joined.is(*unjoined.begin());
    unjoined.erase(*unjoined.begin());

    while (!unjoined.empty()) {

        int n1 = (*joined.begin()).second;

        pair <int, int> temp = *joined.begin();
        joined.erase(temp);
        temp.first--;
        joined.is(temp);

        if ((*joined.begin()).first == 0) {
            joined.erase((*joined.begin()));
            satisfied++;
        }

        pair <int, int> here = (*unjoined.begin());
        int n2 = here.second;
        unjoined.erase(here);
        here.first--;
        joined.is(here);
        edges.pb(mp(n1, n2));
    }

    for (auto i : ones) {
        edges.pb(mp(i, (*joined.begin()).second));

        pair <int, int> temp = *joined.begin();
        joined.erase(temp);
        temp.first--;
        if (temp.first > 0 || joined.size() == 0) joined.is(temp);

        satisfied++;
    }

    vector <int> newdeg (n, 0);

    for (auto i : edges) {
        newdeg[i.first]++;
        newdeg[i.second]++;
    }

    int changes = 0;
    for (int i = 0; i < n; ++i) {
        if (deg[i] != newdegp[i]) {
            changes++;
        }
    }

    cout << changes << "\n";
    cout << n << " " << n - 1 << "\n";
    for (auto i : edges) {
        cout << i.first << " " << i.second << "\n";
    }
}