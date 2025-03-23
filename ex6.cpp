//#include<iostream>
//using namespace std;
//int solutions = 0;
//bool isSafe(int row, int col, int board[8][8])
//{
//	int N = 8;
//	for (int i = 0; i < row; i++)
//	{
//		if (board[i][col] == 1) { return false; }
//		if (col - (row - i) >= 0 && board[i][col - (row - i)] == 1)
//		{
//			return false;
//		}
//		if (col + (row - i) < N && board[i][col + (row - i)] == 1)
//		{
//			return false;
//		}
//	}
//	return true;
//}
//void solveNQueens(int row, int board[8][8])
//{
//	int N = 8;
//	if (row == N)
//	{
//		solutions++;
//		return ;
//	}
//	for (int col = 0; col < N; col++)
//	{
//		if (isSafe(row, col, board))
//		{
//			board[row][col] = 1;
//			solveNQueens(row + 1, board);
//			board[row][col] = 0;
//		}
//	}
//}
//int main()
//{
//	int board[8][8];
//	solveNQueens(0, board);
//	cout << solutions << endl;
//	return 0;
//}
#include <iostream>
using namespace std;
int solutions = 0;
bool isSafe(int row, int col, int** board, int N)
{
    for (int i = 0; i < row; i++)
    {
        if (board[i][col] == 1)
            return false;
        if (col - (row - i) >= 0 && board[i][col - (row - i)] == 1)
            return false;
        if (col + (row - i) < N && board[i][col + (row - i)] == 1)
            return false;
    }
    return true;
}
void solveNQueens(int row, int** board, int N)
{
    if (row == N)
    {
        solutions++;
        return;
    }
    for (int col = 0; col < N; col++)
    {
        if (isSafe(row, col, board, N))
        {
            board[row][col] = 1;
            solveNQueens(row + 1, board, N);
            board[row][col] = 0;
        }
    }
}

int main()
{
    int N;
    cout << "Nhap N: ";
    cin >> N;
    int** board = new int* [N];
    for (int i = 0; i < N; i++)
    {
        board[i] = new int[N]();
    }
    solveNQueens(0, board, N);
    cout << solutions << endl;
    for (int i = 0; i < N; i++)
    {
        delete[] board[i];
    }
    delete[] board;

    return 0;
}
