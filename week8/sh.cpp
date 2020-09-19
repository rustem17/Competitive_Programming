#include <bits/stdc++.h>

using namespace std;

#define ll long long

int a[5000000];
int lazy[5000000];

void update(int node, int s, int e, int l, int r) {
    
    if(lazy[node]) {
        
        a[node] = (e - s + 1) - a[node];
        
        if (s != e) {

            lazy[node * 2] = !lazy[node * 2];
            lazy[node * 2 + 1] = !lazy[node * 2 + 1];

        }

        lazy[node] = 0;
    }

    if (s > e || l > e || r < s) return;

    if(s >= l && e <= r) {
        
        a[node] = (e - s + 1) - a[node];
        
        if(s != e) {
            lazy[node * 2] = !lazy[node * 2];
            lazy[node * 2 + 1] = !lazy[node * 2 + 1];
        }

        return;
    }

    update(node * 2, s, (s + e) / 2, l, r);
    update(node * 2 + 1, (s + e) / 2 + 1, e, l, r);

    a[node] = a[node * 2] + a[node * 2 + 1];
}

int query(int node, int s, int e, int l, int r) {

    if(lazy[node]) {
        
        a[node] = (e - s + 1) - a[node];
        
        if(s != e) {
            
            lazy[node * 2] = !lazy[node * 2];
            lazy[node * 2 + 1] = !lazy[node * 2 + 1];
        }


        lazy[node] = 0;

    }

    if (r < s || l > e) return -1;
    
    if (s >= l && e <= r) return a[node];

    int m = (s + e) / 2;
    
    if (r <= m)    return query(node * 2, s, m, l, r);
    if (l > m) return query(node * 2 + 1, m + 1, e, l, r);

    return query(node * 2, s, m, l, r) + query(node * 2 + 1, m + 1, e, l, r);
}

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, q;

    cin >> n >> q;

    for (int i = 0; i < q; ++i) {
        int c, s, f;
        cin >> c >> s >> f;

        if (!c) {
            update(1, 1, n, s, f); // unlock all in the interval
        }  else {
            cout << query(1, 1, n, s, f) << "\n"; // print number of unlocked
        }
    }

    return 0;
}