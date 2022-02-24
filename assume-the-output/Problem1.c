#include<stdio.h>

int main()
{
    enum status{pass, fail, atkt};
    enum status std1, std2, std3;

    std1 = pass;
    std2 = atkt;
    std3 = fail;

    printf("%d, %d, %d\n",std1, std2, std3);

    return 0;
}