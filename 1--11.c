#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	int n;
	int a;
	scanf("%d", &n);
	while (n != 1)
	{
		if (n % 2 == 0)
		{
			a = n;
			n /= 2;
			printf("%d/2=%d\n", a, n);
		}
		else
		{
			a = n;
			n = n * 3 + 1;
			printf("%d*3+1=%d\n", a, n);
		}
	}
}
#include<stdio.h>
int arr[5660] = { 0 };
int main()
{
	arr[0] = 1;
	for (int i = 1; i <= 1977; i++)
	{
		for (int j = 0; j < 5660; j++)
		{
			arr[j] *= i;
		}
		for (int j = 0; j < 5660; j++)
		{
			if (arr[j] > 9)
			{
				arr[j + 1] += arr[j] / 10;
				arr[j] %= 10;
			}
		}
	}
	for (int i = 5660-1; i >= 0; i--)
	{
		if (arr[i] > 0)
		{
			for (int j = i; j >= 0; j--)
			{
				printf("%d", arr[j]);
			}
			break;
		}
	}
}
#include<stdio.h>
int main()
{
	int n;
	scanf("%d", &n);
	int sum = 0;
	for (int i = 1; i <= n; i += 2)
	{
		sum += i;
	}
	printf("%d\n", sum);
}
#include<stdio.h>
int main()
{
	double t=0;
	int n;
	scanf("%d", &n);
	for (int i = 1; i <= n; i++)
	{
		t += 1.0 / i;
	}
	printf("%f", t);
}
#include<stdio.h>
int main()
{
	int n;
	scanf("%d", &n);
	int m=1;
	for (int i = 1; i <= n; i++)
	{
		m *= i;
	}
	printf("%d", m);
}
#include<stdio.h>
int main()
{
	int n;
	scanf("%d", &n);
	double t = 1;
	for (int i = 2; i <= n; i++)
	{
		t -= 1.0 / (i * i);
	}
	printf("%f", t);
}
#include<stdio.h>
int main()
{
	printf("W");
}
#include<stdio.h>
int main()
{
	int arr[27] = { 0 };
	int k = 0;
	for (int i = 0; i <= 4; i++)
	{
		for (int j = 0; j <= 3; j++)
		{
			int a = 3 * i + 5 * j;
			if (a > 0)
			{
				arr[k] = a;
				k++;
			}
		}
	}
	int n = 0;
	int a = 0;
	for (int i = 0; i < k; i++)
	{
		int a = arr[i];
		if (arr[i] > 0)
		{
			for (int j = i+1; j < k; j++)
			{
				if (a == arr[j])
				{
					n++;
					arr[j] = 0;
				}
			}
		}
	}
	printf("%d", k - n);
}
#include<stdio.h>
int pro(int n)
{
	if (n == 0)
		return 1;
	if (n > 0)
	{
		int a = 1;
		for (int i = 1; i <= n; i++)
			a *= i;
		return a;
	}
}
int fun(int n)
{
	int arr[6];
	int k = 0;
	int s = n;
	while (n > 0)
	{
		arr[k] = n % 10;
		n /= 10;
		k++;
	}
	int sum = 0;
	for (int i = 0; i < k; i++)
	{
		sum += pro(arr[i]);
	}
	if (sum == s)
		return 1;
	else
		return 0;
}
int main()
{
	int k = 0;
	for (int i=100; i < 100000; i++)
	{
		if (fun(i))
		{
			k++;
			printf("%d ", k);
			printf("%d ", i);
		}
	}
	
}
#include<stdio.h>
void fun(int n)
{
	int s = n;
	int sum = 0;
	while (n > 0)
	{
		sum += (n % 10) * (n % 10) * (n % 10);
		n /= 10;
	}
	if (s == sum)
		printf("%d ", sum);
}
int main()
{
	for (int i = 2; i < 1000; i++)
	{
		fun(i);
	}
}
#include<stdio.h>
int main()
{
	int n;
	scanf("%d", &n);
	printf("0%o %d 0x%x", n, n, n);

}
#include<stdio.h>
#define PI 3.1415926
int main()
{
	float a;
	scanf("%f", &a);
	printf("%.2f", a * a * PI);
}
#include<stdio.h>
int main()
{
	int n;
	scanf("%d", &n);
	while (n > 0)
	{
		printf("%d ", n % 10);
		n /= 10;
	}
}
#include<stdio.h>
int main()
{
	for (int i = 1; i < 10; i++)
	{
		for (int j = 1; j <=i; j++)
		{
			printf("%d*%d=%-2d ", j, i, i * j);
		}
		printf("\n");
	}
}
#include<stdio.h>
int main()
{
	char ch = 't';
	printf("%d %c", ch, 63);
}
#include<stdio.h>
int main()
{
	printf("0%o 0x%x\n", 123456789, 123456789);
}
#include<stdio.h>
int main()
{
	printf("%d %d %d %d %d", sizeof(int), sizeof(char), sizeof(float), sizeof(double), sizeof(long long));
}
#include<stdio.h>
int main()
{
	int sum = 0;
	for (int i = 1; i <= 1000; i++)
		sum += i;
	printf("%d", sum);
}