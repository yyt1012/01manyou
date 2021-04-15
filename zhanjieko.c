#include<stdio.h>
#include<stdlib.h>
#define N 30
typedef int SLDataType;
typedef struct Stack
{
    SLDataType *base;//ջ��Ԫ�صĵ�ַ
    int top;//ջ��Ԫ�ص�λ��
} Stack;
SLDataType initStack(Stack &S)
{
  S.base=(SLDataType*)malloc(N*sizeof(SLDataType));
  if(S.base==NULL)
        return -1;
  S.top=0;
  return 1;
}
SLDataType pushStack(Stack &S,int e)//����ջ��Ԫ��
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
SLDataType popStack(Stack &S,int &e)//��ջ������ɾ����Ԫ����e����
{
    if(S.top==0)
        return 0;
    S.top--;
    e=S.base[S.top];
    return 1;
}
SLDataType getStack(Stack &S,int &e)//��ȡջ��Ԫ�أ����ҽ�Ԫ��ʹ��e����
{
    if(S.top==0)
        return 0;
    e=S.base[S.top-1];
    return 1;
}
int main()
{
    Stack S;
    int i,n,m;//n����ջ�ĸ���
    if(initStack(S)==1)
        printf("ջ��ʼ���ɹ�\n");
    printf("��ջ��Ԫ�ظ���Ϊ: ");
    scanf("%d",&n);
    i=1;
    printf("����Ҫ��ջ��Ԫ�أ�");
    while(i<=n)
    {
        scanf("%d",&m);
        if(pushStack(S,m)==0)
        {
            printf("%d��ջʧ�ܣ�\n",m);
            break;
        }
        i++;
    }
    printf("ջ�е�Ԫ���У�    ");
    printStack(S);//��ӡջ�е�Ԫ��
    if(popStack(S,m)==1)
    {
        printf("ջ��Ԫ�سɹ���ջ��\n");
        printf("��ջ��Ԫ��Ϊ:     %d\n",m);
        printf("ջ��ʣ���Ԫ��Ϊ: ");
        printStack(S);
    }
    else
    {
      printf("��ջʧ�ܣ�");
    }
    if(getStack(S,m)==1)
    {
        printf("�ɹ���ȡջ��Ԫ�أ�\n");
        printf("ջ����Ԫ��Ϊ��%d ",m);
    }
    else
    {
        printf("��ȡջ��Ԫ��ʧ�ܣ�\n");
    }
    return 0;
}
