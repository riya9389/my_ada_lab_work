#include <iostream>
using namespace std;

int n, m;
int x[100];              
int graph[100][100];     

void NextValue(int k) {
    while (true) {
        x[k] = (x[k] + 1) % (m + 1);

        if (x[k] == 0)
            return; 

        int j;
        for (j = 1; j <= k - 1; j++) {
            if (graph[k][j] == 1 && x[k] == x[j])
                break;
        }

        if (j == k)
            return; 
    }
}

void mColoring(int k) {
    while (true) {
        NextValue(k);

        if (x[k] == 0)
            return; 

        if (k == n){
            cout << "Solution: ";
            for (int i = 1; i <= n; i++)
                cout << x[i] << " ";
            cout << endl;
        }
        else {
            mColoring(k + 1);
        }
    }
}

int main() {
    cout << "Enter number of vertices: ";
    cin >> n;

    cout << "Enter adjacency matrix:\n";
    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= n; j++)
            cin >> graph[i][j];

    cout << "Enter number of colors: ";
    cin >> m;

    for (int i = 1; i <= n; i++)
        x[i] = 0;
    mColoring(1);

    return 0;
}