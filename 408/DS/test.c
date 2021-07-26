#include"stdio.h"

int sum(int *begin,int *end)
{
    int sum;
    *begin=10;    
    return 0;
}

int main ()
{
    int *a=0,b=5;
    sum(&a,&b);
    printf("%d",a);
    return 0;
}