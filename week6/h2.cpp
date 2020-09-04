#include <bits/stdc++.h>

using namespace std;

#define pb push_back

void build (vector< int >& tree, vector <int>& a, int node, int l, int r) {

    if (l == r) {

        tree[node] = a[l];

    } else {

        int m = r + l / 2;

        build(tree, a, 2 * node, l, m);
        build(tree, a, 2 * node + 1, m + 1, r);
        tree[node] = max(tree[2 * node], tree[2 * node + 1]);

    }
}

int query (const vector <int>& tree, int node, int l, int r, int w, int ql, int qr) {
    
    if (ql > r || l > qr) {
        return 0;
    }

    if (l == r && tree[node] > w) {
        return 0;
    } 

    if (l >= ql && r <= qr) {
        if (tree[node] <= w) return tree[node];
    }

    int m = r + l / 2;
    
    int left_ans = query(tree, 2 * node, l, m, w, ql, qr);
    int right_ans = query(tree, 2 * node + 1, m + 1, r, w, ql, qr);

    return max(left_ans, right_ans);
}

int main () {

    int n, q;
    cin >> n >> q;

    vector <int> ia (n);

    for (int i = 0; i < n; ++i) cin >> ia[i];

    vector <int> a (2 * n);

    build(a, ia, 1, 0, n - 1);

    for (int i = 0; i < q; ++i) {

        int ans = 0;
        int l, r, x;
        cin >> l >> r >> x;

        ans = query(a, 1, 0, n - 1, x, l, r);

        cout << ans << "\n";
    }
}