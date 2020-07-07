#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define pb push_back

using namespace std;

int main () {
    
    int h, w, k;
    cin >> h >> w >> k;

    vector <int> c;

    for (int i = 0; i < h; ++i) {
        cin >> c[i];
    }

    int a = 0;
    for (int i = 0; i < 1 << h; ++i) {
        for (int j = 0; j < 1 << w; ++j) {
            int cc = 0;
            for (int l = 0; l < h; ++l) {
                for (int m = 0; m < w; ++m) {
                    if (i & (1 << l) && j & (1 << m) && c[l][m] == '#') cc++;
                }
            }

            if (cc == k) a++;
        }
    }

    cout << a << "\n";
}