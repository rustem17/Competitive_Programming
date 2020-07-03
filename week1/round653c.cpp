#include <bits/stdc++.h>

using namespace std;

#define ll long long

#define pb push_back

int main () {

    int t;
    cin >> t;

    while (t--) {
        int m;
        string n;
        cin >> m >> n;

        int c = 0;
        int c1 = 0;

        for (int i = 0; i < n.size(); ++i) {

            if (n[i] == '(') c++;
            else c--;

            if (c < 0 && n[i] == ')') {
                c1++;
                c = 0;
            }    
 
        }

        cout << c1 << "\n";
    }
}