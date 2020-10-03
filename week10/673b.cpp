#include <bits/stdc++.h>

using namespace std;

int main () {


    int t;
    cin >> t;

    while (t--) {

        int n, tt;
        cin >> n >> tt;

        int cm = 0;

        for (int i = 0; i < n; ++i) {

            int x;
            cin >> x;

            int r ;

            if (tt % 2 == 0 && x == tt/ 2) {
                r = cm % 2;
                cm++;
            } else if (x * 2 < tt) {
                r = 0;

            } else {
                r = 1;
            }
            
            cout << r << " \n"[i == n - 1];
        }
        
    }
}