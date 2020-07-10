#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define pb push_back

#define MX 200005

int n, m, found_at = 1;
vector <vector <int> > graph, scc;
vector <int> disc, low;
bool onstack [MX];

void dfs_t (int u) {

    static stack <int> st;

    disc[u] = low[u] = found_at++;
    st.push(u);
    onstack[u] = 1;

    for (auto i : graph[u]) {
        if (disc[i] == 1) {
            dfs_t(i);
            low[u] = min(low[u], low[i]);
        } else if (onstack[i]) {
            low[u] = min(low[u], disc[i]);
        }
    }

    if (disc[u] == low[u]) {
        vector <int> scctem;
        while (1) {
            int v = st.top();
            st.pop();
            onstack[v] = false;
            scctem.pb(v);

            if (u == v) break;
        }

        scc.pb(scctem);
    }
}

int main () {

    set0(onstack);
    graph.clear();
    graph.resize(n + 1);
    
    disc.clear();
    disc.resize(n + 1, -1);

    low.clear();
    low.resize(n + 1);

    for (int i = 0; i < n; ++i) {
        
    }

    for (int i = 0; i < n; ++i) {
        if (disc[i + 1] == -1) dfs_t(i + 1);
    }

    cout << scc.size() << "\n";
}