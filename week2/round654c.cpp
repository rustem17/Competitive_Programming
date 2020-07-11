    #include <bits/stdc++.h>
     
    using namespace std;
     
    #define ll long long
    #define pb push_back
    #define mp make_pair
     
    int main () {
     
        int t;
        cin >> t;
     
        while (t--) {
            ll a, b, n, m;

            cin >> a >> b >> n >> m;

            if (a > b) {
                k = a;
                a = b;
                b = k;
            }

            if (a < m) {
                cout << "No\n";
                continue;
            }

            if (a + b < n + m) {
                cout << "No\n";
                continue;
            }

            cout << "Yes\n";
        }
    }