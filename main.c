#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b,c,*p,*q,*r;
    p=&a;
    q=&b;
    r=&c;
    printf("enter the two number");
    scanf("%d %d",p,q);
    *r = *p + *q;
    printf("sum = %d",*r);
    return 0;
}
