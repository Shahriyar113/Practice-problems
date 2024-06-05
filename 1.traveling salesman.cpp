/*#include<iostream>
#include<vector>
#include<climits>
using namespace std;
vector<vector<double>> cost_matrix;


vector<char> get_copy(vector<char> old_visited)
{
	int size = old_visited.size();
	vector<char> new_visited(size, 'U');
	for (int i = 0; i < size; i++)
	{
		new_visited[i] = old_visited[i];
	}
	return new_visited;

}

void print_matrix(vector<vector<double>> mat)
{
	int size = mat.size();
	for (int j = 0; j < size; j++)
	{
		for (int k = 0; k < size; k++)
		{
			cout << mat[j][k] << " ";
		}
		cout << endl;
	}

}

double get_min_cost(int root,vector<char> old_visited,int remaining_nodes)
{
	vector<char> visited = get_copy(old_visited);
	visited[root] = 'V';
	remaining_nodes--;

	if (remaining_nodes == 0)
		return cost_matrix[root][0];

	double mincost = INT_MAX;
	for (int i = 0; i < cost_matrix.size(); i++)
	{
		if (root != i and visited[i] == 'U')
		{
			double cost = cost_matrix[root][i] + get_min_cost(i, visited, remaining_nodes);
			if (cost < mincost)
				mincost = cost;
		}
	}

	return mincost;



}

int main()
{
	int num_of_testcases;
	cin >> num_of_testcases;
	vector<double> results;
	for (int i = 0; i < num_of_testcases; i++)
	{
		int num_of_nodes;
		cin >> num_of_nodes;
		cost_matrix.assign(num_of_nodes, vector<double>(num_of_nodes, 0));

		for (int j = 0; j < num_of_nodes; j++)
		{
			for (int k = 0; k < num_of_nodes; k++)
			{
				cin >> cost_matrix[j][k];
			}
		
		}

		vector<char> visited(num_of_nodes, 'U');
		double min_cost = get_min_cost(0,visited,num_of_nodes);
		results.push_back(min_cost);
		
	}

	for (int i = 0; i < results.size(); i++)
	{
		cout << results[i] << endl;
	}
}*/