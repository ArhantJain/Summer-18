// It is used to fill block of memory with particular value

#include <bits/stdc++.h>
using namespace std;
int main()
{
	int arr[100],i;
	char str[100];
	memset(arr,0,100*sizeof(arr[0])); // We can set only 0 or -1 using memset
	memset(str,'t',100*sizeof(char));
	for(i=0;i<10;i++)
	{
		cout << arr[i] << " ";
	}
	cout << endl;
	for(i=0;i<10;i++)
	{
		cout << str[i] << " ";
	}
	cout << endl;
	return 0;
}

