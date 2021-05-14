#include<stdio.h>
#include "../obj/addition.h"
#include "../obj/menu.h"

void addition(int x, int y)
{
    printf("The sum is : %d\n\n", x+y);
    menu();
}