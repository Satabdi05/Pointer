#include<stdio.h>
#include<conio.h>

void main()
{
    int* ptr, *var;
    int a ;
    ptr = &a;
    var = ptr;
    printf("enter the value of a : ");
    scanf("%d", &a);
    printf("The value of a is           : %d \n", a);
    printf("The address of a is         : %d \n", &a);
    printf("the value of a is           : %d \n", *ptr);
    printf("the value at pointer is     : %d \n", ptr);
    printf("the address of pointer is   : %d \n", &ptr);
    printf("the value of a is           : %d \n", *(&a));
    printf("the value at var is         : %d \n", var);
    printf("the address of var is       : %d \n", &var);
    printf("the address of var is       : %d \n", *var);
    printf("the value of a is           : %d \n", **(&ptr));

}
