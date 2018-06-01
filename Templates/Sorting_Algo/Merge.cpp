// Satyameva Jayate

#include <bits/stdc++.h>
using namespace std;

void merge(int arr1[],int start,int end,int mid)
{
	int p,q,n1,n2,i,j,k;
	p = start;
	q = end;

	n1 = mid - start+1; // size of two sub arrays
	n2 = end - mid;

	int L[n1],R[n2]; // Sub Arrays

	for(i=0;i<n1;i++)  
		L[i]=arr1[p+i];

	for(i=0;i<n2;i++)   // Sub Array Initialised
		R[i]=arr1[mid+1+i]; 

	i=0;
	j=0;
	k=p;
	while(i<n1 && j<n2)
	{
		if( L[i] <= R[j])
		{
			arr1[k]=L[i];
			i++;
		}
		else
		{
			arr1[k] = R[j];
			j++;
		}
		k++;
	}

	while(i<n1)
	{
		arr1[k]=L[i];
		i++;
		k++;
	}
	while(j<n2)
	{
		arr1[k]=R[j];
		j++;
		k++;
	}
}

void merge_sort(int arr2[],int start,int end)
{
	if( start < end)
	{
		int mid =  start + (end - start)/2;

		merge_sort(arr2,start,mid);

		merge_sort(arr2,mid+1,end);

		merge(arr2,start,end,mid);
	}
}

int main()
{
	int n,i,arr[100];
	cin >> n; // No. of integers
	for(i=0;i<n;i++)
		cin >> arr[i];

	merge_sort(arr,0,n-1); // Here n-1 is there instead of n because above function of merge is written such that arr[start] as well as arr[end] contains some element

	for(i=0;i<n;i++)
	{
		cout << arr[i]<<" ";
	}
	cout << endl;
	return 0;
}
