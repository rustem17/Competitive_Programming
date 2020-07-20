#include <bits/stdc++.h>

using namespace std;

#define ll long long

int main () {

    int n;
    cin >> n;

    vector <int> a (n);
    vector <ll> f (n);

    for (int i = 0; i < n; ++i) cin >> a[i];

    ll sum = 0;

    stack <int> ss;

    for (int i = 0; i < n; ++i) {

        while (!ss.empty() && a[i] <= a[ss.top()]) {

            int j = ss.top();
            ss.pop();
            sum -= 1ll * (j - (ss.empty() ? -1 : ss.top())) * a[j];
        }

        sum += 1ll * (i - (ss.empty() ? -1 : ss.top())) * a[i];
        f[i] += sum;
        ss.push(i);
    }

    sum = 0;

    ss = stack<int> ();

    for (int i = n - 1; i >= 0; --i) {

        while (!ss.empty() && a[i] <= a[ss.top()]) {

            int j = ss.top();
            ss.pop();

            sum -= 1ll * ((ss.empty() ? n : ss.top()) - j) * a[j];
        }
        sum += 1ll * ((ss.empty() ? n : ss.top()) - i) * a[i];
        f[i] += sum - a[i];
        ss.push(i);
    }

    int p = max_element(f.begin(), f.end()) - f.begin();
    for (int i = p - 1; i >= 0; --i) a[i] = min(a[i], a[i + 1]);
    for (int i = p + 1; i < n; ++i) a[i] = min(a[i], a[i - 1]);
    for (int i = 0; i < n; ++i) cout << a[i] << " ";
    cout << "\n";
}