#include <iostream>
#include <vector>
#include <string>

using namespace std;

vector<string> rotate90(const vector<string>& board, int N) 
{
    vector<string> newBoard(N, string(N, '.'));
    for (int i = 0; i < N; ++i) 
    {
        for (int j = 0; j < N; ++j) 
        {
            newBoard[j][N - 1 - i] = board[i][j];
        }
    }
    return newBoard;
}

vector<string> slideDown(const vector<string>& board, int N) 
{
    vector<string> newBoard(N, string(N, '.'));
    for (int j = 0; j < N; ++j) 
    {
        int emptyRow = N - 1;
        for (int i = N - 1; i >= 0; --i) 
        {
            if (board[i][j] != '.') 
            {
                newBoard[emptyRow][j] = board[i][j];
                --emptyRow;
            }
        }
    }
    return newBoard;
}

vector<string> spinAndSlide(const vector<string>& board, int N, int M) 
{
    vector<string> currentBoard = board;
    for (int i = 0; i < M; ++i) 
    {
        currentBoard = rotate90(currentBoard, N);
        currentBoard = slideDown(currentBoard, N);
    }
    return currentBoard;
}

int main() 
{
    int N, M;
    cin >> N >> M;
    vector<string> board(N);
    for (int i = 0; i < N; ++i) 
    {
        cin >> board[i];
    }

    vector<string> result = spinAndSlide(board, N, M);

    for (const string& row : result) 
    {
        cout << row << endl;
    }

}
