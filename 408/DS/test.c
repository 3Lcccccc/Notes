#include "stdio.h"
#include<stdlib.h>
#include"malloc.h"
typedef struct link
{
    int *data;
    struct link *next;
}link;

void creatlink(struct link *l)
{
    l=(link*)malloc(sizeof(link));
    link *s;
    for (int i = 0; i < 10; i++)
    {
        s=(link*)malloc(sizeof(link))
        s->data=i;
        s->next=l->next;
        l->next=s;
        printf(s->data);
    }
    
    //return l;
}

void main()
{
    creatlink(l);
}
