/*#include<stdio.h>
int main()
{
	// N = 10
	
	int i = 1;
	do
	{
		printf("%d\n",i);
		i+=2;
	}while( i <= 19);
	return 0;
}*/

#include<stdio.h>
int main()
{
	int n = 1, m;
	
		printf("Enter the number where you want to get odd Natural numbers\n");
	    scanf("%d",&m);
	
	do
	{
		printf("%d\n",n);
		n+=2;
	}while( n <= m);
	
	return 0;
	
}
