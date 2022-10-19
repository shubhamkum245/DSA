// Q1 Right rotate an array by K times
// 3 -2 1 4 6 9 8
#include <iostream>
using namespace std;
void RightRotate(int a[], int n, int k)
{

	// If rotation is greater
	// than size of array
	k = k % n;

	for (int i = 0; i < n; i++)
	{
		if (i < k)
		{

			// Printing rightmost
			// kth elements
			cout << a[n + i - k] << " ";
		}
		else
		{

			// Prints array after
			// 'k' elements
			cout << (a[i - k]) << " ";
		}
	}
	cout << "\n";
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
	RightRotate(arr, n, k);

	return 0;
}