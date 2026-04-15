#include <iostream>
#include <climits>
using namespace std;

#define N 10
#define STAGES 5

void multistage(int cost[N][N], int m[N], int d[N], int n) {
    m[n] = 0;

    for (int j = n-1; j >= 1; j--) {
        int minCost = INT_MAX;

        for (int r = j+1; r <= n; r++) {
            if (cost[j][r] != 0 && cost[j][r] + m[r] < minCost) {
                minCost = cost[j][r] + m[r];
                m[j] = minCost;
                d[j] = r;
            }
        }
    }
}

void printPath(int d[N], int n) {
    int current = 1;

    cout << current;

    while (current != n) {
        current = d[current];
        cout << " -> " << current;
    }
}

int main() {
    int cost[N][N] = {0};

    cost[1][2]=3; cost[1][3]=4; cost[1][4]=5;
    cost[2][5]=8; cost[2][6]=7;
    cost[3][5]=9; cost[3][6]=1; cost[3][7]=6;
    cost[4][6]=4;
    cost[5][8]=2;cost[5][9]=5;
    cost[6][8]=9;
    cost[7][9]=7;
    cost[8][10]=4;
    cost[9][10]=8;

    int m[N], d[N];
    int n = 10;

    multistage(cost, m, d, n);

    cout << m[1] << endl;
    printPath(d, n);

    return 0;
}