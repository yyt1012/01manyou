#include<stdio.h>
#define MAX 30
typedef int E;
typedef struct
{
    E a[MAX];
    int leng;
}S;
void create_S(S &L)
{
    int i;
    int n;
    scanf("%d",&n);
    L.leng=n;
    i=0;
    while(i<n)
    {
        scanf("%d",&L.a[i]);
        i++;
    }
}
void print_S(S L)
{
    int i;
    for(i=0;i<L.leng;i++)
    {
        printf("%d ",L.a[i]);
    }
    printf("\n");
}
int insert_S(S &L,E m)
{
    int j;
    if(L.leng>=MAX)
        return 0;
    for(j=L.leng-1;L.a[j]>=m;j--)
        L.a[j+1]=L.a[j];
        L.a[j+1]=m;
        L.leng++;
        return 1;
}
void delete_S(S &L)
{
    int i=0,j;
    while(i<L.leng-1)
    {
        if(L.a[i]==L.a[i+1])
        {
            for(j=i+1;j<L.leng;j++)
                L.a[j-1]=L.a[j];
            L.leng--;
        }
        else i++;
    }
}
int main()
{
    S L;
    E m;
    create_S(L);
    print_S(L);
    scanf("%d",&m);
    if(insert_S(L,m))
    {
        printf("插入成功！\n");
    }
    else
    {
        printf("插入失败！\n");
    }
    print_S(L);
    delete_S(L);
    print_S(L);
    return 0;
}
