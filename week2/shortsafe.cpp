#include <bits/stdc++.h>

using namespace std;

#define pb push_back
#define vvi map <int, vector <pair<int, int> > >
#define vvb map <int, vector <pair<int, bool> > >
#define mp make_pair

#define ll long long

void dfs (vvb v, vvi a, int ve, int tar, int k, int cur_k) {

    //v[][] = 1;

    for (int i = 0; i < a[ve].size(); ++i) {
        if (a[ve][i].first == tar) {
            
        }
        
        if (!v[ve][i].second && cur_k <= k) {
            dfs(v, a, a[ve][i], tar, k);
        }
    }
}

int main () {

    int t;
    cin >> t;

    vvi a1;
    vvb v1;

    while (t--) {

        int v;
        cin >> v;

        for (int i = 0; i < v; ++i) {
            int x;
            cin >> x;

            vector <pair<int, int > > ttt;
            vector <pair<int, bool > > ttt;

            for (int ii = 0; ii < x; ++ii) {
                int vv, w;
                cin >> vv >> w;

                ttt.pb(mp(vv, w));
                ttt1.pb(mp(vv, 0));
            }

            a1[x] = ttt;
            v1[x] = ttt1;
        }

        int q;
        cin >> q;

        for (int i = 0; i < q; ++i) {
            int s, tt, k;
            
            cin >> s >> tt >> k;

            // start searching
        }
    }

}