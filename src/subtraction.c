#include<stdio.h>
#include "../obj/subtraction.h"
#include "../obj/menu.h"


void subtraction(int x, int y)
{
    printf("The difference is : %d\n\n", x-y);
    menu();
}