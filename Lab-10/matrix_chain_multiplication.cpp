#include <iostream>
#include <climits>
using namespace std;

int MCM(int p[], int n, int m[][100], int s[][100]) {
    for (int i = 1; i <= n; i++)
        m[i][i] = 0;

    for (int l = 2; l <= n; l++) {
        for (int i = 1; i <= n - l + 1; i++) {
            int j = i + l - 1;
            m[i][j] = INT_MAX;

            for (int k = i; k < j; k++) {
                int q = m[i][k] + m[k+1][j] + p[i-1]*p[k]*p[j];

                if (q < m[i][j]) {
                    m[i][j] = q;
                    s[i][j] = k;
                }
            }
        }
    }
    return m[1][n];
}

void printOrder(int s[][100], int i, int j) {
    if (i == j) {
        cout << "A" << i;
        return;
    }

    cout << "(";
    printOrder(s, i, s[i][j]);
    printOrder(s, s[i][j] + 1, j);
    cout << ")";
}

int main() {
    int p[] = {2,4,2,5,6,2};
    int n = sizeof(p)/sizeof(p[0]) - 1;

    int m[100][100], s[100][100];

    cout << MCM(p, n, m, s) << endl;
    printOrder(s, 1, n);

    return 0;
}