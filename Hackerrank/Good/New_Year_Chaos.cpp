//Satyemeva Jayate 

#include <bits/stdc++.h>
using namespace std;

#define endl "\n"

int main()
{
	int i,j,t,x,y,n,flag,arr[100005],cou=0,swap;
	ios_base::sync_with_stdio(false);
	cin.tie(0);cout.tie(0);
	cin >> t; // test cases
	for(i=0;i<t;i++)
	{
		flag=0;
		int count[1000005]={0};
		cin >> n;
		for(j=0;j<n;j++)
		{
			cin >> arr[j];
		}
		for(x=0;x<n;x++)
		{
			for(y=x+1;y<n;y++)
			{
				if( arr[x] > arr[y])
				{
					if( count[arr[x]] >= 2 || count[arr[y]] >= 2)
					{
						flag = 1;
						break;
					}
					count[arr[x]]++;
					count[arr[y]]++;
					swap =arr[x];
					arr[x] = arr[y];
					arr[y] = swap;
					cou++;
					
				}
			}
			if(flag==1)
				break;
		}
		if( flag == 0)
			cout <<cou<<endl;
		else
			cout <<"Too chaotic\n";
		
	}
	return 0;
}
