#include<iostream>
using namespace std;
void gcd(int m,int n)
{
	while(m != n)
	{
		if(m>n)
		m=m-n;
		else
		n=n-m;
	}
	cout<<n;
}
main()
{
	int m,n;
	cin>>m>>n;
	 gcd(m,n);
	
}
