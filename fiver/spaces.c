
#include<stdio.h>
void spaces(int x)
{
	int num[7],j=0,k;
	for(  ; x!=0 ;  )
	{
		
			num[i]=x%10;
			x=	x/10;
		
	}
	for(k=i-1 ; k>=0 ; k--)
	{
		printf("%d\t", num[k]);
	}
}
void main()
{
	int x;
	printf("Enter a number");
	scanf("%d", &x);
	spaces(x);
}

