#include <bits/stdc++.h>

using namespace std;

int n, k;

vector <int> f (const vector <int>& a) {

    vector <int> s;
    for (int i = 0; i < n - 1; ++i) {
        if (a[i] == 1 && a[i + 1] == 0) s.push_back(i);
    }
    return s;

}

int main () {

    cin >> n >> k;

    string s;
    cin >> s;

    vector <int> a (n);

    for (int i = 0; i < n; ++i) a[i] = (s[i] == 'L') ? 0 : 1;

    int mx = 0, mn = 0;
    int c = 0;
    int l = -1;

    for (int i = n - 1; i >= 0; --i) {

        if (a[i] == 0) ++c;
        else {

            if (c == 0) continue;
            mx += c;
            mn = max(c, l + 1);
            l = mn;
        }
    }

    if (k < mn || k > mx) {
        cout << "-1\n";
        return ;
    }

    bool mni = 0;

    vector <int> h;

    for (int i = 0; i < k; ++i) {

        if (!mni) {

            auto ss = f(a);

            cout << min(int(ss.size()), mx -k + i + 1) << " ";
            int cc = 0;

            while (k - i - 1 < mx && cc < ss.size()) {

                cout << ss[cc] + 1 << " ";
                a[ss[cc]] = 0;
                a[ss[cc] + 1] = 1;
                ++cc;
                --mx;
            }

            if (mx == k - i - 1) {

                mni = 1;
                h = f(a);
            }
        } else {
            
            int v = h.back();
            h.pop_back();

            cout << "1 " << v + 1;

            a[v] = 0;
            a[v + 1] = 1;

            if (v > 0 && a[v - 1] == 1) {
                h.push_back(v - 1);
            }

            if (v + 2 < n && a[v + 2] == 0) {

                h.push_back(v + 1);
            }
            

        }

        cout << "\n";
    }
}