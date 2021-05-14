#include<stdlib.h>
#include<stdio.h>
#include "../obj/menu.h"
#include "../obj/addition.h"
#include "../obj/subtraction.h"
#include "../obj/multiplication.h"
#include "../obj/division.h"

void menu()
{
    printf("Choose a number to give your response :\n");
    printf("1 - Addition\n2 - Subtraction\n3 - Multiplication\n4 - Division\n0 - Exit\n\n");
    
    int choice;
    scanf("%d", &choice);
    
    int x, y;
    
    if(choice != 0)
    {
    printf("Enter the inputs : \n");

    printf("X >>> ");
    scanf("%d", &x);
    printf("Y >>> ");
    scanf(" %d", &y);
    }
    
    switch (choice)
    {
    case 1:
        addition(x, y);
        break;
    case 2:
        subtraction(x, y);
        break;
    case 3:
        multiplication(x, y);
        break;
    case 4:
        division(x, y);
        break;
    // case 0:
    //     exit:
    //     break;

    default:
        printf("You have entered a wrong input, try again!!!");
        menu(choice);
        break;
    }
}
