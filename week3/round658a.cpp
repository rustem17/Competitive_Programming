#include <bits/stdc++.h>

using namespace std;

int main () {


    int t;
    cin >> t;

    while (t--) {

        int n, m;
        cin >> n >> m;

        vector <int> a (n);
        for (int i = 0; i < n; ++i) cin >> a[i];

        vector <int> b (m);
        for (int i = 0; i < m; ++i) cin >> b[i];
        
        set <int> c;

        int i = 0;

        for (i = 0; i < n; ++i) {
            c.insert(a[i]);
        }

        int ff = 0;

        for (int j = 0; j < m; ++j) {
            int mm = c.size();
            
            c.insert(b[j]);
            if (c.size() == mm) {
                ff = b[j];
                j = m;
            }
        }

        if (ff) {
            cout << "YES\n1 " << ff << "\n";
        } else {
            cout << "NO\n";
        }
    }
}