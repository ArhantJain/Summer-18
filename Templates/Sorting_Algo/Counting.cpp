// Satyameva Jayate

// Also Known as Bucket Sort

#include <bits/stdc++.h>
using namespace std;

const int N = 1e6+5;

int main()
{
	int n,arr[100],Aux[N]={0},i,max=-1,sorted[100];
	cin >> n; // No. of integers
	for(i=0;i<n;i++)
	{
		cin >> arr[i];
		Aux[arr[i]]++;
		if( arr[i]>max)
			max=arr[i];
	}
	// max is the size of Auxialary array

	int temp,k=0;
	for(i=0;i<=max;i++) // Traverse Auxialary Array
	{
		temp =Aux[i];
		while(temp)
		{
			sorted[k]= i;
			k++;
			temp--;
		}
	}

	for(i=0;i<n;i++)
	{
		cout << sorted[i]<<" ";
	}
	cout << endl;
	return 0;
}
