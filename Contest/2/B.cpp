// Satyameva Jayate

#include <bits/stdc++.h>
using namespace std;

#define ll long long 
#define l  double 
#define endl "\n"

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);
	int n,i,arr[1005],temp,j;
	cin >> n;
	char str[105][105];
	char stri[105];
	for(i=0;i<n;i++)
	{
		cin >> str[i];
		arr[i]=strlen(str[i]);
	}
	for(i=0;i<n-1;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(arr[i]>arr[j])
			{
				temp = arr[i];
				arr[i]=arr[j];
				arr[j]=temp;

				strcpy(stri,str[i]);
				strcpy(str[i],str[j]);
				strcpy(str[j],stri);
			}
		}
	}
	int flag=0;
	for(i=0;i<n-1;i++)
	{
		if ( strstr(str[i+1],str[i]) == NULL)
		{
			flag=1;
			break;
		}
	}
	if(flag==1)
		cout <<"NO\n";
	else
	{
		cout << "YES\n";
		for(i=0;i<n;i++)
		{
			cout << str[i]<<endl;
		}
	}
return 0;
}
