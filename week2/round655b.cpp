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
    
        int i = 2;
        bool f = 1;
    
        if (n == 2) cout << "1 1\n";
        else if (n == 3) cout << "1 2\n";

        while (f && i * i <= n) {
            if (n % i == 0) {
                cout << n / i << " " << n - n / i << "\n";
                f = 0;
                
            } else {
                i++;
            }
        }
    
    }
}