#include<stdio.h>

int main()
{
    int n=50;
    int cnt=0;

    for(int i=0; i<=n; i+=3){
        i+=1;
        cnt++;
    }
    printf("%d\n",cnt);

    return 0;
}