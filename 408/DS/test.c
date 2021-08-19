#include "stdlib.h"
#include "stdio.h"

typedef struct Link
{
    struct Link * next;
    int * data;
}Link, *node;
struct  Link *create(struct Link *l)
{
    struct Link *l1=(struct Link*)malloc(sizeof(struct Link));
    struct Link *l2;
    l1->data=0;
    l=l1;
    for (int i=1; i < 10; i++)
    {
        l2=(struct Link*)malloc(sizeof(struct Link));
        l2->data=i;
        l1->next=l2;
        l1=l2;
    }
    return l;
}

struct  Link *Del(struct  Link *l,int *x)
{
    if (l==NULL)
    {
        return NULL;
    }
    l->next=Del(l->next,x);
    printf("%d\n",l->data);
    if (l->data==x)
    {
        return l->next;
    }
    else 
    {
        return l;
    }   
}

int main(int argc, char const *argv[])
{
    struct Link *l=(struct Link*)malloc(sizeof(struct Link));
    l=create(l);
    //l=Del(l,5);
    struct Link *l2=l->next;
    l=l2->next;
    // for (int i = 0; i < 10; i++)
    // {
    //     printf("%d\n",l->data);
    //     l=l->next;
    // }
    
    return 0;
}
