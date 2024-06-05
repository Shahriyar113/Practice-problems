#include <iostream>
#include <algorithm>
#include <vector>
#include <cmath>
#include <climits>

using namespace std;
int max_coins,num_of_rows,num_of_columns;


void get_max_coins(vector<vector<int>> board, int is_row_safe, int row, int col, bool is_bomb_used, int coins)
{
	if (row < 0 || row >= num_of_rows || col < 0 || col >= num_of_columns)
	{
		max_coins = max(coins, max_coins);
		return;
	}
	else if (board[row][col] == 1)
	{
		coins++;
		if (is_bomb_used)
			is_row_safe--;

		get_max_coins(board, is_row_safe, row - 1, col-1, is_bomb_used, coins);
		get_max_coins(board, is_row_safe, row - 1, col, is_bomb_used, coins);
		get_max_coins(board, is_row_safe, row - 1, col+1, is_bomb_used, coins);
	}
	else if (board[row][col] == 0)
	{
		if (is_bomb_used)
			is_row_safe--;

		get_max_coins(board, is_row_safe, row - 1, col - 1, is_bomb_used, coins);
		get_max_coins(board, is_row_safe, row - 1, col, is_bomb_used, coins);
		get_max_coins(board, is_row_safe, row - 1, col + 1, is_bomb_used, coins);
	}

	else if (board[row][col] == 2)
	{
		if (is_bomb_used && is_row_safe <= 0)
		{
			max_coins = max(coins, max_coins);
			return;
		}
		else if (is_bomb_used && is_row_safe > 0)
		{
			is_row_safe--;
			get_max_coins(board, is_row_safe, row - 1, col - 1, is_bomb_used, coins);
			get_max_coins(board, is_row_safe, row - 1, col, is_bomb_used, coins);
			get_max_coins(board, is_row_safe, row - 1, col + 1, is_bomb_used, coins);

		}
		else if (!is_bomb_used)
		{
			is_row_safe = 4;
			is_bomb_used = true;
			get_max_coins(board, is_row_safe, row - 1, col - 1, is_bomb_used, coins);
			get_max_coins(board, is_row_safe, row - 1, col, is_bomb_used, coins);
			get_max_coins(board, is_row_safe, row - 1, col + 1, is_bomb_used, coins);
		}
	}

}

int main()
{
	int num_of_test_cases;
	cin >> num_of_test_cases;
	vector<int> results;

	for (int t = 0; t < num_of_test_cases; t++)
	{
		num_of_columns = 5;
		cin >> num_of_rows;
		vector<vector<int>> board(num_of_rows,vector<int>(num_of_columns,0));

		max_coins = 0;


		for (int i = 0; i < num_of_rows; i++)
		{
			for (int j = 0; j < num_of_columns; j++)
			{
				cin >> board[i][j];
			}
		}


		get_max_coins(board, 0, num_of_rows - 1, 1, false, 0);
		get_max_coins(board, 0, num_of_rows - 1, 2, false, 0);
		get_max_coins(board, 0, num_of_rows - 1, 3, false, 0);


		results.push_back(max_coins);



	}

	for (int i = 0; i < results.size(); i++)
	{
		cout << "#" << i + 1 << " " << results[i] << endl;
	}

}