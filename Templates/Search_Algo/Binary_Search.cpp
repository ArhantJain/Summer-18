// Satyameva Jayate 

#include <bits/stdc++.h>
using namespace std;

int bs(int arr[],int start,int end,int key)
{
	int p,q,mid;
	p = start;
	q = end;
	mid = p + ( q-p)/2;
	if(start <= end)
	{

		if( arr[mid]==key)
			return mid;

		else if( arr[mid]>key)
			return bs(arr,start,mid-1,key);
		else
			return bs(arr,mid+1,end,key);
	}
	else 
		return -1;
}

int main()
{
	int i,arr[100],key,y,n;
	cin >> n;
	for(i=0;i<n;i++)
	{
		cin >> arr[i];
	}
	cin >> key;
	sort(arr,arr+n);
	y=bs(arr,0,n,key);
	if(y == -1)
		cout<<"Element is not present in the array\n";
	else
		cout <<"Element is present at "<<y<<" index of the sorted array\n";
	return 0;
}

