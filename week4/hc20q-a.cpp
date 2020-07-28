#include <bits/stdc++.h>

using namespace std;

#define mp make_pair


int main () {

    freopen("travel_restrictions_input.txt", "r", stdin);
    freopen("travel_restrictions_output.txt", "w", stdout);


    int t;

    cin >> t;
    int ii = 1;
    while (t--) {

        int n;
        cin >> n;

        vector <pair <char, char > > a (n);

        string s1, s2;

        cin >> s1 >> s2;

        for (int j = 0; j < n; ++j) {
            a[j] = mp(s1[j], s2[j]);
        }

        char ans[n][n];

        cout << "Case #" << ii << ":\n";
        for (int i = 0; i < n; ++i) {

            for (int j = 0; j < n; ++j) {

                if (i == j) { // correct

                    cout << 'Y';
                
                } else if (a[j].first == 'N') { // if nothing goes into it, then anyway it is N
                
                    cout << 'N';
                
                } else { // if 
                    
                    if (abs(i - j) == 1 && a[i].second == 'Y') cout << 'Y';
                    else if (a[i].second == 'Y') {

                        int ii = max(i, j), jj = min(i, j);
                        bool yy = 1;

                        while (((ii - jj) > 1) && yy) {

                            jj++;

                            if (a[jj].first != 'Y' || a[jj].second != 'Y') {
                                yy = 0;
                            }
                        }

                        if (yy) cout << 'Y';
                        else cout << 'N';

                    }
                    else cout << 'N';

                }
            }
            
            cout << "\n";
        }
        ii++;
    }    

}