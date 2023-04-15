#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <conio.h>
#include <unistd.h>
#include "misc.c"
#include "welcome_screen.c"
#include "instructions.c"
#include "play.c"
#include "stack_implementation.c"

int count = 0;

void instructions();
void play();
void welcome(char[]);

int main()  
{
    char n, emoji = 1;
    int flag;
    char x1[] = "Press any key to continue....";

    if(count == 0)
    {
        welcome(x1);
        system("cls");
        system("color f0");
        instructions();
    }

    printf("\n");
    printstr(x1);
    getch();    

    play();

    char x2[] = "->Do you want to play another hand?(Enter y to play again and n to exit): ";
    printf("\n");
    printstr(x2);
    do
    {
        n = getchar();
    }while(n != 'y' && n != 'n');

    if(n == 'y')
    {
        char x3[] = "Ok, Good luck again!!";
        printf("\n");
        printstr(x3);
        printf("\n");
        count++;
        main();
    }
    else
    {
        char x4[] = "Thank you for playing Blackjack with Mr. Jackie!";
        printf("\n");
        printstr(x4);
        printf("%c\n", emoji);
    }    

    return 0;   
}

