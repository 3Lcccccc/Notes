#include "stdio.h"
#include<stdlib.h>
typedef struct link
{
    int *data;
}link;


void test(link* l)
{
    l=(link*)malloc(sizeof(link));
    l->data=0;
    printf("%d\n",l);
}

int main()
{
    link *l;
    test(l);
    printf("%d\n",l);

    return 0;
}
