#include<stdio.h>
#include "../obj/multiplication.h"
#include "../obj/menu.h"

void multiplication(int x, int y)
{
    printf("The multiplication is : %d\n\n", x*y);
    menu();
}