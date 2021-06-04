#include"stdio.h"

int sum(int begin,int end)
{
    int sum;
    printf("%d\n",sum);
    printf("%d\n",&sum);
    for (int i = begin; i < end; i++)
    {   
        sum+=i;
    }
    printf("%d ",sum);
    return sum;
}

int main ()
{
    int *p=0x4015b0;
    printf("%d",p);
    sum(1,10);
    sum(10,20);
    sum(20,60);
    
    return 0;
}