#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define pb push_back

int main () {

    int a[4][4];

    for (int i = 0; i < 4; ++i) {
        for (int j = 0; j < 4; ++j) {
            cin >> a[i][j];
        }
    }

    int t;
    cin >> t;

    if (t == 0) {

        for (int i = 0; i < 4; ++i) {
            for (int j = 0; j < 3; ++j) {
                if (a[i][j] == 0) continue;
                int tt = 1;
                while (j + tt <= 3 && a[i][j + tt] == 0) tt++;
                if (j + tt <= 3 && a[i][j + tt] > 0 && a[i][j] == a[i][j + tt]) {
                    a[i][j] *= 2;
                    a[i][j + tt] = 0;
                }
            }
        }

        for (int i = 0; i < 4; ++i) {
            for (int j = 0; j < 3; ++j) {
                int tt = 1;
                while (j + tt <= 3 && a[i][j + tt] == 0) tt++;
                if (j + tt <= 3 && a[i][j] == 0) {
                    a[i][j] = a[i][j + tt];
                    a[i][j + tt] = 0;
                }
            }
        }

    } else if (t == 1) {

        for (int j = 0; j < 4; ++j) {
            for (int i = 0; i < 3; ++i) {
                if (a[i][j] == 0) continue;

                int tt = 1;
                while (i + tt <= 3 && a[i + tt][j] == 0) tt++;
                if (i + tt <= 3 && a[i + tt][j] > 0 && a[i + tt][j] == a[i][j]) {
                    a[i][j] *= 2;
                    a[i + tt][j] = 0;
                }
            }
        }

        for (int j = 0; j < 4; ++j) {
            for (int i = 0; i < 3; ++i) {
                int tt = 1;
                while (i + tt <= 3 && a[i + tt][j] == 0) tt++;
                if (i + tt <= 3 && a[i][j] == 0) {
                    a[i][j] = a[i + tt][j];
                    a[i + tt][j] = 0;
                }
            }
        }

    } else if (t == 2) {
        
        for (int i = 0; i < 4; ++i) {
            for (int j = 3; j > 0; --j) {
                if (a[i][j] == 0) continue;
                int tt = 1;
                while (j - tt >= 0 && a[i][j - tt] == 0) tt++;
                if (j - tt >= 0 && a[i][j - tt] > 0 && a[i][j] == a[i][j - tt]) {
                    a[i][j] *= 2;
                    a[i][j - tt] = 0;
                }
            }
        }

        for (int i = 0; i < 4; ++i) {
            for (int j = 3; j > 0; --j) {
                int tt = 1;
                while (j - tt >= 0 && a[i][j - tt] == 0) tt++;
                if (j - tt >= 0 && a[i][j] == 0) {
                    a[i][j] = a[i][j - tt];
                    a[i][j - tt] = 0;
                }
            }
        }

    } else if (t == 3) {

        for (int j = 0; j < 4; ++j) {
            for (int i = 3; i > 0; --i) {
                if (a[i][j] == 0) continue;
                int tt = 1;
                while (i - tt >= 0 && a[i - tt][j] == 0) tt++;
                if (i - tt >= 0 && a[i - tt][j] > 0 && a[i - tt][j] == a[i][j]) {
                    a[i][j] *= 2;
                    a[i - tt][j] = 0;
                }
            }
        }

        for (int j = 0; j < 4; ++j) {
            for (int i = 3; i > 0; --i) {
                int tt = 1;
                while (i - tt >= 0 && a[i - tt][j] == 0) tt++;
                if (i - tt >= 0 && a[i][j] == 0) {
                    a[i][j] = a[i - tt][j];
                    a[i - tt][j] = 0;
                }
            }
        }
    }

    for (int i = 0; i < 4; ++i) {
        for (int j = 0; j < 4; ++j) {
            cout << a[i][j] << " ";
        }
        cout << "\n";
    }
}