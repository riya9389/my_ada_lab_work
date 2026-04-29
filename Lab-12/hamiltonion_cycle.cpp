#include <iostream>
using namespace std;
int n;
int x[100];
int graph[100][100];
void NextValue(int k) {
    int j;
    do {
        x[k] = (x[k] + 1) % (n + 1);

        if (x[k] == 0)
            return;
        for (j = 1; j <= k - 1; j++) {
            if (x[k] == x[j])
                break;
        }
        if (j == k) {
            if (k == 1 || graph[x[k - 1]][x[k]] == 1) {
                if (k < n || (k == n && graph[x[n]][x[1]] == 1)) {
                    return;
                }
            }
        }
    } while (true);
}
void Hamiltonian(int k) {
    do {
        NextValue(k);
        if (x[k] == 0)
            return;
        if (k == n) {
            cout << "Cycle: ";
            for (int i = 1; i <= n; i++)
                cout << x[i] << " ";
            cout << x[1] << endl;
        }
        else {
            Hamiltonian(k + 1);
        }

    } while (true);
}

int main() {
    cout << "Enter number of vertices: ";
    cin >> n;

    cout << "Enter adjacency matrix:\n";
    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= n; j++)
            cin >> graph[i][j];
    for (int i = 1; i <= n; i++)
        x[i] = 0;

    x[1] = 1;          
    Hamiltonian(2);    

    return 0;
}