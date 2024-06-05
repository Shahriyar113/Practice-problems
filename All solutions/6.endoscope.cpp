/*#include<iostream>
#include<climits>
#include<vector>
#include<queue>

using namespace std;

vector<vector<int>> map;
vector<vector<int>> visited;

struct Node {
	int x;
	int y;
	int length;
};

bool valid(int x, int y)
{
	int N = map.size();
	int M = map[0].size();
	if (x >= 0 && x < N && y >= 0 && y < M)
		return true;
	else
		return false;
}

bool left(int x, int y)
{
	return (map[x][y] == 1 || map[x][y] == 3 || map[x][y] == 6 || map[x][y] == 7);
}

bool right(int x, int y)
{
	return (map[x][y] == 1 || map[x][y] == 3 || map[x][y] == 4 || map[x][y] == 5);
}

bool up(int x, int y)
{
	return (map[x][y] == 1 || map[x][y] == 2 || map[x][y] == 4 || map[x][y] == 7);
}

bool down(int x, int y)
{
	return (map[x][y] == 1 || map[x][y] == 2 || map[x][y] == 5 || map[x][y] == 6);
}


int bfs(int x,int y,int l)
{
	int num_of_pipe_observed = 0;
	
	Node root = { x,y,l };
	queue<Node> q;
	q.push(root);
	visited[x][y] = 1;

	while (!q.empty())
	{
		Node popped_node = q.front();
		q.pop();
		
		int curr_x = popped_node.x;
		int curr_y = popped_node.y;
		int curr_l = popped_node.length;
		if (curr_l == 0)
			continue;
		if (valid(curr_x, curr_y - 1) && visited[curr_x][curr_y - 1] == 0 && left(curr_x, curr_y) && right(curr_x, curr_y - 1))
		{
			q.push({ curr_x,curr_y - 1,curr_l - 1 });
			visited[curr_x][curr_y - 1] = 1;
		}
		if (valid(curr_x, curr_y + 1) && visited[curr_x][curr_y + 1] == 0 && right(curr_x, curr_y) && left(curr_x, curr_y + 1))
		{
			q.push({ curr_x,curr_y + 1,curr_l - 1 });
			visited[curr_x][curr_y + 1] = 1;
		}
		if (valid(curr_x-1, curr_y) && visited[curr_x-1][curr_y] == 0 && up(curr_x, curr_y) && down(curr_x-1, curr_y))
		{
			q.push({ curr_x-1,curr_y,curr_l - 1 });
			visited[curr_x-1][curr_y] = 1;
		}
		if (valid(curr_x+1, curr_y) && visited[curr_x+1][curr_y] == 0 && down(curr_x, curr_y) && up(curr_x+1, curr_y))
		{
			q.push({ curr_x+1,curr_y,curr_l - 1 });
			visited[curr_x+1][curr_y] = 1;
		}


		num_of_pipe_observed++;



	}

	return num_of_pipe_observed;


}





int main()
{
	int num_of_test_cases;
	cin >> num_of_test_cases;
	vector<int> results;


	for (int i = 0; i < num_of_test_cases; i++)
	{
		int N, M, R, C, L;
		cin >> N >> M >> R >> C >> L;
		map.assign(N, vector<int>(M, 0));
		visited.assign(N, vector<int>(M, 0));

		for (int j = 0; j < N; j++)
		{
			for (int k = 0; k < M; k++)
			{
				cin >> map[j][k];
			}
		}

		if (map[R][C] != 0)
		{
			int res = bfs(R, C, L);
			results.push_back(res);
		}
		else
			results.push_back(0);

	}

	for (int res : results)
	{
		cout << res << endl;
	}

}
*/
