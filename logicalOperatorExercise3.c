#include <stdio.h>

int main()
{
    int one;
    int two;
    int three;
    int four;
    int five;
    printf("Enter the 5 number to multiplay it with each other:\n");
    printf("Enter 1st number:");
    scanf("%d",&one);
    printf("Enter 2nd number:");
    scanf("%d",&two);
    printf("Enter 3rd number:");
    scanf("%d",&three);
    printf("Enter 4th number:");
    scanf("%d",&four);
    printf("Enter 5th number:");
    scanf("%d",&five);
    printf("%d",one*two*three*four*five);

    return 0;
}
