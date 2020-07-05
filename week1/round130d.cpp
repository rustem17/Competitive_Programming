#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define pb push_back

int ind_bs (int b, int e, vector <int> p, int sum) {

    if (sum >= p[p.size() - 1]) return p.size() - 1;
    else if (sum == p[0]) return 0;

    while (b <= e) {
        int mid = b + (e - b) / 2;
        if (p[mid] == sum) return mid;

        if (p[mid] < sum) b = mid + 1;
        else e = mid - 1;
    }

    if (p[b] > sum) {
        return b - 1;
    } else {
        return b;
    }
}

ll fc (ll sum, vector <ll> p) {

    for (int i = 3; i != -1; --i) {
        if (sum >= p[i]) return i; 
    }
}

int main () {

    int n;
    cin >> n;

    vector <ll> a (n);

    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }

    vector <ll> p (5);
    for (int i = 0; i < 5; ++i) {
        cin >> p[i];
    }

    vector <ll> r (5, 0);
    ll sum = 0;

    for (int i = 0; i < n; ++i) {
        sum += a[i];
        if (sum >= p[4]) {
            r[4] += sum / p[4];
            sum = sum % p[4];
            
        }

        while (sum >= p[0]) {
            ll nle = fc(sum, p);
            r[nle] += sum / p[nle];
            sum = sum % p[nle];
        }

    }

    for (ll i : r) {
        cout << i << " ";
    }

    cout << "\n";

    cout << sum << "\n";

}