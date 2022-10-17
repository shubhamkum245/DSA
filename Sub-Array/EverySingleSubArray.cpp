// Qns --> Print the sum of every single sub-array
// 3 2 -1 4

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
	// int s, e;
	// cin >> s >> e;

	int sum = 0;

	for (int i = 0; i < n; i++)
	{
		for (int j = i; j < n; j++)
		{
			sum = arr[i] + arr[j];
		}
	}
	cout << sum << endl;

	return 0;
}