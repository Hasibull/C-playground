/*
    Function pointer is usefull as like javascript callback function!
*/

#include<stdio.h>

int add(int x, int y) {return x + y;}
int mult(int x, int y) {return x * y;}

// perform function takes a function pointer and two integer input.
int perform(int (*op)(int, int), int x, int y) {
    return op(x, y);
}

int main()
{
    printf("%d\n", perform(add, 10, 20));

    return 0;
}