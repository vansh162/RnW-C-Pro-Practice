#include <stdio.h>

int main()
{
    int a;
    printf("Type any number to know it is +ve , -ve or 0\n");
    printf("Enter the number:");
    scanf("%d",&a);
if(a>0){
    printf("It is a +ve number.");
}
else if(a<0){
    printf("It is a -ve number.");
}
else{
    printf("0 is the number.");
}
    return 0;
}
