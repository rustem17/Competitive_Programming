#include <bits/stdc++.h>

using namespace std;

int main () {


    int t;

    cin >> t;

    while (t--) {


        int n;
        string s;

        cin >> n >> s;

        vector <int> a (n);
        vector <int> p1, p2;

        for (int i = 0; i < n; ++i) {


            int tt = p1.size() + p2.size();

            if (s[i] == '0') {

                if (p2.empty()) {
                    p1.push_back(tt);
                } else {

                    tt = p2.back();
                    p2.pop_back();
                    p1.push_back(tt);
                }
            } else {

                if (p1.empty()) {

                    p2.push_back(tt);
                } else {

                    tt = p1.back();
                    p1.pop_back();
                    p2.push_back(tt);
                }
            }

            a[i] = tt;
        }

        cout << p1.size() + p2.size() << "\n";

        for (int i = 0; i < n; ++i) cout << a[i] << " ";
        cout << "\n";
    }
}