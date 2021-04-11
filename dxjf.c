#include<stdio.h>
#include<string.h>
#define N 10000//定义数组的长度，这个长度要大于结果的长度
int main()
{
    char sz_1[N]={0},sz_2[N]={0},sz[N]={0};//初始化
    int n,m,z;
    int i;
    printf("请输入第一个数\n");
	gets(sz_1);
	printf("请输入第二个数\n");
	gets(sz_2);
	n=strlen(sz_1);//计算开始的时候两数的长度
	m=strlen(sz_2);
	z=n>m?n:m;//
	z++;//这里的z++是为了防止结果进位导致不够
	for(i=0;i<n&&i<m;i++)
    {    //从最后面的数加起，因为最后面的数是最小位
        sz[z-1-i]=sz_1[n-i-1]-'0'+sz_2[m-1-i]-'0';//这里减去'0'才是其真正的数字
    }
    if(n>m)//下面把大的位直接放到数组里
    {
        for(;i<n;i++)
        {#include<stdio.h>
#include<string.h>
#define N 10000//定义数组的长度，这个长度要大于结果的长度
int main()
{
    char sz_1[N]={0},sz_2[N]={0},sz[N]={0};//初始化
    int n,m,z;
    int i;
    printf("请输入第一个数\n");
	gets(sz_1);
	printf("请输入第二个数\n");
	gets(sz_2);
	n=strlen(sz_1);//计算开始的时候两数的长度
	m=strlen(sz_2);
	z=n>m?n:m;//
	z++;//这里的z++是为了防止结果进位导致不够
	for(i=0;i<n&&i<m;i++)
    {    //从最后面的数加起，因为最后面的数是最小位
        sz[z-1-i]=sz_1[n-i-1]-'0'+sz_2[m-1-i]-'0';//这里减去'0'才是其真正的数字
    }
    if(n>m)//下面把大的位直接放到数组里
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
            sz[i]=sz[i]%10;//大于10的数要进位
            sz[i-1]++;
        }
    }
    if(sz[0]!=0)
    {
        for(i=0;i<z;i++)
        {
            sz[i]+='0';//这里与上面对应，加了'0'才是ASCLL码对应的数字
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
    printf("两数相加：\n");
    puts(sz);//输出结果验证
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
            sz[i]=sz[i]%10;//大于10的数要进位
            sz[i-1]++;
        }
    }
    if(sz[0]!=0)
    {
        for(i=0;i<z;i++)
        {
            sz[i]+='0';//这里与上面对应，加了'0'才是ASCLL码对应的数字
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
    printf("两数相加：\n");
    puts(sz);//输出结果验证
    return 0;
}

