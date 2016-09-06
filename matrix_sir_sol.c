#include<stdio.h>
void main()
{
	int zrows=0,zcolumns=0,size,i,j;
	scanf("%d",&size);
	int mat[size][size];
	for(i = 0; i < size; i++)
	{
		for(j = 0; j < size; j++)
		{	
			scanf("%d",&mat[i][j]);
			if(mat[i][j] == 0)
			{
				zrows = zrows | (1 << i);
				zcolumns = zcolumns | (1 << j);	
			}
		}
	}
	for(i = 0; i < 32; i++)
	{
		if((zrows & (1 << i)) != 0)
		{
			for(j = 0;j < size; j++)
			{
				mat[i][j] = 0;
			}
		}
	}
	for(j = 0; j < 32; j++)
	{
		if((zcolumns & (1 << j)) !=0)
		{
			for(i = 0;i < size; i++)
			{
				mat[i][j] = 0;
			}
		}
	}
	printf("OUTPUT:\n");
	for(i = 0; i < size; i++)
	{
		for(j = 0; j < size; j++)
		{
			printf("%d ",mat[i][j]);
		}
		printf("\n");
	}
	
}
