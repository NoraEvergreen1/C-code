#include<stdio.h>
#include<ctype.h>
#include<string.h>
void del(char *p)
{
	while(*p!=0)
	{
		*p=*(p+1);
		p++;
	}
}
int main()
{
	char arr[100];
	gets(arr);
	char *p=arr;
	while(*p!=0)
	{
		if(!(islower(*p)||isupper(*p)))//abc123+xyz.5
		{
			del(p);
			p--;
		}
		p++;
	}
	puts(arr);
}
#include<stdio.h>
int main()
{
	int arr[4];
	for(int i=0;i<4;i++)
	scanf("%d",&arr[i]);
	for(int i=3;i>=0;i--)
	{
		for(int j=0;j<4;j++)
		{
			
			if(j!=i)
			{
				for(int k=0;k<4;k++)
				{
					if(k!=i&&k!=j)
					{
						printf("%d %d %d\n",arr[j],arr[k],arr[6-j-k-i]);
					}
				}
			}
		}
	}
	return 0;
}
#include<stdio.h>
#include<math.h>
int main()
{
	for(int i=100;i<1000;i++)
	{
		int n=i;
		int a,b,c;
		c=n%10;
		a=n/100;
		b=(n/10)%10;
		if(n==pow(a,3)+pow(b,3)+pow(c,3))
		printf("%d\n",n);
	}
}
#include<stdio.h>
int main()
{
	int n;
	for(int i=0;i<8;i++)
	{
		int a=8*(8*(8*i+7)+1)+1;
		int b=17*(17*2*i+15)+4;
		if(a==b)
		{
			n=a;
			printf("%d\n",n);
		}
	}
}
#include<stdio.h>
int fun(int n)
{
	int sum=0;
	for(int i=1;i<n;i++)
	{
		if(n%i==0)
		sum+=i;
	}
	return sum;
}
int main()
{
	int arr[3000][2];
	int k=0;
	for(int i=1;i<=3000;i++)
	{
		int n=fun(i);
		if(i==fun(n)&&i<n)
		{
			arr[k][0]=i;
			arr[k][1]=n;
			k++; 
		}
	}
	for(int i=0;i<k;i++)
	printf("(%d,%d)",arr[i][0],arr[i][1]);
}
#include<stdio.h>
int main()
{
	for(int i=1;i<40;i++)
	{
		int k=1;
		for(int j=2;j<=i;j++)
		{
			if(i%j==0&&40%j==0)
			{
				k=0;
				break;
			}
		}
		if(k)
		{
			printf("%d/40,",i);
		}
	}
}
#include<stdio.h>
#include<ctype.h>
#include<string.h>
int main()
{
	char str[100];
	gets(str);
	for(int i=0;i<strlen(str);i++)
	{
		if(isupper(str[i]))
		str[i]=tolower(str[i]);
	}
	puts(str);
}
#include<stdio.h>
#define print(x) if(x==1) printf(#x",") 
int main()
{
	for(int A=0;A<2;A++)
	{
		for(int B=0;B<2;B++)
		{
			for(int C=0;C<2;C++)
			{
				for(int D=0;D<2;D++)
				{
					for(int E=0;E<2;E++)
					{
						for(int F=0;F<2;F++)
						{
							if(A+B>0&&A+D<2&&B==C&&C!=D&&A+E+F==2)
							{
								
												if(D==0)
												{
													if(E==0)
													{
														print(A);
														print(B);
														print(C);
														print(D);
														print(E);
														print(F);
														printf("\n");
													}
												}
												else
												{
													print(A);
													print(B);
													print(C);
													print(D);
													print(E);
													print(F);
													printf("\n");
												}
									
							}
						}
					}
				}
			}
		}
	}
}
#include<stdio.h>
#include<string.h>
int main()
{
	char str1[100];
	char str2[100];
	gets(str1);
	int j=0;
	for(int i=strlen(str1)-1;i>=0;i--)
	{
		str2[j]=str1[i];
		j++;
	}
	str2[j]=0;
	strcat(str1,str2);
	puts(str1);
}
#include<stdio.h>
#include<math.h>
int main()
{
	int n;
	scanf("%d",&n);
	int k=(n*n-n)/2;
	printf("%d*%d*%d=%d=",n,n,n,n*n*n);
	int i;
	for(i=2*k+1;i<2*k+2*n-1;i+=2)
	printf("%d+",i);
	printf("%d",i);
}
#include<stdio.h>
#include<stdlib.h>
int fun(const void *e1,const void *e2)
{
	return -(*(int*)e1-*(int*)e2);
}
int main()
{
	int arr[10];
	for(int i=0;i<10;i++)
	{
		scanf("%d",&arr[i]);
	}
	qsort(arr,sizeof(arr)/sizeof(arr[0]),sizeof(arr[0]),fun);
	for(int i=0;i<10;i++)
	printf("%d ",arr[i]);
}
#include<stdio.h>
#include<ctype.h>
#include<string.h>
int main()
{
	char str[100];
	gets(str);
	int k=0;
	for(int i=0;i<strlen(str);i++)
	{
		if(islower(str[i])||isupper(str[i]))
		k++;
	}
	printf("%d\n",k);
}
#include<stdio.h>
int fun(int n)
{
	if(n<=2)
	return 1;
	else
	return fun(n-1)+fun(n-2);
}
int main()
{
	int n;
	scanf("%d",&n);
	for(int i=1;i<=n;i++)
	{
		printf("%d ",fun(i));
	}
}
#include<stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	long double sum=0,a=1;
	for(int i=1;i<=n;i++)
	{
		a*=i;
		sum+=a;
	}
	printf("%.0Lf\n",sum);
}
#include<stdio.h>
#include<math.h>
int main()
{
	double pi;
	int k=1;
	int n=0;
	while(1.0/k>=pow(10,-6))
	{
		pi+=pow(-1,n)*1.0/k;
		n++;
		k+=2;
	}
	pi*=4;
	printf("%f",pi);
}
#include<stdio.h>
int main()
{
	int a,n;
	int k;
	scanf("%d%d",&a,&n);
	int sum=0;
	k=a;
	for(int i=0;i<n;i++)
	{
		sum+=k;
		k=10*k+a;
	}
	printf("%d\n",sum);
}
#include<stdio.h>
#include<math.h>
int main()
{
	int a,b;
	for(int i=1000;i<10000;i++)
	{
		a=i/100;
		b=i%100;
		if(i==pow(a+b,2))
		printf("%d ",i);
	}
}
#include<stdio.h>
int fun(int n)
{
	if(n==1)
	return 10;
	if(n>1)
	return fun(n-1)+2;
}
int main()
{
	int a;
	scanf("%d",&a);
	printf("%d",fun(a));
}
#include<stdio.h>
int main()
{
	int a;
	scanf("%d",&a);
	int arr[100][100];
	for(int i=0;i<a;i++)
	{
		for(int j=0;j<a;j++)
		scanf("%d",&arr[i][j]);
	}
	int sum=0;
	for(int i=0;i<a;i++)
	{
		sum+=arr[i][i];
		sum+=arr[i][a-i-1];
	}
	if(a%2==1)
	{
		sum-=arr[(a+1)/2-1][(a+1)/2-1];
	}
	printf("%d",sum);
}
#include<stdio.h>
void fun(int n)
{
	if(n==2)
	printf("%d ",n);
	if(n>2)
	{
		int k=1;
		for(int i=2;i<n;i++)
		{
			if(n%i==0)
			{
				k=0;
				break;
			}
		}
		if(k==1)
		printf("%d ",n);
	}
}
int main()
{
	int n;
	scanf("%d",&n);
	for(int i=1;i<=n;i++)
	fun(i);
}
#include<stdio.h>
#include<string.h>
int main()
{
	for(int s=95859+1;;s++)
	{
		int i=s;
		char str1[10];
		int k=0,n=0;
		while(i>0)
		{
			str1[k]=(i%10)+'0';
			i/=10;
			k++;
		}
		str1[k]=0;
		char str2[10];
		for(int j=k-1;j>=0;j--)
		{
			str2[n]=str1[j];
			n++;
		}
		str2[n]=0;
		if(strcmp(str1,str2)==0)
		{
			printf("%d",s);
			break;
		}
	}
}
#include<stdio.h>
int main()
{
	int n=100;
	int cock,hen,chicken;
	for(int cock=0;cock<=20;cock++)
	{
		for(int hen=0;hen<=33;hen++)
		{
			for(int chicken=0;chicken<=300;chicken+=3)
			{
				if(n==cock*5+hen*3+chicken/3&&cock+hen+chicken==100)
				{
					printf("cock=%d,hen=%d,chicken=%d\n",cock,hen,chicken);
				}
			}
		}
	}
}
#include<stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	int sum=0;
	for(int i=1;;i++)
	{
		sum+=i*i*i;
		if(sum>n)
		{
			printf("%d",i-1);
			break;
		}
	}
}
#include<stdio.h>
int fun(int n)
{
	int k=1;
	if(n==1||n==0)
	k=0;
	for(int i=2;i<n;i++)
	{
		if(n%i==0)
		{
			k=0;
			break;
		}
	}
	return k;
}
int main()
{
	int n;
	scanf("%d",&n);
	printf("%d",fun(n));
}
#include<stdio.h>
#include<math.h>
void fun(int n)
{
	char str1[100],str2[100];
	int k=0,s=0;
	long long int m=n; 
	while(n>0)
	{
		str1[k]=n%10+'0';
		n/=10;
		k++;
	}
	str1[k]=0;
	long long l=m*m;
	while(l>0)
	{
		str2[s]=l%10+48;
		l/=10;
		s++;
	}
	str2[s]=0;
	int a=1;
	for(int i=0;i<k;i++)
	{
		if(str1[i]!=str2[i])
		{
			a=0;
			break;
		}
	}
	if(a==1)
	printf("%d  ",m);
}
int main()
{
	for(int i=0;i<200000;i++)
	{
		fun(i);
	}
	printf("\b\b");
}
#include<stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	double sum=0;
	if(n>=1)
	sum+=100;
	double a=100;
	for(int i=0;i<n-1;i++)
	 {
	 	sum+=a;
	 	a/=2;
	 }
	 printf("%.4f",sum);
}
#include<stdio.h>
void fun(int *p)
{
	*p=10+*p-1;
	if(*(p+1)>=1)
	*(p+1)-=1;
	else
	fun(p+1);
}
int main()
{
	int arr[64]={0};
	arr[0]=1;
	for(int i=0;i<64;i++)
	{
		for(int j=0;j<64;j++)
		arr[j]*=2;
		for(int j=0;j<64;j++)
		{
			if(arr[j]>9)
			{
				arr[j]%=10;
				arr[j+1]+=1;
			}
		}
	}
	if(arr[0]>=1)
	arr[0]-=1;
	if(arr[0]==0)
	{
		fun(&arr[0]);
	}
	for(int i=63;i>=0;i--)
	{
		if(arr[i]>0)
		{
			for(int j=i;j>=0;j--)
			printf("%d",arr[j]);
			break;
		}
	}
}
