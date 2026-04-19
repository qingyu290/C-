#include<stdio.h>
int main()
{
	int d_num,c_num,space,other;
	char c;
	d_num=0;
	c_num=0;
	space=0;
	other=0;
	while((c=getchar())!='\n')
	{
		if(c<=57 && c>=48)
		{
			d_num++;
		}
		else if(c>=65 && c<=90)
		{
			c_num++;
		}
		else if(c>=97 && c<=122) 
		{
			c_num++;
		}
		else if(c==32)
		{
			space++;
		}
		else
		{
			other++;
		}
	}
	printf("d_num=%d\nc_num=%d\nspace=%d\nother=%d\n",d_num,c_num,space,other);
	return 0;
}
