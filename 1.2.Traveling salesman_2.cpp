/*#include<iostream>
#include<vector>
#include<climits>
using namespace std;
vector<vector<int>> cost_matrix;


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

void build_graph(int num_of_nodes,vector<int> A,vector<int> C)
{
	for (int i = 0; i < num_of_nodes; i++)
	{
		for (int j = 0; j < num_of_nodes; j++)
		{
			if (i != j)
			{
				cost_matrix[i][j] = max(C[i], A[j] - A[i]);
			}
		}
	}

}



double get_min_cost(int root,vector<char> visited,int remaining_nodes)
{
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
	int num_of_nodes;
	cin >> num_of_nodes;
	vector<int> A(num_of_nodes, 0);
	vector<int> C(num_of_nodes, 0);
	cost_matrix.assign(num_of_nodes, vector<int>(num_of_nodes, 0));
	for (int i = 0; i < num_of_nodes; i++)
	{
		cin >> A[i] >> C[i];
	}

	build_graph(num_of_nodes, A, C);

	vector<char> visited(num_of_nodes, 'U');
	cout << get_min_cost(0, visited, num_of_nodes) << endl;
}*/






