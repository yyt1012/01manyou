#include<stdio.h>
#include<stdlib.h>
#define N 30
typedef int SLDataType;
typedef struct Stack
{
    SLDataType *base;//栈底元素的地址
    int top;//栈顶元素的位置
} Stack;
SLDataType initStack(Stack &S)
{
  S.base=(SLDataType*)malloc(N*sizeof(SLDataType));
  if(S.base==NULL)
        return -1;
  S.top=0;
  return 1;
}
SLDataType pushStack(Stack &S,int e)//输入栈的元素
{
    if(S.top==N)
        return 0;
    S.base[S.top]=e;
    S.top++;
    return 1;
}
void printStack(Stack &S)
{
    int i;
    i=0;
    while(i<S.top)
    {
        printf("%d ",S.base[i]);
        i++;
    }
    printf("\n");
}
SLDataType popStack(Stack &S,int &e)//出栈，并将删除的元素用e返回
{
    if(S.top==0)
        return 0;
    S.top--;
    e=S.base[S.top];
    return 1;
}
SLDataType getStack(Stack &S,int &e)//获取栈顶元素，并且将元素使用e返回
{
    if(S.top==0)
        return 0;
    e=S.base[S.top-1];
    return 1;
}
int main()
{
    Stack S;
    int i,n,m;//n是入栈的个数
    if(initStack(S)==1)
        printf("栈初始化成功\n");
    printf("入栈的元素个数为: ");
    scanf("%d",&n);
    i=1;
    printf("输入要入栈的元素：");
    while(i<=n)
    {
        scanf("%d",&m);
        if(pushStack(S,m)==0)
        {
            printf("%d入栈失败！\n",m);
            break;
        }
        i++;
    }
    printf("栈中的元素有：    ");
    printStack(S);//打印栈中的元素
    if(popStack(S,m)==1)
    {
        printf("栈顶元素成功出栈！\n");
        printf("出栈的元素为:     %d\n",m);
        printf("栈中剩余的元素为: ");
        printStack(S);
    }
    else
    {
      printf("入栈失败！");
    }
    if(getStack(S,m)==1)
    {
        printf("成功获取栈顶元素：\n");
        printf("栈顶的元素为：%d ",m);
    }
    else
    {
        printf("获取栈顶元素失败！\n");
    }
    return 0;
}
