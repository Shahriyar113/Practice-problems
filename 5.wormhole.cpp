/*#include<iostream>
#include<climits>
#include<vector>
#include<cmath>

using namespace std;

vector<vector<int>> adjacency_matrix;

int get_distance(pair<int, int> p1, pair<int, int> p2)
{
	return (abs(p1.first - p2.first) + abs(p1.second - p2.second));
}


void gen_graph(vector<pair<int, int>> vertex_list,vector<int> warmhole_distances)
{
	int size = vertex_list.size();
	adjacency_matrix.assign(size, vector<int>(size, 0));

	for (int i = 0; i < size; i++)
	{
		for (int j = 0; j < size; j++)
		{
			if (i != j)
			{
				if (i % 2 == 1 && i != (size - 1))
				{
					adjacency_matrix[i][j] = warmhole_distances[i / 2] + get_distance(vertex_list[i + 1], vertex_list[j]);
				}
				else if(i % 2 == 0 && i != 0)
				{
					adjacency_matrix[i][j] = warmhole_distances[i / 2 - 1] + get_distance(vertex_list[i - 1], vertex_list[j]);
				}
				else
				{
					adjacency_matrix[i][j] = get_distance(vertex_list[i], vertex_list[j]);
				}
			}
		}
	}


}


void print_adjacency_matrix()
{
	for (int i = 0; i < adjacency_matrix.size(); i++)
	{
		for (int j = 0; j < adjacency_matrix.size(); j++)
		{
			cout << adjacency_matrix[i][j] << " ";

		}
		cout << endl;
	}

}

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




int get_min_distance(int root, vector<char> new_visited)
{
	//vector<char> new_visited = old_visited;
	new_visited[root] = 'V';

	if (root == adjacency_matrix.size() - 1)
		return 0;

	int min_cost = INT_MAX;

	for (int i = 0; i < adjacency_matrix.size(); i++)
	{
		if (root != i && new_visited[i] == 'U')
		{
			int cost = adjacency_matrix[root][i] + get_min_distance(i, new_visited);
			if (cost < min_cost)
			{
				min_cost = cost;
			}
		}
	}

	return min_cost;


}

int main()
{
	int num_of_test_cases;
	cin >> num_of_test_cases;
	vector<int> results;

	for (int i = 0; i < num_of_test_cases; i++)
	{
		vector<pair<int, int>> vertex_list;

		int num_of_warmholes,sx,sy,dx,dy;
		cin >> num_of_warmholes;
		cin >> sx >> sy >> dx >> dy;
		pair<int, int> source = { sx,sy };
		pair<int, int> dest = { dx,dy };
		vertex_list.push_back(source);
		vector<int> warmhole_distances(num_of_warmholes,0);


		for (int k = 0; k < num_of_warmholes; k++)
		{
			int startx, starty, endx, endy, cost;
			cin >> startx >> starty >> endx >> endy >> cost;
			vertex_list.push_back({ startx,starty });
			vertex_list.push_back({ endx,endy });
			warmhole_distances[k] = cost;
		}

		vertex_list.push_back(dest);

		vector<char> old_visited(vertex_list.size(), 'U');

		gen_graph(vertex_list, warmhole_distances);
		results.push_back(get_min_distance(0, old_visited));
		//print_adjacency_matrix(adj_matrix);


	}

	for (int x : results)
	{
		cout << x << endl;
	}

}*/