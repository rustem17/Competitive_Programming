#include <bits/stdc++.h>

using namespace std;
#define ll long long

const ll N = 1e9 + 7;

void build (vector <int>& tree, map <int, int>& mp, int node, int l, int r) {

    if (l == r && x == l) {
    
        tree[node] = -1;
    
    } else if (l == r && x != l) {

        tree[node] = x;
        mp[l] = x;

    } else { // ?

        if (l > x || r < x) {

            for (int i = l; i <= r; ++i) {
                tree[i] = x;
                mp[i] = x;
            }

        } else {

            int m = l + (r - l) / 2;
            build(tree, mp, x, 2 * node, l, m);
            build(tree, mp, x, 2 * node + 1, m + 1, r);
        }
    }
}

int main () {

    int n, r;
    cin >> n >> r;

    vector <int> a (2 * n, -1); // segtree, num of nodes = 2n - 1;
    map <int, int> ans;

    for (int i = 0; i < r; ++i) {

        int l, r, x;
        cin >> l >> r >> x;

        build(a, ans, 1, x, l, r);
        // insert into the tree here and after processing request enter the results into map
    }

    //...
    // then for each request fill the tree (if the whole range will get x value, then set it to it, else: go deeper)
    // if intersection with other branch -> go to both branches and check all until find the range of leaves that lie under it and have no x value

    for (auto i = a.begin(); i != a.end(); ++i) {

        cout << (i -> second == -1 ? 0 : i -> second) << " ";
    }

    cout << "\n";
}