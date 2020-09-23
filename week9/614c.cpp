#include <bits/stdc++.h>

using namespace std;

int main () {


    int n, q;
    cin >> n >> q;

    vector <vector <int > > l (2, vector <int> (n, 0));

    int b = 0;

    while (q-- ) {

        int x, y;
        cin >> x >> y;
        x--;
        y--;


        int d = (l[x][y] == 0) ? 1 : -1;

        l[x][y] = 1 - l[x][y];
        for (int j = -1; j <= 1; ++j) {

            if (y + j < 0 || y + j >= n) continue;

            if (l[1 - x][y + j] == 1) b += d;
        }

        cout << ((b == 0) ? "Yes\n" : "No\n");
    }
}