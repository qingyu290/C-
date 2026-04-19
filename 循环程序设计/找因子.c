#include<stdio.h>
int main()
{
	int a,n;
	n=1;
	scanf("%d",&a);
	while(n<=a)
	{
		if(a%n==0)
		{
		printf("%d ",n);
		}
		n++;
	}
	return 0; 
}
