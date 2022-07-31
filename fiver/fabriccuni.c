#include<stdio.h>
void main()
{
	int num,i,sum=0;
	printf("Enter a number");
	scanf("%d", &num);
	for(i=0;i<=num;i++)
	{
		sum=sum+i;
		printf("%d",sum);
	}
}
