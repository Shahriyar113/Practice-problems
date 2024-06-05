/*#include<iostream>
#include<vector>
#include<algorithm>
#include<climits>
#include<queue>

using namespace std;

struct compare {
	bool operator()(const pair<int, int> p1, const pair<int,int> p2) const {
		return p1.second < p2.second;
	}

};

int get_rows_with_all_1(vector<vector<int>> matrix, int n, int m)
{
	int count = 0;

	for (int i = 0; i < n; i++)
	{
		int sum = 0;
		for (int j = 0; j < m; j++)
		{
			sum += matrix[i][j];
		}

		if (sum == m)
			count += 1;

	}

	return count;
}

int get_max(vector<vector<int>> matrix,int n,int m,int k)
{
	priority_queue <pair<int, int>, vector<pair<int, int>>, compare> hashmap;

	for (int i = 0; i < m; i++)
	{
		int zero_counts = 0;

		for (int j = 0; j < n; j++)
		{
			if (matrix[j][i] == 0)
				zero_counts++;
		}

		hashmap.push({ i,zero_counts });
	}



	for(int p=0;p<k;p++)
	{
		pair<int, int> top_pair = hashmap.top();
		hashmap.pop();

		int toggled_column = top_pair.first;

		//toggling

		for (int i = 0; i < n; i++)
		{
			if (matrix[i][toggled_column] == 0)
				matrix[i][toggled_column] = 1;
			else
				matrix[i][toggled_column] = 0;
		}

		int new_zero_count = n - top_pair.second;
		hashmap.push({ toggled_column,new_zero_count });

		

	}



	return get_rows_with_all_1(matrix,n,m);

}

int main()
{
	int n, m, k;
	cin >> n >> m >> k;
	vector<vector<int>> matrix(n, vector<int>(m, 0));

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			cin >> matrix[i][j];
		}
	}

	cout << get_max(matrix, n, m, k);


}*/