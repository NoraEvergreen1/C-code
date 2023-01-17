#include<stdio.h>			//—°‘Ò≈≈–Ú 
int main()
{
	int arr[100];
	for(int i=0;i<5;i++)
	{
		scanf("%d",&arr[i]);
	}
	for(int i=0;i<4;i++)
	{
		int k=i;
		for(int j=i+1;j<5;j++)
		{
			if(arr[k]>arr[j])
			k=j;
		}
		int n=arr[i];
		arr[i]=arr[k];
		arr[k]=n;
	}
	for(int i=0;i<5;i++)
	{
		printf("%d ",arr[i]);
	}
}

#include<stdio.h>	//√∞≈›≈≈–Ú 
int main()
{
	int n=5;
	int arr[n];
	for(int i=0;i<5;i++)
	{
		scanf("%d",&arr[i]);
	}
	for(int i=0;i<n-1;i++)
	{
		for(int j=0;j<n-1-i;j++)
		{
			if(arr[j]>arr[j+1])
			{
				int m=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=m;
			}
		}
	}
	for(int i=0;i<5;i++)
	{
		printf("%d ",arr[i]);
	}
}
#include<stdio.h>	//≤Â»Î≈≈–Ú 
int main()
{
	int n;
	scanf("%d",&n);
	int arr[100]={0};
	scanf("%d",&arr[0]);
	int k=1;
	for(int j=0;j<n-1;j++)
	{
		int a;
		scanf("%d",&a);
		int left=0;
		for(int i=0;i<k;i++)
		{
			if(a>arr[i])
			left++;
		}
		for(int i=k-1;i>=left;i--)
		arr[i+1]=arr[i];
		arr[left]=a;
		k++;
	}
	for(int i=0;i<n;i++)
	{
		printf("%d ",arr[i]);
	}
}

#include<stdio.h>	//Õ≥º∆≈≈–Ú 
int main()
{
	int arr[1000]={0};
	int n;
	scanf("%d",&n);
	for(int i=0;i<n;i++)
	{
		int a;
		scanf("%d",&a);
		arr[a]++;
	}
	for(int i=0;i<1000;i++)
	{
		if(arr[i]>0)
		{
			for(int j=0;j<arr[i];j++)
			printf("%d ",i);
		}
	}
}
