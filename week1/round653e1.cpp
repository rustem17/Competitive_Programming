#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define pb push_back


int main () {

    int n, k;
    cin >> n >> k;

    vector <int> a;
    vector <int> b;

    vector <int> bo;

    for (int i = 0; i < n; ++i) {
        int tt, tt1, tt2;
        cin >> tt >> tt1 >> tt2;

        if (tt1 == 1 && tt2 == 1) bo.pb(tt);
        else if (tt1 == 1) b.pb(tt);
        else if (tt2 == 1) a.pb(tt);
    }

    sort(bo.begin(), bo.end());

    ll sum = 0;
    int l1 = 0;
    if (bo.size() > k) l1 = k;
    else l1 = bo.size();
    
    for (int i = 0; i < l1; ++i) {
        sum += bo[i];
    }

    int kl1 = k - l1;

    if (kl1 > a.size() || kl1 > b.size()) {
        
        cout << "-1\n";
        return 0;
    }

    if (kl1 > 0) {
        sort(a.begin(), a.end());
        sort(b.begin(), b.end());
    } else {
        cout << sum << "\n";
        return 0;
    }

    int p1 = 0, p2 = 0;
    
    while (p1 < kl1 || p2 < kl1) {
        if (a[p1] <= b[p2] && p1 < kl1) {
            p1++;
            sum += a[p1];
        } else if (p2 < kl1) {
            p2++;
            sum += b[p2];
        } else if (p1 < kl1) {
            p1++;
            sum += a[p1];
        }
    }

    cout << sum << "\n";
}