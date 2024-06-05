/*#include <iostream>
#include <algorithm>
#include <vector>
#include <cmath>
#include <climits>

using namespace std;


int num_of_customers;
int src_x,src_y,dest_x,dest_y;
vector<int> visited;
vector<int> X;
vector<int> Y;
int min_cost;

void initialize()
{
	X.clear();
	Y.clear();
	visited.assign(num_of_customers, 0);
	min_cost = INT_MAX;
}

int get_distance(int x1,int y1,int x2,int y2)
{
	return (abs(x1 - x2) + abs(y1 - y2));
}

void explore(int root, int cost, int remaining_nodes)
{
	if (remaining_nodes <= 1)
	{
		int curr_cost = cost + get_distance(dest_x,dest_y, X[root],Y[root]);
		if (curr_cost < min_cost)
			min_cost = curr_cost;
		return;
	}

	visited[root] = 1;

	for (int i = 0; i < num_of_customers; i++)
	{
		if (visited[i] == 0)
			explore(i, cost + get_distance(X[root], Y[root],X[i],Y[i]), remaining_nodes - 1);
	}

	visited[root] = 0;

}




int main()
{
	int num_of_test_cases = 10;
	//cin >> num_of_test_cases;
	vector<int> results;

	for (int i = 0; i < num_of_test_cases; i++)
	{
		cin >> num_of_customers;
		initialize();

		int x, y;
		cin >> src_x >> src_y >> dest_x >> dest_y;
		
		for (int k = 0; k < num_of_customers; k++)
		{
			cin >> x >> y;
			X.push_back(x);
			Y.push_back(y);
		}

		for (int k = 0; k < num_of_customers; k++)
		{
			if (visited[k] == 0)
			{
				explore(k, get_distance(src_x,src_y, X[k],Y[k]), num_of_customers);
			}
		}

		results.push_back(min_cost);


	}

	for (int i = 0; i < results.size(); i++)
	{
		cout << "# " << i + 1 << " " << results[i] << endl;
	}



}*/
