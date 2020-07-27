#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define pb push_back

int main () {


    double c;
    cin >> c;

    double l = 0.0;
    double r = c;

    for (int i = 0; i < 100; ++i) {
    
        double m = (l + r) / 2;
        double rr = m * m + sqrt(m);

        if (rr - c > 1e-7) {
            r = m;
        } else {
            l = m;
        }
    }

    printf("%.7lf\n", r);
}