 #include<stdio.h>
int main()
{
    int i,j;
    int t;
    int a[]={10,9,8,7,6,5,4,3,2,1};//此排序实现顺序排序
    int s=sizeof(a)/sizeof(a[0]);//求数组元素个数
    for(i=0;i<s-1;i++)//确定排序的趟数
    {
        //下面为每趟冒泡排序
        for(j=0;j<s-1-i;j++)
        {
            if(a[j]>a[j+1])
            {
                t=a[j];a[j]=a[j+1];a[j+1]=t;
            }
        }
    }
    for(i=0;i<s;i++)//验证结果
    {
        printf("%d ",a[i]);
    }
    return 0;
}


