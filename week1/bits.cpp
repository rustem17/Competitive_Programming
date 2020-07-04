#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define pb push_back

int main () {

    int t;
    cin >> t;

    while (t--) {

        string n;
        cin >> n;

        ll k = 0;
        ll k2 = 0;
        ll mx = 0;
        for (int j = 0; j < n.size(); ++j) {
            ll c = 0;
            k = k2 + n[j] - 48;
            k2 = k;

            int i = 0;
            while (k > 0) {
                if (k % 2 == 1) c++; 
                k /= 2;
                i++;
            }
            k2 *= 10;
            mx = max(mx, c);
        }

    
        cout << mx << "\n";
    }
}