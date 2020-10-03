#include <bits/stdc++.h>

using namespace std;

int main () {


    int t;
    cin >> t;

    while (t--) {

        int n, k;
        cin >> n >> k;

        vector <int> a ( n);
        for (int i =  0; i < n; ++i) cin >> a[i];
    
        int mn = min_element(a.begin(), a.end()) - a.begin();
        int ans = 0;


        for (int i = 1; i <= n; ++i ) {

            if (i != mn) {

                while (a[i] + a[mn] <= k) {

                    a[i] += a[mn];
                    ++ans;
                }
            }
        }

        cout << ans << "\n";
    }
}