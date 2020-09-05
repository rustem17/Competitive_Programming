#include <bits/stdc++.h>
using namespace std;

#define pb push_back

const int N = 5120000;

int n, q;

void build (vector< pair <int, int > >& tree, vector <int>& a, int node, int l, int r) {

    if (l > r) return ;

    if (r - l < 1) {

        tree[node].first = a[l];
        tree[node].second = a[l];

    } else {

        int m = (r + l) / 2;

        build(tree, a, 2 * node, l, m);
        build(tree, a, 2 * node + 1, m + 1, r);
        tree[node].first = max(tree[2 * node].first, tree[2 * node + 1].first);
        tree[node].second = min(tree[2 * node].second, tree[2 * node + 1].second);

    }
}

int query (vector <pair<int, int> >& tree, int node, int l, int r, int w, int ql, int qr) {
    
    if (ql > r || l > qr) {
        return 0;
    }

    if (tree[node].second > w) return 0;

    if (l == r && tree[node].first > w) {
        return 0;
    }

    if (l >= ql && r <= qr && tree[node].first <= w) {
        return tree[node].first;
    }

    int m = (r + l) / 2;
    
    int left_ans = query(tree, 2 * node, l, m, w, ql, qr);
    int right_ans = query(tree, 2 * node + 1, m + 1, r, w, ql, qr);

    return max(left_ans, right_ans);
}

int main () {

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    cin >> n >> q;

    vector <int> ia (n);

    for (int i = 0; i < n; ++i) cin >> ia[i];

    vector < pair<int, int> > a (N, make_pair(0, 0));

    build(a, ia, 1, 0, n);

    for (int i = 0; i < q; ++i) {

        int ans = 0;
        int l, r, x;
        cin >> l >> r >> x;

        ans = query(a, 1, 0, n, x, l, r);

        cout << ans << "\n";
    }
}