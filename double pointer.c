#include<stdio.h>
#include<conio.h>

int main() {
   int a = 97;
   int *p1;
   int **p2;
   p1 = &a;
   p2 = &p1;
   printf("Value of a = %d\n", a);
   printf("Value of a using single pointer = %d\n", *p1 );
   printf("Value of a using double pointer = %d", **p2);
   return 0;
}
