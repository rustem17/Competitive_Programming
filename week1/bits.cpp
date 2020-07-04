#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define pb push_back

int main () {

    int t;
    cin >> t;

    while (t--) {

        ll n;
        cin >> n;


        int c = 0;
        int i = 0;
        while (n > 0) {
            int m = n % 2;
            if (m == 1) c++;
            n /= 2;
            i++;
        }

        cout << c << "\n";
    }
}