    #include <bits/stdc++.h>
     
    using namespace std;
     
    #define ll long long
    #define pb push_back
    #define mp make_pair
     
    int main () {
     
        int t;
        cin >> t;
     
        while (t--) {
            ll n = 0, r = 0, rr = 0;

            cin >> n >> r;

            if (n <= l) {
                cout << "1\n";
                continue;
            }

            if (n <= r) {
                r = n - 1;
                rr = 1;
            }

            cout << rr + ((l + r) * (r - l + 1)) / 2 << "\n";
        }
    }