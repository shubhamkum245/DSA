// Print the Starting index & Ending index of All sub-array whose length=K!
// 3 4 2 -1 6 7 8 9 3 2 -1 4 K=6

#include <iostream>
using namespace std;

void printAllSubArray(int arr[], int n, int k)
{
	for (int i = 0; i <= n - k; i++)
	{
		int s = i;
		int e = i + k - 1;
		cout << "(" << s << " " << e << " "
			 << ") ";
	}
	cout << endl;
}

int main()
{
	int n;
	cin >> n;
	int arr[n];
	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
	}
	int k;
	cin >> k;
	printAllSubArray(arr, n, k);

	return 0;
}
