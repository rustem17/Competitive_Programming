#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define pb push_back
#define mp make_pair

struct cmp {

    bool operator () (const pair<int, int> &a, const pair <int, int> &b) const {
        int lena = a.second - a.first + 1;
        int lenb = b.second - b.first + 1;
        if (lena == lenb) return a.first < b.first;
        return lena > lenb;
    }
};

int main () {

    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        set<pair <int, int > > s;
        s.insert({0, n - 1});

        vector <int> a(n);

        for (int i = 1; i <= n; ++i) {
            pair <int, int > tt = *s.begin();

            s.erase(s.begin());
            int ii = (tt.first + tt.second) / 2;
            a[ii] = i;

            if (tt.first < ii) s.insert({tt.first, ii - 1});
            if (ii < tt.second) s.insert({ii + 1, tt.second});
        }

        for (auto i : a) cout << i << "\n";
    }
}