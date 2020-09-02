#include <bits/stdc++.h>

using namespace std;

int main () {

    int n;
    cin >> n;

    if (n < 3) {
        cout << "-1\n";
        return ;
    }

    vector <int> s = {1, 3, 4, 8, 2, 7, 9, 5 ,6};

    vector <vectorr <int > > t (n, vector <int> (n, 0));

    int c = 1;

    for (int i = 0; i < n - 3; ++i) {

        if (i & 1) {

            for (int j = n - 1; j >= 0; --j) {

                t[i][j] = c;
                c++;
            }
        } else {
            for (int j = 0; j < n; ++j) {
                t[i][j] = c;
                c++;
            }
        }
    }

    if ((n - 3) & 1) {
        for (int j = n - 1; j >= 0; --j) {

            if (j & 1) {

                for (int i = n - 3; i < n; ++i) {

                    if (j > 2) {
                        t[i][j] = c;
                        c++;
                    } else {

                        t[i][j] = s[(2 - j) * 3 + i - n + 3] + n * n - 9;
                    }
                }
            } else {

                for (int i = n - 3; i < n; ++i) {

                    if (j < n - 3) {
                        t[i][j] = c;
                        c++;
                    } else {

                        t[i][j] = s[(j - n + 3) * 3 + i - n + 3] + n * n - 9;
                    }
                }
            }
        }
    }

    for (int i = 0; i < n; ++i) {

        for (int j = 0; j < n; ++j) {

            cout << t[i][j] << " ";
        }

        cout << "\n";
    }
}