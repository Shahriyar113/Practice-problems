/*#include<iostream>
#include<vector>
#include<algorithm>
#include<climits>

using namespace std;
vector<vector<int>> adj_matrix;
vector<int> visited; 
vector<int> stack; //store the list of nodes which are not fully explored yet
vector<int> min_cycle;
int min_cycle_length;
int num_of_nodes, num_of_edges;


void print_stack(vector<int> st)
{
	cout << "[ ";
	for (int x : st)
		cout << x << " ";
	cout << "]" << endl;
}

void print_matrix(vector<vector<int>> mat)
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
void dfs(int root)
{
	cout << root << endl;
	print_stack(stack);
	if (visited[root] == 1 && stack.size() != 0)
	{
		//a cycle is detected
		int top = stack.size() - 1;
		int curr_sum = stack[top];

		for (int i = top-1; i >= 0; i--)
		{
			if (stack[i] == root)
				break;
			else
				curr_sum += stack[i];
		}

		//cout << curr_sum << endl;

		if (curr_sum < min_cycle_length)
		{
			min_cycle.clear();
			min_cycle_length = curr_sum;
			min_cycle.push_back(stack[top]);
			for (int i = top-1; i >= 0; i--)
			{
				if (stack[i] == root)
					break;
				else
					min_cycle.push_back(stack[i]);
			}
		}


	}
	else
	{
		visited[root] = 1; 
		

		for (int i = 1; i <= num_of_nodes; i++)
		{
			
			if (adj_matrix[root][i] == 1)
			{
				stack.push_back(i);
				dfs(i);
				stack.pop_back();
			}
		}

		visited[root] = 0;
	}
}



int main()
{
	cin >> num_of_nodes >> num_of_edges;
	//initializing
	adj_matrix.assign(num_of_nodes+1, vector<int>(num_of_nodes+1, 0)); // 1 based indexing
	visited.assign(num_of_nodes+1, 0); // 1 based indexing
	min_cycle_length = INT_MAX; 

	for (int i = 0; i < num_of_edges; i++)
	{
		int node1, node2;
		cin >> node1 >> node2;
		adj_matrix[node1][node2] = 1;
	}

	for (int i = 1; i <= num_of_nodes; i++)
	{
		if (visited[i] == 0)
		{
			stack.push_back(i);
			dfs(i);
			stack.pop_back();
		}
	}

	sort(min_cycle.begin(), min_cycle.end());

	for (int x : min_cycle)
		cout << x << " ";


}

*/