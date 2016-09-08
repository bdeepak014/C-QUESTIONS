#include<stdio.h>
int pow_2(int n)
{
	if((n&(-n))== n)
	return 1;
	else
	return 0;
}
main()
{
	int n;
	printf("Enter Element: ");
	scanf("%d",&n);
	printf("%d",pow_2(n));
}
