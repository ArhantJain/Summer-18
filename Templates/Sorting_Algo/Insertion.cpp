// Satyameva Jayate

#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n,arr[100],temp,i,j,t;
	cin >> n; // No. of integers
	for(i=0;i<n;i++)
		cin >> arr[i];

	for(i=1;i<n;i++)
	{

		temp = arr[i];
		j=i-1;
		t=i;
		while(j>=0 && arr[j] > temp )
		{
			arr[t--]=arr[j];
			j--;
		}
		arr[j+1]=temp;
	}

	for(i=0;i<n;i++)
	{
		cout << arr[i]<<" ";
	}
	cout << endl;
	return 0;
}
