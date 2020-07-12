#include <bits/stdc++.h>
    
using namespace std;
    
#define ll long long
#define pb push_back
#define mp make_pair
    
int main () {
    
    int n;
    cin >> n;

    vector <ll> a(n);

    for (int i = 0; i < n; ++i) cin >> a[i];

    vector <int> p = a;
    for (int i = 0; i + 2 < n; ++i) p[i + 2] += p[i];

    vector <ll> s = a;

    for (int i = n - 1; i >= 2; --i) s[i - 2] += s[i];

    ll ans = p[n - 1];
    for (int i = 0; i + 1 < n; ++i) ans = max(ans, p[i] + s[i + 1]);

    cout << ans << "\n"; 
}