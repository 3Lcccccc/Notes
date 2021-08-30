#include "iostream"

int test(int &a,int &b)
{
    int *a1=&a;
    int *b1;
    b1=a1;
    a1=&b;
    printf("%d\n",*b1);
    printf("%d\n",*a1);
    return a1==b1?10:2;
}

int main(int argc, char const *argv[])
{
    int a=0;
    int b=1;
    a=test(a,b);
    printf("%d\n",a);
    return 0;
}
