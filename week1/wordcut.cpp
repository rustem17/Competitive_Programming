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

        vector <int> aa;

        for (int i = 0 ; i < n; ++i) {
            int l;
            cin >> l;

            ll sum = 0;
            for (int j = 0; j < l; ++j) {
                int jj;
                cin >> jj;
                sum += jj;
            }
            aa.pb(sum);
        }


        sort(aa.begin(), aa.end());

        ll sum = 0;
        ll pave = 0;
        
        for (int i = 0 ; i < n; ++i) {
            sum += aa[i];
            pave += sum;
        }

        printf("%0.6lf\n", (pave * 1.0) / (n * 1.0));
    }
}