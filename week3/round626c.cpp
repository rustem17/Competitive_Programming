#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define pb push_back

int main () {


    int n;
    cin >> n;

    string s;
    cin >> s;

    int c = 0;

    for (int i = 0; i < n; ++i) {
        if (s[i] == ')') c++;
        else c--;
    }

    if (c == 0) {

        int c = 0;
        int ans = 0;

        for (int i = 0; i < n; ++i) {
        
            if (s[i] == '(') c++;
            else c--;

            if (c < 0) {

                int k = 1;

                for (int j = i + 1; j < n; ++j) {
                    
                    if (s[j] == '(') c++;
                    else c--;
                    k++;

                    if (c >= 0) {
                       i = j;
                       ans += k;
                       j = n;
                    }
                }
            }            
        }

        cout << ans << "\n";



    } else {
        cout << "-1\n";
    }
}