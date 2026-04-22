#include <iostream>
#include <climits>
using namespace std;

#define N 10

void multistageForward(int cost[N][N], int m[N], int d[N], int n) {
    for (int i = 1; i <= n; i++)
        m[i] = INT_MAX;

    m[1] = 0;

    for (int j = 1; j <= n-1; j++) {
        for (int r = j+1; r <= n; r++) {
            if (cost[j][r] != 0 && m[j] + cost[j][r] < m[r]) {
                m[r] = m[j] + cost[j][r];
                d[r] = j;
            }
        }
    }
}

void printPath(int d[N], int n) {
    int path[N];
    int k = 0;
    int current = n;

    while (current != 1) {
        path[k++] = current;
        current = d[current];
    }
    path[k++] = 1;

    for (int i = k-1; i >= 0; i--) {
        cout << path[i];
        if (i != 0) cout << " -> ";
    }
}

int main() {
    int cost[N][N] = {0};

    cost[1][2]=3; cost[1][3]=4; cost[1][4]=5;
    cost[2][5]=8; cost[2][6]=7;
    cost[3][5]=9; cost[3][6]=1; cost[3][7]=6;
    cost[4][6]=4;
    cost[5][8]=2; cost[5][9]=5;
    cost[6][8]=9;
    cost[7][9]=7;
    cost[8][10]=4;
    cost[9][10]=8;

    int m[N], d[N];
    int n = 10;

    multistageForward(cost, m, d, n);

    cout << m[n] << endl;
    printPath(d, n);

    return 0;
}