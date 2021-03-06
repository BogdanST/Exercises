#include "stdafx.h"
#include <iostream>
#include <cstdio>
#include <cstdlib>

using namespace std;
const int N = 8;  //a const variable who helds the size of a matrix

class chessboard {
public:
	void PrintBoard(int board[N][N]);
	bool CheckPos(int board[N][N], int, int);
	bool GenNQ(int board[N][N], int);
};


void chessboard::PrintBoard(int board[N][N])
{
	/* Prints out the solution for N -Queen Problem*/
	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < N; j++)
			cout << board[i][j] << "  ";
		cout << endl;
	}
}


bool chessboard::CheckPos(int board[N][N], int row, int col)
{
	/* check if a queen can be placed on board[row][col]*/
	int i, j;
	for (i = 0; i < col; i++)
	{
		if (board[row][i])
			return false;
	}
	for (i = row, j = col; i >= 0 && j >= 0; i--, j--)
	{
		if (board[i][j])
			return false;
	}

	for (i = row, j = col; j >= 0 && i < N; i++, j--)
	{
		if (board[i][j])
			return false;
	}

	return true;
}


bool chessboard::GenNQ(int board[N][N], int col)
{
	if (col >= N)
		return true;
	for (int i = 0; i < N; i++)
	{
		if (CheckPos(board, i, col))
		{
			board[i][col] = 1; // a queen has been placed on that position
			if (GenNQ(board, col + 1) == true)
				return true;
			board[i][col] = 0;
		}
	}
	return false;
}

int main()
{
	chessboard chessboard;
	int board[N][N] = {0}; //all the elements of this matrix will be 0 at the start
	if (chessboard.GenNQ(board, 0) == false)
	{
		cout << "There is no solution!" << endl;
		return false;
	}
	chessboard.PrintBoard(board);
	int a; cin>>a;
	return 0;
}