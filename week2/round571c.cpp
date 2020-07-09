#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define pb push_back
#define mp make_pair

int main () {


    string a, b;
    cin >> a >> b;

    int o1 = 0, o2 = 0;

    for (int i = 0; i < b.size(); ++i) {
        if (b[i] == '1') o2++;
    }

    o2 %= 2;

    for (int i = 0; i < a.size(); ++i) {
        if (a[i] == '1') o1++;
    }

    int n = int(o1 % 2 == o2);

    for (int i = b.size(); i < a.size(); ++i) {
        if (a[i] == '1') ++o1;
        if (a[i - b.size()] == '1') --o1;

        n += int(o1 % 2 == o2);
    }

    cout << n << "\n";
}