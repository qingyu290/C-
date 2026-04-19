#include<stdio.h>
int main()
{
	int from,to,sum,a,n;
	scanf("%d%d",&from,&to);
	a=from;
	n=0;
	sum=0;
	to-=1; 
	while(a<to)
	{
		a++; 
		if(a%8!=0)
		{
			sum+=a;
			n++;
		}
	}
	printf("%d %d",n,sum);
	return 0; 
}
