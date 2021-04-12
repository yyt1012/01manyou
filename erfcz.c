#include<stdio.h>
#include<string.h>
int er(int a[],int k,int sz)
{
    int l=0;//左边
    int r=sz-1;//右边
    while(l<=r)//当右边不大于等于左边的时候退出while循环
    {
        int m=(r+l)/2;
        if(a[m]<k)
        {
            l=m+1;
        }
        else if(a[m]>k)
        {
            r=m-1;
        }
        else//相等直接退出
        {
            return m;
        }

    }
    return -1;
}
int main()
{
    int a[]={1,2,3,4,5,6,7,8,9,10};
    int k;
    scanf("%d",&k);//查找的数字
    int sz=sizeof(a)/sizeof(a[0]);//数组的长度
    int ret=er(a,k,sz);//er为函数
    if(ret==-1)
    {
        printf("找不到");
    }
    else
    {
        printf("%d",ret);//ret为数组的下标
    }
    return 0;
}

