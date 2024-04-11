#include <stdio.h>

int main()
{
    int numb;
    printf("Enter the number to check it is divisibal by 3 and 5 OR only 3 and only 5 OR not divisibal by any of them:");
    scanf("%d",&numb);
    if(numb%3==0 && numb%5==0){
        printf("FizzBizz");
    }
    else if(numb%3==0){
        printf("Fizz");
    }
    else if(numb%5==0){
        printf("Buzz");
    }
    else{
        printf("%d",numb);
    }

    return 0;
}
