#include<stdio.h>
#include<string.h>
#define N 10000//��������ĳ��ȣ��������Ҫ���ڽ���ĳ���
int main()
{
    char sz_1[N]={0},sz_2[N]={0},sz[N]={0};//��ʼ��
    int n,m,z;
    int i;
    printf("�������һ����\n");
	gets(sz_1);
	printf("������ڶ�����\n");
	gets(sz_2);
	n=strlen(sz_1);//���㿪ʼ��ʱ�������ĳ���
	m=strlen(sz_2);
	z=n>m?n:m;//
	z++;//�����z++��Ϊ�˷�ֹ�����λ���²���
	for(i=0;i<n&&i<m;i++)
    {    //����������������Ϊ������������Сλ
        sz[z-1-i]=sz_1[n-i-1]-'0'+sz_2[m-1-i]-'0';//�����ȥ'0'����������������
    }
    if(n>m)//����Ѵ��λֱ�ӷŵ�������
    {
        for(;i<n;i++)
        {#include<stdio.h>
#include<string.h>
#define N 10000//��������ĳ��ȣ��������Ҫ���ڽ���ĳ���
int main()
{
    char sz_1[N]={0},sz_2[N]={0},sz[N]={0};//��ʼ��
    int n,m,z;
    int i;
    printf("�������һ����\n");
	gets(sz_1);
	printf("������ڶ�����\n");
	gets(sz_2);
	n=strlen(sz_1);//���㿪ʼ��ʱ�������ĳ���
	m=strlen(sz_2);
	z=n>m?n:m;//
	z++;//�����z++��Ϊ�˷�ֹ�����λ���²���
	for(i=0;i<n&&i<m;i++)
    {    //����������������Ϊ������������Сλ
        sz[z-1-i]=sz_1[n-i-1]-'0'+sz_2[m-1-i]-'0';//�����ȥ'0'����������������
    }
    if(n>m)//����Ѵ��λֱ�ӷŵ�������
    {
        for(;i<n;i++)
        {
            sz[z-1-i]=sz_1[n-i-1]-'0';
        }
    }
    else
    {
      for(;i<m;i++)
      {
          sz[z-1-i]=sz_2[m-i-1]-'0';
      }
    }
    for(i=z-1;i>0;i--)
    {
        if(sz[i]>=10)
        {
            sz[i]=sz[i]%10;//����10����Ҫ��λ
            sz[i-1]++;
        }
    }
    if(sz[0]!=0)
    {
        for(i=0;i<z;i++)
        {
            sz[i]+='0';//�����������Ӧ������'0'����ASCLL���Ӧ������
        }
        sz[z]='\0';
    }
    else
    {
        for(i=1;i<z;i++)
        {
            sz[i-1]=sz[i]+'0';
        }
        sz[z-1]='\0';
    }
    printf("������ӣ�\n");
    puts(sz);//��������֤
    return 0;
}


            sz[z-1-i]=sz_1[n-i-1]-'0';
        }
    }
    else
    {
      for(;i<m;i++)
      {
          sz[z-1-i]=sz_2[m-i-1]-'0';
      }
    }
    for(i=z-1;i>0;i--)
    {
        if(sz[i]>=10)
        {
            sz[i]=sz[i]%10;//����10����Ҫ��λ
            sz[i-1]++;
        }
    }
    if(sz[0]!=0)
    {
        for(i=0;i<z;i++)
        {
            sz[i]+='0';//�����������Ӧ������'0'����ASCLL���Ӧ������
        }
        sz[z]='\0';
    }
    else
    {
        for(i=1;i<z;i++)
        {
            sz[i-1]=sz[i]+'0';
        }
        sz[z-1]='\0';
    }
    printf("������ӣ�\n");
    puts(sz);//��������֤
    return 0;
}

