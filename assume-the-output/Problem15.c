#include<stdio.h>

int main()
{
    extern int fun(float);
    int a;
    a = fun(3.14);
    printf("%d\n",a);
    return 0;
}

int fun(float aa)
{
    return (int)++aa;
}