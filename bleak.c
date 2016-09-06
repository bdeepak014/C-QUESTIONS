#include<stdio.h>
int count_bits(int x)
{
	int c=0;
	while(x)
	{
		if(x&1) c++;
 		x=x>>1;
	}
	return c;
}
int main()
{
	int n;
	printf("%d",&n);
	bool flag=true;
	for(int i=1;i<=n;i++)
	{
 		int x=i+count_bits(i);
  		if(x==n)
		{
  			flag=false;
 			break;  
  		}
	}
	// flag?cout<<"Bleak\n":cout<<"Not bleak";
	flag?printf("Bleak\n"):printf("Not Bleak\n");
	return 0;
}

