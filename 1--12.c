#include<stdio.h>
int main()
{
	int sum=0;
	for(int i=1;i<1000;i++)
	{
		if(i%7==0)
		sum+=i;
	}
	printf("%d",sum);
}
#include<stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	int sum=0;
	for(int i=1;i<=n;i++)
	sum+=i;
	printf("%d",sum);
}
#include<stdio.h>
int main()
{
	int n,sum=0;
	scanf("%d",&n);
	for(int i=1;i<=n;i++)
	{
		if(i%7==0)
		{
			sum+=i;
		}
	}
	printf("%d",sum);
}
#include<stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	for(int i=1;i<n;i++)
	{
		if(n%i==0)
		printf("%d ",i);
	}
}
#include<stdio.h>
int main()
{
	int n;
	scanf("%d", &n);
	for (int i = 1; i <= n; i++)
	{
		printf("%d ", i);
		for (int j = 1; j < i; j++)
		{
			if (i % j == 0)
				printf("%d ", j);
		}
		printf("\n");
	}
}
