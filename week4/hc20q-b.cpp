#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define pb push_back

int main () {

    freopen("alchemy_input.txt", "r", stdin);
    freopen("alchemy_output.txt", "w", stdout);

    int t;
    cin >> t;

    int ii = 1;
    while (t--) {

        int n;
        cin >> n;

        string s;
        cin >> s;

        int cA = 0;
        int cB = 0;

        for (int i = 0; i < s.size(); ++i) {

            if (s[i] == 'A') cA++;
            else cB++;
        }

        cout << "Case #" << ii << ": ";
        if (abs(cA - cB) > 1) cout << "N\n";
        else cout << "Y\n";
        ii++;
    }
}