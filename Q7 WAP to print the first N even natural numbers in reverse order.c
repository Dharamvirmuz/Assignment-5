/*#include<stdio.h>
int main()
{
//	 n = 20
	int n = 20;
	do
	{
		printf("%d\n",n);
		n-=2;
	}while( n >= 2);
	return 0;
}*/

#include<stdio.h>
int main()
{
	int n = 2, m;
	printf("Enter even number where till you want to get number in reverse order\n");
	scanf("%d",&m);
	
	do
	{
		printf("%d\n",m);
		m-=2;
	}while( n <= m);
	
	return 0;
	
}
