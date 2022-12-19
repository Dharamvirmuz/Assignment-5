#include<stdio.h>
int main()
{
	int i = 1 ;
	int n;
	
	printf("Enter any number: ");
	scanf("%d",&n);
	while(i<=10)
	{
		printf(" %d*%d=%d\n",n,i, i * n);
	    i++;	
	}
	return 0;

}
