/*#include<iostream>
#include<vector>

using namespace std;
vector<vector<int>> dp;


int get_max_score(vector<int> arr)
{
	int N = arr.size();
	
	for (int l = 1; l <= N; l++)
	{
		for (int i = 0; i <= N - l; i++)
		{
			int j = i + l - 1;
			int max_sub_score = 0;
			
			for (int k = i; k <= j; k++)
			{
				int left = (i == k) ? 0 : dp[i][k - 1];
				int right = (j == k) ? 0 : dp[k + 1][j];
				int val;

				if (i-1 >= 0 && j+1 <= N - 1)
				{
					val = arr[i - 1] * arr[j + 1];
				}
				else if (i - 1 < 0 && j + 1 > N - 1)
				{
					val = arr[k];
				}
				else if (i - 1 < 0)
				{
					val = arr[j + 1];
				}
				else
				{
					val = arr[i - 1];
				}

				int score = left + right + val;
				if (score > max_sub_score)
					max_sub_score = score;

			}

			dp[i][j] = max_sub_score;

		}
	}

	return dp[0][N - 1];
}


int main()
{
	int N;
	cin >> N;
	vector<int> arr(N,0);

	for (int i = 0; i < N; i++)
	{
		cin >> arr[i];
	}

	dp.assign(N, vector<int>(N, 0));
	cout << get_max_score(arr) << endl;

}
*/