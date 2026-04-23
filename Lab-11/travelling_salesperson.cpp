#include <bits/stdc++.h>
using namespace std;

const int INF = 1e9;

int n;
vector<vector<int>> dist;
vector<vector<int>> dp;

int tsp(int mask, int pos) {

    if (mask == (1 << n) - 1) {
        return dist[pos][0]; 
    }

    if (dp[mask][pos] != -1) return dp[mask][pos];

    int ans = INF;

    for (int city = 0; city < n; city++) {

        if (!(mask & (1 << city))) {

            int newMask = mask | (1 << city);

            ans = min(ans,
                dist[pos][city] + tsp(newMask, city)
            );
        }
    }

    return dp[mask][pos] = ans;
}

int main() {
    n = 4;

    dist = {
        {0, 10, 15, 20},
        {5, 0, 9, 10},
        {6, 13, 0, 12},
        {8, 8, 9, 0}
    };
    dp.assign(1 << n, vector<int>(n, -1));

    cout << tsp(1, 0) << endl;

    return 0;
}