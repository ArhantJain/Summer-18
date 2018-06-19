// Other Methods : Via HCF ( LCM*HCF = a*b)
	//   	   Via Inbuilt Function lcm(10,20); 

#include <bits/stdc++.h>
using namespace std;
int main()
{
	int a,b,max;
	cin >> a >> b;
	
	max = ( a > b)? a:b;

	while (1)
	{
		if( max %a == 0 && max%b == 0)
		{
			cout << max<<endl;
			break;
		}
		else
			max++;
	}
	return 0;
}
