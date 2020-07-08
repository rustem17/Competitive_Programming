#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define pb push_back
#define is insert
#define mp make_pair

//https://open.kattis.com/problems/shortestpath1

struct node {
    vector <pair< ll, ll > > nn;
    ll d;
};

int main () {


    int n, m, q, s;

    while (cin >> n && cin >> m && cin >> q && cin >> s) {
        if (n == 0 && m == 0 && q == 0 && s == 0) break;

        node t;
        t.d = (ll) 2 << 55;
        vector <node> nodes(n + 1, t);

        for (int i = 0; i < m; ++i) {
            int m1, m2, w;
            cin >> m1 >> m2 >> w;
            nodes[m1].nn.pb(mp(m2, w)); 
        }

        queue <ll> nt;
        nt.push(s);
        nodes[s].d = 0;

        while (!nt.empty()) {
            ll c = nt.front();

            nt.pop();

            for (auto i : nodes[c].nn) {
                ll ntn = i.first;
                ll ntw = i.second;

                if (nodes[c].d + ntw < nodes[ntn].d) {
                    nodes[ntn].d = nodes[c].d + ntw;
                    nt.push(ntn);
                }
            }
        }

        for (int i = 0; i < q; ++i) {
            ll qu;
            cin >> qu;
            ll v = nodes[qu].d;

            if (v >= ((ll)2 << 55) / 2) cout << "Impossible\n";
            else cout << v << "\n";
        }
    }
    
}