#include<stdio.h>
int main()
{
	int a,n,x,sum,term;
	scanf("%d%d",&a,&n);
	x=1;
	sum=0;
	term=0;
	while(x<=n)
	{
		term=term*10+a;
		sum+=term;
		x++;
	}
	printf("%d",sum);
	return 0;
} 
