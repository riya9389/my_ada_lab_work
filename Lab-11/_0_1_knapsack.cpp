#include <bits/stdc++.h>
using namespace std;

int knapsack(int wt[], int val[], int n, int W, int v[][100]) {
    for(int i = 0; i <= n; i++) {
        for(int j = 0; j <= W; j++) {
            if(i == 0 || j == 0)
                v[i][j] = 0;
        }
    }
    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= W; j++) {
            if(wt[i-1] <= j) {
                v[i][j] = max(
                    v[i-1][j],
                    val[i-1] + v[i-1][j - wt[i-1]]
                );
            } else {
                v[i][j] = v[i-1][j];
            }
        }
    }
    return v[n][W]; 
}
void writeSol(int wt[], int val[], int n, int W, int v[][100]) {
    if(n == 0 || W == 0)
        return;

    if(v[n][W] == v[n-1][W]) {
        writeSol(wt, val, n-1, W, v);
    }
    else {
      
        writeSol(wt, val, n-1, W - wt[n-1], v);
        cout << "(" << wt[n-1] << ", " << val[n-1] << ")\n";
    }
}
int main() {
    int wt[] = {1, 3, 4, 5};
    int val[] = {1, 4, 5, 7};
    int n = 4;
    int W = 7;

    int v[100][100];

    int maxVal = knapsack(wt, val, n, W, v);

    cout << "Maximum Value: " << maxVal << endl;

    cout << "Selected items:\n";
    writeSol(wt, val, n, W, v);

    return 0;
}