#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define pb push_back


int main () {

    
    ll MOD = 1E9 + 7;

    ll n, k;
    cin >> n >> k;

    vector <int> a;
    vectro <int> na;

    for (int i = 0; i < n; ++i) {
        ll ttt;
        cin >> ttt;
        if (ttt < 0) na[kkk++] = ttt;
        else a[lll++] = ttt;
    }

    sort(a.begin(), a.end());
    sort(na.begin(), na.end());

    ll prod = 1;

    vector <int> nna;

    for (int i = 0; i < na.size(); i += 2) {
        nna.pb();
    }

    cout << prod % MOD << "\n";
}