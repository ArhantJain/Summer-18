// Satyameva Jayate

#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n,arr[100],temp,i,j;
	cin >> n; // No. of integers
	for(i=0;i<n;i++)
		cin >> arr[i];

	for(i=0;i<n-1;i++)
	{
		for(j=0;j<n-i-1;j++) // minus i denoted the ignoration of those comparsion which are already compared.(max element goes to last positin in first time of outer loop, it is the smallest element which takes time to go to the first position
		{
			if( arr[j]>arr[j+1])
			{
				temp = arr[j];
				arr[j] = arr[j+1];
				arr[j+1] = temp;
			}
		}
	}
	for(i=0;i<n;i++)
	{
		cout << arr[i]<<" ";
	}
	cout << endl;
	return 0;
}
