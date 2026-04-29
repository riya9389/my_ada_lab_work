#include <iostream>
using namespace std;

int w[100], x[100]; 
int n, m;          
void print_subset() {
    cout << "{ ";
    for (int i = 0; i < n; i++) {
        if (x[i] == 1)
            cout << w[i] << " ";
    }
    cout << "}" << endl;
}
void sum_of_subsets(int s, int k, int r) {
    x[k] = 1;

    if (s + w[k] == m) {
        print_subset();
    }
    else if (k + 1 < n && s + w[k] + w[k + 1] <= m) {
        sum_of_subsets(s + w[k], k + 1, r - w[k]);
    }
    x[k] = 0;

    if (k + 1 < n && (s + r - w[k] >= m) && (s + w[k + 1] <= m)) {
        sum_of_subsets(s, k + 1, r - w[k]);
    }
}

int main() {
    cout << "Enter number of elements: ";
    cin >> n;

    cout << "Enter elements (sorted in increasing order): ";
    int total = 0;
    for (int i = 0; i < n; i++) {
        cin >> w[i];
        total += w[i];
    }

    cout << "Enter target sum: ";
    cin >> m;

    sum_of_subsets(0, 0, total);

    return 0;
}