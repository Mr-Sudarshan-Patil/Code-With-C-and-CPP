
#include<bits/stdc++.h>
using namespace std;
int maxWater(int arr[], int n)
{
	int res = 0;
	for (int i = 1; i < n-2; i++) {
		int left = arr[i];
		for (int j=0; j<i; j++)
		left = max(left, arr[j]);
		int right = arr[i];
		for (int j=i+1; j<n; j++)
		right = max(right, arr[j]);
	res = res + (min(left, right) - arr[i]);
	}
	return res;
}

// Driver code
int main()
{
	int arr[] = {8,0,1,0,2,1,0,1,3};
	int n = 8;
	
	cout << maxWater(arr, n);
	
	return 0;
}
