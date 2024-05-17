#include <iostream>
#include <vector>
using namespace std;

void printBoard(const vector<vector<char>>& board) {
    int n = board.size();
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            cout << board[i][j];
        }
        cout << endl;
    }
}

void countPieces(const vector<vector<char>>& board, int& black, int& white) {
    black = 0;
    white = 0;
    int n = board.size();
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            if (board[i][j] == 'B') ++black;
            else if (board[i][j] == 'N') ++white;
        }
    }
}

void placePiece(vector<vector<char>>& board, char player, int row, int col) {
    int n = board.size();
    board[row][col] = player;
    // 8 direccions possibles
    vector<pair<int, int>> directions = {{-1, -1}, {-1, 0}, {-1, 1}, {0, -1}, {0, 1}, {1, -1}, {1, 0}, {1, 1}};
    for (auto [dx, dy] : directions) {
        int x = row + dx, y = col + dy;
        bool hasOpponentBetween = false;
        while (x >= 0 && x < n && y >= 0 && y < n && board[x][y] != '.' && board[x][y] != player) {
            hasOpponentBetween = true;
            x += dx;
            y += dy;
        }
        if (x >= 0 && x < n && y >= 0 && y < n && board[x][y] == player && hasOpponentBetween) {
            x = row + dx;
            y = col + dy;
            while (board[x][y] != player) {
                board[x][y] = player;
                x += dx;
                y += dy;
            }
        }
    }
}

int main() {
    int n;
    cin >> n;

    // Iniciem la taula
    vector<vector<char>> board(n, vector<char>(n, '.'));
    board[n/2 - 1][n/2 - 1] = board[n/2][n/2] = 'B';
    board[n/2 - 1][n/2] = board[n/2][n/2 - 1] = 'N';

    printBoard(board);
    int black, white;
    countPieces(board, black, white);
    cout << black << ":" << white << endl;

    char player;
    int row, col;
    while (cin >> player >> row >> col) {
        placePiece(board, player, row - 1, col - 1); //ADjustem a 0
        printBoard(board);
        countPieces(board, black, white);
        cout << black << ":" << white << endl;
    }

    return 0;
}
