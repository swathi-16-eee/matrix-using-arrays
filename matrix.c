#include<stdio.h>
main()
{
	int element[3][3];
	int i,j;
	int sum=0;
	printf("Input elements in the matrix:");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("\nelement-[%d],[%d]:",i,j);
			scanf("%d",&element[i][j]);
		}
    } 
    printf("The matrix is:\n");
    for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("%d\t",element[i][j]);
		}
		printf("\n");
    } 
    for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
		  if(i==j)
		  {
		  	sum= sum+element[i][j];
		  }	
		}
    }
	printf("The sum of diagnol elements in the matrix is %d",sum); 
}
