#include <stdio.h>

typedef struct bitree
{
    struct bitree *left;
    struct bitree *right;
    int data;
};

int b(struct bitree *t,int x,int prit)
{
    //if(t->data==x)
    {
        //return 1;
    }
    prit=b(t->left,x,prit);
    prit=b(t->right,x,prit);
    if(t)
    {
    printf("%d",t->data);
    }
    return 0;
}

int main(int argc, char const *argv[])
{
    struct bitree *arr[10];
    struct bitree *T=(struct bitree*)malloc(sizeof(struct bitree));
    struct bitree *P;
    arr[0]=T;
    T->data=0;
    for(int i=1;i<10;i+=2)
    {
        T=arr[i];
        P=(struct bitree*)malloc(sizeof(struct bitree));
        P->data=i;
        printf("%d",P->data);
        T->left=P;
        arr[i]=P;
        P=(struct bitree*)malloc(sizeof(struct bitree));
        T->right=P;
        P->data=i+1;
        printf("%d",P->data);
        arr[i+1]=P;
    }
    b(T,3,0);
    return 0;
}
