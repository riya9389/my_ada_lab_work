#include <iostream>
#include <vector>
using namespace std;

int N = 4;  

vector<vector<int>> board(N, vector<int>(N, 0));

bool isSafe(int row, int col) {
    for (int i = 0; i < row; i++) {
        if (board[i][col] == 1)
            return false;
    }

    for (int i = row-1, j = col-1; i >= 0 && j >= 0; i--, j--) {
        if (board[i][j] == 1)
            return false;
    }

    for (int i = row-1, j = col+1; i >= 0 && j < N; i--, j++) {
        if (board[i][j] == 1)
            return false;
    }

    return true;
}

bool solve(int row) {
    if (row == N)
        return true;

    for (int col = 0; col < N; col++) {
        if (isSafe(row, col)) {
            board[row][col] = 1;   

            if (solve(row + 1))
                return true;

            board[row][col] = 0;   
        }
    }

    return false;
}

void printBoard() {
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            cout << board[i][j] << " ";
        }
        cout << endl;
    }
}

int main() {
    if (solve(0)) {
        printBoard();
    } else {
        cout << "No solution exists";
    }
    return 0;
}