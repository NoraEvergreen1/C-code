#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct member
{
	char name[10];
	char num[10];
	char phone[12];
	char address[100];
	char sex[10];
	struct member *next;
};
struct member *create()
{
	struct member *head,*pbef,*p;
	int first=0;
	printf("请录入俱乐部成员的姓名、成员号、电话号码、地址、性别\n");
	printf("请按Ctrl+z结束录入\n");
	int n=1;
	while(~scanf("%d",&n))
	{
		p=(struct member*)malloc(sizeof(struct member));
		if(p==NULL)
		break;
		scanf("%s %s %s %s %s",p->name,p->num,p->phone,p->address,p->sex);
		p->next=NULL;
		if(first==0)
		{
			head=p;
			pbef=p;
			first=1;
		}
		else
		{
			pbef->next=p;
			pbef=p;
		}
	}
	return head;
}
int main()	//		录入、更新、查询、删除
{
	int a;
	printf("请选择功能：\n");
	printf("录入-1	更新-2	查询-3	删除-4	输出-5	退出Ctrl+z\n");
	int l=0;
	struct member *q,*q1;
	while(~scanf("%d",&a))
	{
		
	if(a==1)		//录入 
	{
		if(l==0)
		{
			q=create();
			q1=q;
			l++;
		}
		else
		{
			q=q1;
			while(q->next!=NULL)
			{
				q=q->next;
			}
			struct member *pbef=q;
			printf("请录入俱乐部成员的姓名、成员号、电话号码、地址、性别\n");
			printf("请按Ctrl+z结束录入\n");
			int n=1;
			while(~scanf("%d",&n))
			{
			q=(struct member*)malloc(sizeof(struct member));
			if(q==NULL)
			break;
			scanf("%s %s %s %s %s",q->name,q->num,q->phone,q->address,q->sex);
			q->next=NULL;
			pbef->next=q;
			pbef=q; 
			}
		}
	}
	if(a==2)		//更新 
	{
		q=q1;
		int n=0;
		printf("请输入更新目标的姓名\n");
		char name[10];
		scanf("%s",name);
		while(q!=NULL)
		{
			if(strcmp(name,q->name)==0)
			{
				n=1;
				scanf("%s %s %s %s %s",q->name,q->num,q->phone,q->address,q->sex);
			}
			q=q->next;
		}
		if(n==0)
		printf("查无此人\n"); 
	}
	if(a==3)		//查询 
	{
		q=q1;
		int n=0;
		printf("请输入查询目标的姓名\n");
		char name[10];
		scanf("%s",name);
		while(q!=NULL)
		{
			if(strcmp(name,q->name)==0)
			{
				printf("%s %s %s %s %s\n",q->name,q->num,q->phone,q->address,q->sex);
				n=1;
			}
			q=q->next;
		}
		if(n==0)
		printf("查无此人\n"); 
	}
	if(a==4)		//删除 
	{
		q=q1;
		int n=0,m=0;
		printf("请输入清除目标的姓名\n");
		char name[10];
		scanf("%s",name);
		struct member *qbef,*qaft; 
		while(q!=NULL)
		{
			m++;
			if(strcmp(name,q->name)==0)
			{
				n=1;
				if(m==1)
				{
					q=q->next;
					q1=q;
					break;
				}
				else
				{
					qbef->next=qaft;
					break;
				}
			}
			qbef=q;
			q=q->next;
			qaft=q->next;
		}
		if(n==0)
		printf("查无此人\n"); 
	}
	if(a==5)
	{
		struct member *now;			//输出 
		now=q1;
		while(now!=NULL)
		{
			printf("%s %s %s %s %s\n",now->name,now->num,now->phone,now->address,now->sex);
			now=now->next; 
		}
	}
	printf("请选择功能：\n");
	}
	struct member *q2=q1,*q3=q1;
	int figure=0;
	while(q2!=NULL)
		{
			figure++;
			q2=q2->next; 
		}
	struct member1
{
	char name[10];
	char num[10];
	char phone[12];
	char address[100];
	char sex[10];
};
	struct member1 arr[figure];
	for(int i=0;i<figure;i++)
	{
		strcpy(arr[i].name,q3->name);
		strcpy(arr[i].num,q3->num);
		strcpy(arr[i].phone,q3->phone);
		strcpy(arr[i].address,q3->address);
		strcpy(arr[i].sex,q3->sex);
		q3=q3->next;
	}
	FILE *fp;
	if((fp=fopen("member.txt","a+"))==NULL)
	{
		printf("no");
		exit(1);
	}
	for(int i=0;i<figure;i++)
	{
		fputs(arr[i].name,fp);
		fputc('\t',fp);
		fputs(arr[i].num,fp);
		fputc('\t',fp);
		fputs(arr[i].phone,fp);
		fputc('\t',fp);
		fputs(arr[i].address,fp);
		fputc('\t',fp);
		fputs(arr[i].sex,fp);
		fputc('\n',fp);
	}
	fclose(fp);
}
