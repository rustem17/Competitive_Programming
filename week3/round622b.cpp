#include <bits/std++.h>

using namespace std;

int main () {

    int t;
    cin >> t;


    while (t--) {

        int n, x, y;

        cin >> n >> x >> y;

        cout << min(max(x + y - n + 1, 1), n) << " " << min(x + y - 1, n) << "\n";
    }
}