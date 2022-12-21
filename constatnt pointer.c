#include <stdio.h>

int main()
{
    const int a = 10;
    int *ptr = &a;
    *ptr = 50;
    printf("Value of 'a' is %d", a);
    return 0;
}
