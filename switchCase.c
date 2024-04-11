#include <stdio.h>

int main()
{
    int f;
    printf("Welcome to the LIFT\n");
    printf("Enter the floor number where you want to go:");
    scanf("%d",&f);
    switch(f){
        case -2:{
            printf("You are at -2 basement.");
            break;
        }
        case -1:{
            printf("You are at -1 basement.");
            break;
        }
        case 0:{
            printf("You are at Ground Floor.");
            break;
        }
        case 1:{
            printf("You are at 1st Floor.");
            break;
        }
        case 2:{
            printf("You are at 2nd Floor.");
            break;
        }
        case 3:{
            printf("You are at 3rd Floor.");
            break;
        }
        case 4:{
            printf("You are at 4th Floor.");
            break;
        }
        case 5:{
            printf("You are at 5th Floor.");
            break;
        }
        case 6:{
            printf("You are at 6th Floor.");
            break;
        }
        case 7:{
            printf("You are at 7th Floor.");
            break;
        }
        case 8:{
            printf("You are at 8th Floor.");
            break;
        }
        case 9:{
            printf("You are at 9th Floor.");
            break;
        }
        case 10:{
            printf("You are at 10th Floor.");
            break;
        }
        default:{
            printf("We don't have such floor in our building.");
        }
        
    }
    return 0;
}
