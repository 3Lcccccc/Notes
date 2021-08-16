#include "stdio.h"


//


int main(int argc, char const *argv[])
{
    int a[10]={1,2,3,4,5,6,7,8,9,10};
    int p=1;
    int num1=a[p];//暂存前移的数    
    int num2;//暂存被替换的数
    int count=0;//指向被置换的数
    for (int i = 0; i < 10; i++)
    {
        num2=a[count];
        a[count]=num1;
        num1=num2;
        count-=p;
        if (count<0)
        {
            count+=10;
        }
    }
    printf("\n");
    for(int i=0;i<10;i++)
    {
        printf("%d,",a[i]);
    }
    return 0;
}