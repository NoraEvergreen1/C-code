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
	printf("��¼����ֲ���Ա����������Ա�š��绰���롢��ַ���Ա�\n");
	printf("�밴Ctrl+z����¼��\n");
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
int main()	//		¼�롢���¡���ѯ��ɾ��
{
	int a;
	printf("��ѡ���ܣ�\n");
	printf("¼��-1	����-2	��ѯ-3	ɾ��-4	���-5	�˳�Ctrl+z\n");
	int l=0;
	struct member *q,*q1;
	while(~scanf("%d",&a))
	{
		
	if(a==1)		//¼�� 
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
			printf("��¼����ֲ���Ա����������Ա�š��绰���롢��ַ���Ա�\n");
			printf("�밴Ctrl+z����¼��\n");
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
	if(a==2)		//���� 
	{
		q=q1;
		int n=0;
		printf("���������Ŀ�������\n");
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
		printf("���޴���\n"); 
	}
	if(a==3)		//��ѯ 
	{
		q=q1;
		int n=0;
		printf("�������ѯĿ�������\n");
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
		printf("���޴���\n"); 
	}
	if(a==4)		//ɾ�� 
	{
		q=q1;
		int n=0,m=0;
		printf("���������Ŀ�������\n");
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
		printf("���޴���\n"); 
	}
	if(a==5)
	{
		struct member *now;			//��� 
		now=q1;
		while(now!=NULL)
		{
			printf("%s %s %s %s %s\n",now->name,now->num,now->phone,now->address,now->sex);
			now=now->next; 
		}
	}
	printf("��ѡ���ܣ�\n");
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
