#include <stdio.h>

int main()
{
    int age;
    printf("Let's find out yon can vote or not\n");
    printf("Enter your age:");
    scanf("%d",&age);
    age>=18?printf("You can vote."):printf("Sorry!! you can't vote.");
    return 0;
}