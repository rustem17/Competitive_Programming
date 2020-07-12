    #include <bits/stdc++.h>
     
    using namespace std;
     
    #define ll long long
    #define pb push_back
    #define mp make_pair
     
    int main () {
     
        int t;
        cin >> t;
     
        while (t--) {
            int n;
            cin >> n;
     
            vector <int> a (n);
     
            for (int i = 0; i < n; ++i) {
                cin >> a[i];
            }
        
            int mn = a[0];
     
            int c = 0;
     
            for (int i = 1; i < n; ++i) {
                if (a[i] < mn) {
                    c++;
                } else {
                    mn = a[i];
                }
            }
     
            cout << c << "\n";
        }
    }