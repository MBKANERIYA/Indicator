#include<stdio.h>

int main()
{
	int n,i;
	
	printf("Size of Array = ");
	scanf("%d",&n);
	
	int a[n];
	int *p = a;
	
	printf("Enter the number = \n");
	for(i=0;i<n;i++)
	{
		scanf("%d",(p+i));
	}
	
	printf("Enter value = \n");
	
	for(i=(n-1);i>=0;i--)
	{
		printf("%d\n",*(p+i));
	}
}