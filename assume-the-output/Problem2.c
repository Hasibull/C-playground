#include<stdio.h>

int main()
{
    int m=10,n=7;
    int cnt=0;

    while(m%n>=0){
        m+=1;
        n+=2;
        cnt++;
    }

    printf("%d\n",cnt);

    return 0;
}