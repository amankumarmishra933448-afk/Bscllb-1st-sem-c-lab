#include <stdio.h>
void main()
{
        int choice;
             printf("enter the number between 1 to 7:");
             scanf("%d", choice);



                     switch (choice)
                     {


                     case 1:
                            printf("monday\n");
                     break;
                     case 2:
                        printf("tuesday\n");
                        break;
                     case 3:
                        printf("wednesday\n");
                        break;
                     case 4:
                        printf("thursday\n");
                        break;
                     case 5:
                        printf("friday");
                        break;
                     case 6:
                        printf("saturday");
                        break;
                     case 7:
                        printf("sunday");
                        break;
                      default: printf("input not valid");
                     }


}




