    #include <bits/stdc++.h>
     
    using namespace std;
     
    #define ll long long
    #define pb push_back
    #define mp make_pair
     
    int main () {
     
        ll n, p;
        ll s, f;

        ll a[141343], b[282686] = {0}, mx = 0;
        
        ll r[141343];
        ll c = 0;

        cin >> n >> p;

        for (ll i = 0; i < n; ++i) {
            cin >> a[i];
            mx = max(a[i], mx);
        }

        for (ll i = 0; i < n; ++i) 
            b[max(0, a[i] - mx + n)]++;

        for (ll i = 1; i < 282686; ++i)
            b[i] += b[i - 1];

        for (ll i = 0; i <= n; ++i) {
            for (ll j = 0; j < n; ++j) {
                if (b[i + j] - j <= 0) break;
                if ((b[i + j] - j) % p == 0) break;
                if (j == n - 1) {
                    r[c] = i + mx - n;
                    c++;
                }
            }
        }

        cout << c << "\n";

        for (ll i = 0; i < c; ++i) {
            if (i) cout << " ";
            cout << r[i];
        }

        cout << "\n";
    }