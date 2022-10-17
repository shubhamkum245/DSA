// Given an Array of Size N & quries of the format s & e
// Return the sum of elements from s to e
// A: -3 6 2 4 5 2 8 -9 3 1  Q=4
#include <iostream>
using namespace std;

int main()
{
	int n;
	cin >> n;
	int arr[n];
	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
	}
	int sum = 0;
	int Q = 4;
	int s, e;
	cin >> s >> e;
	for (int i = 0; i < Q; i++)
	{
		for (int j = s; j <= e; j++)
		{
			sum = sum + arr[j];
		}
		cout << sum << endl;
	}
	return 0;
}
