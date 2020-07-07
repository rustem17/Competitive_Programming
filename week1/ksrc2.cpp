#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define pb push_back

string s[30], ans;
bool bb;
bool vis[26], act[26];
vector <int> adj[26];

void dfs (int u) {

    act[u] = 1;
    vis[u] = 1;
    for (int v : adj[u]) {
        if (act[v] && v^u) bb = 1;
        else {
            if (!vis[v]) dfs(v);
        } 
    }
    act[u] = 0;
    ans += (char) (u + 'A');
}

int main () {

    int t;
    cin >> t;

    while (t--) {
        int n, m;
        cin >> n >> m;
        set< char> tt; 
        
        for (int i = 0; i < n; ++i) {
            cin >> s[i];
            for (int j = 0; j < m; ++j) {
                tt.insert(s[i][j]);
            }

            if (i) {
                for (int j = 0; j < m; ++j) {
                    adj[s[i - 1][j] - 'A'].pb(s[i][j] - 'A');
                }
            }
        }

        memset(vis, 0, 26);
        memset(act, 0, 26);

        ans = "";
        bb = 0;

        for (char c : tt) {
            if (!vis[c - 'A']) dfs(c - 'A');
        }

        if (bb) {
            cout << "-1\n";
        } else {
            cout << ans << "\n";
            for (int i = 0; i < 26; ++i) adj[i].clear();
        }    
    }

}