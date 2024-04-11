#include <stdio.h>

int main()
{
    int numb;
    printf("Enter the number to display it's table:");
    scanf("%d",&numb);
    for(int i=1; i<=10; i++){
    printf("%d",numb);
    printf("X");
    printf("%d",i);
    printf("=");
    printf("%d\n",numb*i);
}
    return 0;
}
