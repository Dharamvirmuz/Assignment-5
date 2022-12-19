/*#include<stdio.h>
int main()
{
//	n = 20
	
	int n = 2;
	
	do
	{
		printf("%d\n",n);
		n+=2;
		
	}while( n <= 20);
	
	return 0;
}*/

#include<stdio.h>
int main()
{
	int n = 2, m;
	printf("Enter Even number where till you want to get natural numbers\n");
	scanf("%d",&m);
	
	do
	{
		printf("%d\n",n);
		n+=2;
	}while( n <= m);
	return 0;
}
