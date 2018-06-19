// Satyameva Jayate

#include <bits/stdc++.h>
using namespace std;

#define ll long long 
#define endl "\n"

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);
	int i,j,k,X[200],Y[200],A[200],B[200],a,b,c,d;
	for(i=0;i<4;i++)
	{
		cin >> X[i];
		cin >> Y[i];
	}
	for(i=0;i<4;i++)
	{
		cin >> A[i];
		cin >> B[i];
	}
	j=1;
	k=1;
	for(i=0;i<4;i++)
	{

		if( Y[i]-Y[(i+1)%4] == 0)
		{
			if(j==1) // Parallel to x axis
				a = Y[i]; // Line 1
			else
				b = Y[i]; // Line 2
			j++;
			//		y[j++]-Y[i]; 
		}

		else
		{
			if(k==1) // Parallel to y axis
				c = X[i]; // Line 3
			else

				d = X[i]; // Line 4
			k++;
		}
		//		x[k++]-X[i];

	}
	//	cout << "a "<<a<<" b "<< b<<" c "<< c<<" d "<<d<<endl;
	int flag=0,a1,b1;
	for(i=0;i<4;i++)
	{
		a1 = A[i]; // X
		b1 = B[i]; // Y

		if( (b1-a)*(b1-b) <=0 && (a1-c)*(a1-d) <=0)
			flag=1;
	}
	if(flag !=1)
	{
		j=1;
		k=1;
		for(i=0;i<4;i++)
		{

			if( B[i]-B[(i+1)%4] == 0)
			{
				if(j==1) // Parallel to x axis
					a = B[i]; // Line 1
				else
					b = B[i]; // Line 2
				j++;
				//		y[j++]-Y[i]; 
			}

			else
			{
				if(k==1) // Parallel to y axis
					c = A[i]; // Line 3
				else

					d = A[i]; // Line 4
				k++;
			}
			//		x[k++]-X[i];

		}
		//	cout << "a "<<a<<" b "<< b<<" c "<< c<<" d "<<d<<endl;
		for(i=0;i<4;i++)
		{
			a1 = X[i]; // X
			b1 = Y[i]; // Y

			if( (b1-a)*(b1-b) <=0 && (a1-c)*(a1-d) <=0)
				flag=1;
		}
	}
	if( flag==1)
		cout << "YES\n";
	else
		cout <<"NO\n";
	return 0;
}
