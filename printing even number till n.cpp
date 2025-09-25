#include <stdio.h>

void main()
{
        int num;
        printf("enter the month name:");
        scanf("%d", &num);

        switch(num){
        case 1:printf("my month january has 31 days");
        break;

        case 2:printf("my month february has 28 days");
        break;

        case 3:printf("my month march has 31 days");
        break;

        case 4:printf("my month april has 30 days");
        break;

        case 5:printf("my month may has  31 days");
        break;

        case 6:printf("my month june has 30 days");
        break;

        case 7:printf("my month july has 31 days");
        break;

        case 8:printf("my month august has 31 days");
        break;

        case 9:printf("my month september has 30 days");
        break;

        case 10:printf("my month october has 31 days");
        break;

        case 11:printf("my month november has 30 days");
        break;

        case 12:printf("my month december has 31 days");
        break;
        default:
                printf("enter theisnt value");
        }
}
