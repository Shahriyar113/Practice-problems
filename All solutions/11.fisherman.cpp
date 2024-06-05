/*#include <iostream>
#include <algorithm>
#include <vector>
#include <cmath>
#include <climits>

using namespace std;

int n, gp1, gp2, gp3, nf1, nf2, nf3;
int min_distance = INT_MAX;


void solve()
{
	for (int i = 1; i <= n - nf2 - nf3; i++)
	{
		for (int j = i + nf1; j <= n - nf3; j++)
		{
			for (int k = j + nf3; k <= n; k++)
			{
				int dis = 0;
				for (int p = i; p < i + nf1; p++)
					dis += abs(gp1 - p);
				for (int p = j; p < j + nf2; p++)
					dis += abs(gp2 - p);
				for (int p = k; p < k + nf3; p++)
					dis += abs(gp3 - p);

				dis += nf1 + nf2 + nf3;
				min_distance = min(min_distance, dis);
				
			}
		}
	}
}

int main()
{
	cin >> n;
	cin >> gp1 >> gp2 >> gp3;
	cin >> nf1 >> nf2 >> nf3;
	solve();
	cout << min_distance << endl;	
}*/