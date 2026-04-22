#include <iostream>
#include <climits>
using namespace std;

#define INF 100000
#define N 10

void floydWarshall(int dist[N][N], int n) {
    for (int k = 1; k <= n; k++) {
        for (int i = 1; i <= n; i++) {
            for (int j = 1; j <= n; j++) {
                if (dist[i][k] != INF && dist[k][j] != INF) {
                    if (dist[i][j] > dist[i][k] + dist[k][j]) {
                        dist[i][j] = dist[i][k] + dist[k][j];
                    }
                }
            }
        }
    }
}

void printMatrix(int dist[N][N], int n) {
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            if (dist[i][j] == INF)
                cout << "INF ";
            else
                cout << dist[i][j] << " ";
        }
        cout << endl;
    }
}

int main() {
    int n = 4;
    int dist[N][N] = {
        {0},
        {0, 0, 3, INF, 7},
        {0, 8, 0, 2, INF},
        {0, 5, INF, 0, 1},
        {0, 2, INF, INF, 0}
    };

    floydWarshall(dist, n);

    printMatrix(dist, n);

    return 0;
}