#include <stdio.h>

typedef struct bitree
{
    struct bitree *left;
    struct bitree *right;
    int data;
};

int b(struct bitree *t,int x,int prit)
{
    if(!t)
    return 0;
    if(t->data==x)
    {
        return 1;
    }
    prit=b(t->left,x,prit);
    if(!prit)//如果左孩子中有x就不查找右孩子
    prit=b(t->right,x,prit);
    if(prit)
    {
        printf("%d\n",t->data);
        return 0; //返回第一个父亲
    }
    return prit;
}

int main(int argc, char const *argv[])
{
    int rear=-1,front=-1;
    struct bitree *arr[10];
    struct bitree *T=(struct bitree*)malloc(sizeof(struct bitree));
    struct bitree *P;
    T->data=0;
    arr[++rear]=T;
    for(int i=1;i<10;i+=2)
    {
        T=arr[++front];
        P=(struct bitree*)malloc(sizeof(struct bitree));
        P->data=i;
        P->left=NULL;
        P->right=NULL;
        T->left=P;
        arr[++rear]=P;
        P=(struct bitree*)malloc(sizeof(struct bitree));
        T->right=P;
        P->data=i+1;
        P->left=NULL;
        P->right=NULL;
        arr[++rear]=P;
    }
    b(arr[0],10,0);
    return 0;
}
