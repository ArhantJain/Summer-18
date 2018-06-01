// Satyameva Jayate

#include <bits/stdc++.h>
using namespace std;

int partition(int arr[],int start,int end)
{
	int pivot,i,j;
	pivot = arr[start];
	i=start+1;
	for(j=start;j<=end;j++) // It will traverse the unpartitioned array
	{
		if( arr[j] < pivot)
		{
			swap(arr[j],arr[i]);
			i++;
		}
	}
	swap(arr[i-1],arr[start]);
	return i-1;
}

void quick_sort(int arr[],int start,int end)
{
	int pivot; // When start = end means we are at the root level and ab or neeche naa jao
	if( start < end ) 
	{
		pivot = partition(arr,start,end);

		quick_sort(arr,start,pivot-1);
		quick_sort(arr,pivot+1,end);
	}
}

int main()
{
	int n,arr[100],i;
	cin >> n; // No. of integers
	for(i=0;i<n;i++)
		cin >> arr[i];
	
	quick_sort(arr,0,n-1);
	
	for(i=0;i<n;i++)
	{
		cout << arr[i]<<" ";
	}
	cout << endl;
	return 0;
}
