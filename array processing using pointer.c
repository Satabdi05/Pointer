#include<stdio.h>
#include<conio.h>

int main()
{
    int a[5];
    int i;

    printf("Enter the no of element : ");
    scanf("%d", &a);

    for(i=0;i<=5;i++)

    printf("You entered : ");
    for(i=0; i<5; i++)

        printf("%d \n", *(a+i));
    return 0;
}



 /* printf("Enter the no of Item : ");
    scanf("%d", &n);

    for(i=0;i<=n;i++)
        gets(ch[i]);
        //printf("\n\n");
        printf("\nEntered the Items are :");
           for(i=0;i<=n;i++)
            printf("\n %s", ch[i]);*/
