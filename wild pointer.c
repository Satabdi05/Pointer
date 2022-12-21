#include<stdio.h>
#include<conio.h>

void main()
{
    //ptr pointing some unknown memory location

    int *ptr = (int *)malloc(sizeof(int)); /* wild pointer */
    //Assigning value
    *ptr = 12;

    printf("%d\n",*ptr);
    free(ptr);              //dangling pointer
    //ptr = NULL;           //overcome dangling pointer
    printf("%d\n", *ptr);
    return 0;
}
