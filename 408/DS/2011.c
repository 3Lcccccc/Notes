#include "stdio.h"

int main(int argc, char const *argv[])
{
    int s1[5]={1,5,6,8,9};
    int s2[5]={2,3,4,9,10};
    int p1=0;//指向s1
    int p2=0;//指向s2
    int mid;
    for (int i = 0; i < 5; i++)
    {
        if (s1[p1]<s2[p2])
        {
            mid=s1[p1];
            p1++;
        }
        else 
        {
            mid=s2[p2];
            p2++;
        }
    }
    printf("%d",mid);
    return 0;
}

/*
int midnum(int s1[],int s2[])
{
    int p1=0;//指向s1
    int p2=0;//指向s2
    int mid;
    for (int i = 0; i < s1.length; i++)
    {
        if (s1[p1]<s2[p2])
        {
            mid=s1[p1];
            p1++;
        }
        else 
        {
            mid=s2[p2];
            p2++;
        }
    }
    printf("%d",mid);
    return 0;
}
*/