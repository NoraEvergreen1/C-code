#include<stdio.h>		//É¨À× 
#include<string.h>
int main()
{
	int n,m;
	scanf("%d%d",&n,&m);
	char arr[10][10];
	memset(arr,'0',sizeof(arr));
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=m;j++)
		scanf(" %c",&arr[i][j]);
	}
	
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=m;j++)
		printf("%c ",arr[i][j]);
		printf("\n");
	}
	
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=m;j++)
		{
			if(arr[i][j]!='*')
			{
				arr[i][j]+=(arr[i-1][j-1]=='*')+(arr[i-1][j]=='*')+(arr[i-1][j+1]=='*')+
							(arr[i][j-1]=='*') +					(arr[i][j+1]=='*')+
							(arr[i+1][j-1]=='*')+(arr[i+1][j]=='*')+(arr[i+1][j+1]=='*');
			}
		}
	}
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=m;j++)
		printf("%c ",arr[i][j]);
		printf("\n");
	}
}
