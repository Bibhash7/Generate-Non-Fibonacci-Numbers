//Program to Generate Non Fibonacci Numbers upto nth Fibonacci
#include<bits/stdc++.h>
using namespace std;
int NonFibo(int n)
{
	int a=1,b=1,c,j=1;
	for(int i=1;i<=n;i++)
	{
		
		c=a+b;
		a=b;
		b=c;
		while(j<a && i!=n)
		{
			cout<<j<<" ";
			j++;
		}
		j++;
		
	}
}
int main()
{
	int n;
	cout<<"Enter Range:";
	cin>>n;
	cout<<"Non fibonacci Numbers are:"<<endl;
	NonFibo(n);
	return 0;
}
