#include<stdio.h>
#include<string.h>
int er(int a[],int k,int sz)
{
    int l=0;//���
    int r=sz-1;//�ұ�
    while(l<=r)//���ұ߲����ڵ�����ߵ�ʱ���˳�whileѭ��
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
        else//���ֱ���˳�
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
    scanf("%d",&k);//���ҵ�����
    int sz=sizeof(a)/sizeof(a[0]);//����ĳ���
    int ret=er(a,k,sz);//erΪ����
    if(ret==-1)
    {
        printf("�Ҳ���");
    }
    else
    {
        printf("%d",ret);//retΪ������±�
    }
    return 0;
}

