#include <bits/stdc++.h>

using namespace std;

#define ll long long

#define pb push_back

int main () {

    int t;
    cin >> t;
    cin.ignore();

    while (t--) {
        string a;
        getline(cin, a);

        istringstream iss (a);
        vector <string> r;

        string q;
        while (iss >> q) {
            r.pb(q);
        }

        set <string> sss;
        while (1) {
            string qq;
            getline(cin ,qq);
            if (qq == "what does the fox say?") break;

            string tt[3];
            istringstream iss (qq);
            iss >> tt[0] >> tt[1] >> tt[2];
            sss.insert(tt[2]);
        }

        for (int i = 0; i < r.size(); ++i) {
            if (sss.find(r[i]) == sss.end()) cout << r[i] << " "; 
        }
    }
}