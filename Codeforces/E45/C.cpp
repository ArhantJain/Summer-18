// Satyameva Jayate

#include <bits/stdc++.h>
using namespace std;

#define ll long long 
#define d  double 
#define endl "\n"
const int N=3*1e5+5;


int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);
	char str[N];
	ll int num,flag=0,min,T1[N]={0},T2[N]={0},i,ans=0,n,j,l,count;
	cin >> n;
	for(i=0;i<n;i++)
	{
		cin >> str;
		count=0;
		flag=0;
		min =0;
		l = strlen(str); // length
		for(j=0;j<l;j++)
		{
			if(str[j] == '(')
				count++;
			else
				count--;
			if(count<0) // means string is off Type-2
			{
				flag=1;
				if( count < min)  // To set the minimum extent of closed bracket ( problem in "())" & "))(" case)
					min = count;
			}
		}
		if( flag==0) // Type-1 string
		{
			T1[count]++;
		}
		else // Error Case ki possibility hot skti he yha
		{
			if( count<0 && min>=count) // count >=0 means dokha i.e string is of both type 1 and type 2
						   // min >=count avoid this case into consideration "())" & "))("
			{
				T2[-count]++;
			}
		}
	}
	num = T1[0];
	ans = num*num;
	for(i=1;i<N;i++)
	{
		ans += T1[i]*T2[i];
	}
	cout << ans << endl;
	return 0;
}
