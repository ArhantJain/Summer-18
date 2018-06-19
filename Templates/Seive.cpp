/* If a number n is not a prime, it can be factored into two factors a and b:

n = a*b

If both a and b were greater than the square root of n, a*b would be greater than n. So at least one of those factors must be less or equal to the square root of n, and to check if n is prime, we only need to test for factors less than or equal to the square root.

*/

#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n,i,j,arr[10000];
	cin >> n; // i.e Prime Till n
	memset(arr,0,n*sizeof(int));
	for(i=2;i<=sqrt(n);i++)
	{
		if( arr[i] == 0)
		{
			for(j=2;j<n;j++)
			{
				arr[j*i]=1;
			}
		}
	}
	for(i=2;i<n;i++)
	{
		if( arr[i] == 0)
			cout << i  << " ";
	}
	cout << endl;
	return 0;
}
