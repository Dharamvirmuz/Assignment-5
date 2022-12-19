/*#include<stdio.h>
int main()
{
	// N = 30
	
	int i = 30;
	do
	{
		printf("%d\n",i);
		i--;
	}while( i >= 1);
	
	return 0;
	
}*/

#include<stdio.h>
int main()
{
	int n = 1, m;
	
	printf("Enter the number where you want to get Natural number in reverse order\n");
	scanf("%d",&m);
	
	do
	{
		printf("%d\n",m);
		m--;
	}while( n <= m);
	
	return 0;
}
