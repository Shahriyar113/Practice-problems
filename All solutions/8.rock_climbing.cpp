/*#include<iostream>
#include<vector>

using namespace std;

vector<vector<int>> map;
vector<vector<int>> visited;
int N, M;
bool is_climbed;

void reset_visited()
{
	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < M; j++)
		{
			visited[i][j] = 0;
		}
	}
}

void print_matrix(vector<vector<int>> mat)
{
	int N = mat.size();
	int M = mat[0].size();
	for (int j = 0; j < N; j++)
	{
		for (int k = 0; k < M; k++)
		{
			cout << mat[j][k] << " ";
		}
		cout << endl;
	}

}



void climb(int x, int y, int jump)
{
	if (x < 0 || x >= N || y < 0 || y >= M)
		return;
	if (visited[x][y] == 1)
		return;
	if (map[x][y] == 0)
		return;
	if (map[x][y] == 3)
	{
		is_climbed = true;
		return;
	}

	visited[x][y] = 1;
	climb(x, y + 1, jump);
	climb(x, y - 1, jump);
	for (int i = 0; i <= jump; i++)
	{
		climb(x + i, y, jump);
		climb(x - i, y, jump);
	}


}


int main()
{
	cin >> N >> M;
	map.assign(N, vector<int>(M, 0));
	visited.assign(N, vector<int>(M, 0));

	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < M; j++)
		{
			cin >> map[i][j];
		}
	}

	is_climbed = false;
	for (int jump = 0; jump <= N; jump++)
	{
		reset_visited();
		climb(N - 1, 0, jump);
		if (is_climbed)
		{
			cout << jump << endl;
			return 0;
		}
	}

	return 0;
}
*/