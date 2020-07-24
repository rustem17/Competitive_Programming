#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define pb push_back

int main () {

    int t;
    cin >> t;

    while (t--) {

        int n, d;
        cin >> n >> d;

        vector <int> a (n);

        for (int i = 0; i < n; ++i) cin >> a[i];

        ll sum = 0;
        int k = 0;


        for (int i = 0; i < n; ++i) {

            if (i) {

                if (a[i] != 0) {
                    
                    if (k > d) {
                        i = n;
                    } else {
                        if (d < k * a[i]) {
                            sum += d / k;
                            d = 0;
                            i = n;
                        } else {
                            sum += a[i];
                            d -= k * a[i];
                        }
                    }
                }   

            } else {
                sum += a[i];
            }

            k++;
        }

        cout << sum << "\n";
    }
}