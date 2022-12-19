/*#include<stdio.h>
int main()
{
	int n = 1;
	do
	{
		printf("%d\n",n*n*n);
		n++;
	}while( n <= 5);
	return 0;
}*/

#include<stdio.h>
int main()
{
	int n = 1, m;
	printf("Enter number where till you want to get cubes of numbers\n");
	scanf("%d",&m);
	
	do
	{
		printf("%d\n",n*n*n);
		n++;
	}while( n <= m);
	return 0;
}
