/*#include<stdio.h>
int main()
{
	
//	n = 5
	int n = 1;
	do
	{
		printf("%d\n",n*n);
		n++;
	}while( n <= 5);
	return 0;
}*/

#include<stdio.h>
int main()
{
	int n = 1, m;
	
	printf("Enter number where till you want to get numbers in square form\n");
	scanf("%d",&m);
	
	do
	{
		printf("%d\n",n*n);
		n++;
	}while( n <= m );
	
	return 0;
}
