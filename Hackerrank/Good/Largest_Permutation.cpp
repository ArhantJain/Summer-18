// Satyameva Jayate

#include <bits/stdc++.h>
using namespace std;

#define ll long long 
#define l  double 
#define endl "\n"

int main()
{
	int n,k,i,arr[100005],idx[100005],tmp,tmp2;
	cin >> n >> k;
	for(i=0;i<n;i++)
	{
		cin >> arr[i];
		idx[arr[i]] = i;   // This array saves the index of all the element ( natural no.)
	}
	i=0; // Pointing to the element in the array
	while( i<n-1 && i<k)  // 
	{
		if( arr[i] == n-i-1)
		{
			i++;
			continue;
		}

			tmp = idx[n-i-1]; // Index of largest element
			swap(arr[i],arr[tmp]); // Elements are swapped now swap their index
			tmp2 = idx[arr[i]];  // 
			idx[arr[i]] = idx[n-i-1];
			idx[n-i-1]= tmp2;
			i++; // Now move to next element
			k--; // No. of swap decreased by 1
	}
	for(i=0;i<n;i++)
	{
		cout << arr[i]<<" ";
	}
	cout << endl;
	return 0;
}
