#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define pb push_back
#define mp make_pair

int main () {

    vector <int> oo;

    int m, s;
    cin >> m >> s;

    int r = s / 9;
    while (r--) oo.pb(9);

    if (s % 9 != 0) oo.pb(s % 9);

    if (s == 0 && m == 1) {
        cout << "0 0\n";
    } else if (s < 1 || oo.size() > m) {
        cout << "-1 -1\n";
    } else {

        vector <int> op = oo;

        

        for (int i = oo.size() - 1; i != -1; --i) {

            if (i == op.size() - 1 && op.size() < m) {
                cout << "1";
                op[i]--;
                int tm = m - op.size() - 1;
                while (tm--) {
                    cout << "0";
                }
            }
            cout << op[i];
        }

        cout << " ";

        for (int i = 0; i < oo.size(); ++i) {

            cout << oo[i];

            if (i == oo.size() - 1 && oo.size() < m) {
                int tm = m - oo.size();
                while (tm--) {
                    cout << "0";
                }
            }
        }

        


        cout << "\n";
    }
}