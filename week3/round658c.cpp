#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define pb push_back

int main () {


    int t;
    cin >> t;

    while (t--) {

        int n;
        cin >> n;

        string a, b;
        cin >> a >> b;

        vector <int> a1, b1;

        a += '0'; 
        b += '0';

        for (int i = 1; i <= n; ++i) {
            if (a[i] != a[i - 1]) a1.pb(i);
            if (b[i] != b[i - 1]) b1.pb(i);
        }

        a1.insert(a1.end(), b1.rbegin(), b1.end());
        cout << a1.size();

        for (int i : a1) {
            cout << " " << i;

        }

        cout << "\n";
    }
}