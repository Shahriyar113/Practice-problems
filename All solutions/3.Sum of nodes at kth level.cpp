/*#include<iostream>
#include<string>
#include<climits>

using namespace std;

int get_sum(string str, int k)
{
	int max = INT_MIN;
	int current_level = -1;

	int sum = 0;
	for (int i = 0; i < str.size(); i++)
	{
		if (str[i] == '(')
			current_level += 1;
		else if (str[i] == ')')
			current_level -= 1;
		else
		{
			if (current_level == k)
			{
				string num_str;
				while (str[i] != '(' && str[i] != ')')
				{
					num_str.push_back(str[i]);
					i++;
				}
				sum += stoi(num_str);
				i--;
			}

		}

	}

	return sum;

}

int main()
{
	string str;
	int k;

	cin >> k >> str;

	cout << get_sum(str, k) << endl;


}*/