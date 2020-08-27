#include <bits/stdc++.h>

using namespace std;

int n;
string s;

string f (string ss) {
    string r = ss;


    for (int i = 0; i < ss.size(); ++i) {

        if (i - n >= 0 && ss[i - x] == '1' || i + x < ss.size() && ss[i + x] == '1')
            r[i] = '1';
        else
            r[i] = '0';        
    }

    return r;
}


int main () {

    int t;
    cin >> t;

    while (t--) {

        cin >> s >> n;

        int sn = s.size();

        string ns = string(n, '1');

        for (int i = 0; i < ns; ++i) {

            if (s[i] == '0') {
                if (i - x >= 0) ns[i - x] = '0';
                if (i + x < n) ns[i + x] = '0';
            }
        }

        if (f(ns) == s) cout << ns << "\n";
        else cout << "-1\n";
    }

}