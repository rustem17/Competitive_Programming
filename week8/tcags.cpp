#include <bits/stdc++.h>

using namespace std;

#define ll long long

#define mp make_pair
#define pb push_back


int minRefuelStops(int target, int startFuel, vector<vector<int>>& stations) {
    priority_queue<int> passed_stations;
    
    int cur_pos = 0;
    int cur_fuel = startFuel;
    int stops = 0;
    int si = 0;
    
    while(cur_fuel > 0)
    {
        // spend aint fuel, drive as far as possible
        cur_pos += cur_fuel;
        cur_fuel = 0;
        
        // if we passed or reach target, we're done!
        if(cur_pos >= target)
            break;
        
        // go back and figure out how many gas stations we passed
        while(si < stations.size() && stations[si][0] <= cur_pos)
        {
            passed_stations.push(stations[si][1]);
            ++si;
        }
        
        // we're out of gas so fuel up at the best station we passed so far (if we can)
        if(!passed_stations.empty())
        {
            cur_fuel += passed_stations.top();
            passed_stations.pop();
            ++stops;
        }
    }
    
    return (cur_pos >= target) ? stops : -1;
}


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    
    int t;
    cin >> t;

    while (t--) {

        int n;
        cin >> n;

        int m, g;
        cin >> m >> g;

        vector < vector<int> > a (n);

        for (int i = 0; i < n; ++i) {
            
            ll t1, t2;
            cin >> t1 >> t2;

            a[i].pb(m - t1);
            a[i].pb(t2);
        }

        cout << minRefuelStops(m, g, a) << "\n";
        
    }

    return 0;
}