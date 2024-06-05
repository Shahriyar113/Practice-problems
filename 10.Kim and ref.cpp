/*
#include <iostream>
#include <algorithm>
#include <vector>
#include <cmath>
#include <climits>

using namespace std;


int num_of_customers;
pair<int, int> src;
pair<int, int> dest;
vector<pair<int, int>> customer_locations;
vector<int> visited;
int min_cost;

void initialize()
{
	customer_locations.clear();
	visited.assign(num_of_customers, 0);
	min_cost = INT_MAX;
}

int get_distance(pair<int, int> p1, pair<int, int> p2)
{
	return (abs(p1.first - p2.first) + abs(p1.second - p2.second));
}

void explore(int root,int cost,int remaining_nodes)
{
	if (remaining_nodes <= 1)
	{
		int curr_cost = cost + get_distance(dest, customer_locations[root]);
		if (curr_cost < min_cost)
			min_cost = curr_cost;
		return;
	}

	visited[root] = 1;

	for (int i = 0; i < num_of_customers; i++)
	{
		if (visited[i] == 0)
			explore(i, cost + get_distance(customer_locations[root], customer_locations[i]), remaining_nodes - 1);
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

		int sx, sy, dx, dy,x,y;
		cin >> sx >> sy >> dx >> dy;
		src = { sx,sy };
		dest = { dx,dy };

		for (int k = 0; k < num_of_customers;k++)
		{
			cin >> x >> y;
			customer_locations.push_back({ x,y });
		}

		for (int k = 0; k < num_of_customers; k++)
		{
			if (visited[k] == 0)
			{
				explore(k, get_distance(src, customer_locations[k]),num_of_customers );
			}
		}

		results.push_back(min_cost);


	}

	for (int i = 0; i < results.size(); i++)
	{
		cout << "# " << i + 1 << " " << results[i] << endl;
	}





}
*/