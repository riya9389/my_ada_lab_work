#include <iostream>
using namespace std;

#define N 100

void LCS(string X, string Y, int n, int m, int dp[N][N], char dir[N][N]) {
   
    for (int i = 0; i <= n; i++) dp[i][0] = 0;
    for (int j = 0; j <= m; j++) dp[0][j] = 0;

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= m; j++) {

            if (X[i-1] == Y[j-1]) {
                dp[i][j] = 1 + dp[i-1][j-1];
                dir[i][j] = 'D';  // diagonal ↖
            }
            else if (dp[i-1][j] >= dp[i][j-1]) {
                dp[i][j] = dp[i-1][j];
                dir[i][j] = 'U';  // up ↑
            }
            else {
                dp[i][j] = dp[i][j-1];
                dir[i][j] = 'L';  // left ←
            }
        }
    }
}

void printLCS(char dir[N][N], string X, int i, int j) {
    if (i == 0 || j == 0)
        return;

    if (dir[i][j] == 'D') {
        printLCS(dir, X, i-1, j-1);
        cout << X[i-1];  
    }
    else if (dir[i][j] == 'U') {
        printLCS(dir, X, i-1, j);
    }
    else {
        printLCS(dir, X, i, j-1);
    }
}

int main() {
    string X = "ABCBDAB";
    string Y = "BDCABA";

    int n = X.length();
    int m = Y.length();

    int dp[N][N];
    char dir[N][N];

    LCS(X, Y, n, m, dp, dir);

    cout << "LCS length = " << dp[n][m] << endl;
    cout << "LCS = ";
    printLCS(dir, X, n, m);

    return 0;
}