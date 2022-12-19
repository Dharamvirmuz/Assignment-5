/*#include<stdio.h>
int main()
{
//	n = 15


	int n = 1;
	do
	{
		printf("%d\n",n);
		n+=2;
	}while( n <= 15);
	
	return 0;
}*/

#include<stdio.h>
int main()
{
	int n = 1, m;
	printf("Enter an Odd number where till you want to get number in reverse order\n");
	scanf("%d",&m);
	
	do
	{
		//printf("Reverse order = \n");
		printf("%d\n",m);
		m-=2;
		
	}while( n <= m);
	return 0;
}
