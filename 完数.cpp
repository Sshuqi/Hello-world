#include<stdio.h>
int main()
{
	int n,i,sum;
	for(i=1;i<=1000;i++)
	{
		sum=0;
		for(n=1;n<i;n++)
		{
			if(i%n==0)
			{
				sum+=n;
			}
		}
		if (i==sum)
		{
			printf("%d\t",i);
			continue;
		}
	}
}
