#include <stdio.h>
int main()
{
   int* pc, a;

   a = 56;
   printf("Address of a: %p\n", &a);
   printf("Value of a: %d\n\n", a);  // 56

   pc = &a;
   printf("Address of pointer pc: %p\n", pc);
   printf("Content of pointer pc: %d\n\n", *pc); // 56

   a = 87;
   printf("Address of pointer pc: %p\n", pc);
   printf("Content of pointer pc: %d\n\n", *pc); // 11

   *pc = 2;
   printf("Address of a: %p\n", &a);
   printf("Value of a: %d\n\n", a); // 2
   return 0;
}
