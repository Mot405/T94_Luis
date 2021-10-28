#include <stdio.h>

int main()
{
    int choice, pay, change;


    printf ("Please Select your order\n[1]Cobra(100)\n[2]Coke(150)\n[3]Mountain Dew(200)\nChoice:");
    scanf ("%d", &choice);

    if(choice != 1 && choice != 2 && choice != 3){
        printf("Invalid Input");
    }

    switch (choice){
    case 1:
        if(choice==1)
        printf("Input payment:");
            scanf("%d", &pay);
            change = pay - 100;

            if (pay < 100){
              printf("You don't have enough funds");
            }else {printf("You have purchased Cobra\nChange: %d" , change);
            }
            break;

    case 2:
        if(choice==2)
        printf("Input payment:");
            scanf("%d", &pay);
            change = pay - 150;

            if (pay < 150){
              printf("You don't have enough funds");
            }else {printf("You have purchased Coke\nChange: %d" , change);
            }
            break;
    case 3:
        if(choice==3)
        printf("Input payment:");
            scanf("%d", &pay);
            change = pay - 200;

            if (pay < 200){
              printf("You don't have enough funds");
            }else {printf("You have purchased Mountain Dew\nChange: %d" , change);
            }
            break;
    }



    return 0;
}
