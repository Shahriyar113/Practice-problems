//https://www.geeksforgeeks.org/find-element-position-in-given-monotonic-sequence/
/*
#include<iostream>
#include<vector>
#include<cmath>
#include<climits>

using namespace std;

long long func(long long a, long long b,long long c ,long long n)
{
	long long rounded_log = floor(log2(n));
	return (a * n + b * rounded_log * n + c * n * n * n);
}


int get_n(long long a, long long  b, long long c, long long k)
{
	long long low = 1;
	long long high = 1000000;

	long long small = 1000000;
	long long large = 1000000000000000;

	if (c == 0)
		high = large;
	else
		high = small;


	while (low <= high)
	{
		long long mid = (low + high) / 2;
		long long f_n = func(a, b, c, mid);
		if (f_n == k)
			return mid;
		if (f_n < k)
			low = mid + 1;
		else
			high = mid - 1;

	}

	return 0;

}

int main()
{	
	long long a = 2, b = 1, c = 1;
	long long k = 12168587437017;

	long long n = 250000000000000;

	cout << get_n(a, b, c, k) << endl;	

}*/
