#include<stdio.h>
void mppx(int a[],int s)
{
    int i,j;
    int t;
    for(i=0;i<s-1;i++)
    {
        for(j=0;j<s-1-i;j++)
        {
            if(a[j]>a[j+1])
            {
                t=a[j];a[j]=a[j+1];a[j+1]=t;
            }
        }
    }
}
int main()
{
    int a[]={10,9,8,7,6,5,4,3,2,1};//此排序实现顺序排序
    int i;
    int s=sizeof(a)/sizeof(a[0]);
    mppx(a,s);//冒泡排序函数，这里a是传递a数组首元素的地址&a[0]
    for(i=0;i<s;i++)
    {
        printf("%d ",a[i]);
    }
    return 0;
}


