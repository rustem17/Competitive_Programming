#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define pb push_back

int ind_bs (int b, int e, vector <int> p, int sum) {

    if (sum > p[p.size() - 1]) return p.size() - 1;
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

int main () {

    int n;
    cin >> n;

    vector <int> a (n);

    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }

    vector <int> p (5);
    for (int i = 0; i < 5; ++i) {
        cin >> p[i];
    }

    vector <int> r (5, 0);
    int sum = 0;

    for (int i = 0; i < n; ++i) {
        sum += a[i];

        while (sum >= p[0]) {
            int ind = ind_bs(0, n - 1, p, sum);
            r[ind]++;
            sum -= p[ind];\
        }
    }

    for (int i : r) {
        cout << i << " ";
    }

    cout << "\n";

    cout << sum << "\n";

}