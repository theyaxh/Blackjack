#define SPACE "     "

void welcome(char x[])
{
    int i = 0, j = 0;
    char s = -33, t = 2;
    system("cls");
    system("color 0f");
    printf("\n\n\t\t\t\t\t\t\t\t\t  WELCOME TO\n\n");

    printf("\n\t\t\t%s%c%c%c%c%c%c%c%c   %c%c%c\t    %c%c%c%c%c%c%c%c%c%c   %c%c%c%c%c%c%c   %c%c    %c%c   %c%c%c%c%c%c%c%c  %c%c%c%c%c%c%c%c%c%c   %c%c%c%c%c%c%c   %c%c    %c%c", SPACE, t, t, t, t, t, t, t, t, t, t, t, t, t, t, t, t, t, t, t, t, t, t, t, t, t, t, t, t, t, t, t, t, t, t, t, t, t, t, t, t, t, t, t, t, t, t, t, t, t, t, t, t, t, t, t, t, t, t, t, t, t, t);
    printf("\n\t\t\t%s%c%c%c   %c%c%c  %c%c%c\t    %c%c%c%c%c%c%c%c%c%c   %c%c        %c%c   %c%c       %c%c     %c%c%c%c%c%c%c%c%c%c   %c%c        %c%c   %c%c", SPACE, t, t, t, t, t, t, t, t, t, t, t, t, t, t, t, t, t, t, t, t, t, t, t, t, t, t, t, t, t, t, t, t, t, t, t, t, t, t, t);
    printf("\n\t\t\t%s%c%c%c   %c%c%c  %c%c%c\t    %c%c      %c%c   %c%c        %c%c  %c%c        %c%c     %c%c      %c%c   %c%c        %c%c  %c%c", SPACE, t, t, t, t, t, t, t, t, t, t, t, t, t, t, t, t, t, t, t, t, t, t, t, t, t, t, t, t, t, t, t, t, t, t, t, t, t, t, t);
    printf("\n\t\t\t%s%c%c%c   %c%c%c  %c%c%c\t    %c%c      %c%c   %c%c        %c%c %c%c         %c%c     %c%c      %c%c   %c%c        %c%c %c%c", SPACE, t, t, t, t, t, t, t, t, t, t, t, t, t, t, t, t, t, t, t, t, t, t, t, t, t, t, t, t, t, t, t, t, t, t, t, t, t, t, t);
    printf("\n\t\t\t%s%c%c%c%c%c%c%c%c   %c%c%c\t    %c%c      %c%c   %c%c        %c%c%c%c          %c%c     %c%c      %c%c   %c%c        %c%c%c%c", SPACE, t, t, t, t, t, t, t, t, t, t, t, t, t, t, t, t, t, t, t, t, t, t, t, t, t, t, t, t, t, t, t, t, t, t, t, t, t, t, t, t, t, t, t, t, t, t, t, t);
    printf("\n\t\t\t%s%c%c%c   %c%c%c  %c%c%c\t    %c%c%c%c%c%c%c%c%c%c   %c%c        %c%c %c%c         %c%c     %c%c%c%c%c%c%c%c%c%c   %c%c        %c%c %c%c", SPACE, t, t, t, t, t, t, t, t, t, t, t, t, t, t, t, t, t, t, t, t, t, t, t, t, t, t, t, t, t, t, t, t, t, t, t, t, t, t, t);
    printf("\n\t\t\t%s%c%c%c   %c%c%c  %c%c%c\t    %c%c      %c%c   %c%c        %c%c  %c%c        %c%c     %c%c      %c%c   %c%c        %c%c  %c%c", SPACE, t, t, t, t, t, t, t, t, t, t, t, t, t, t, t, t, t, t, t, t, t, t, t, t, t, t, t, t, t, t, t, t, t, t, t, t, t, t, t);
    printf("\n\t\t\t%s%c%c%c   %c%c%c  %c%c%c%c%c%c%c%c%c   %c%c      %c%c   %c%c        %c%c   %c%c       %c%c     %c%c      %c%c   %c%c        %c%c   %c%c", SPACE, t, t, t, t, t, t, t, t, t, t, t, t, t, t, t, t, t, t, t, t, t, t, t, t, t, t, t, t, t, t, t, t, t, t, t, t, t, t, t, t, t, t, t, t, t);
    printf("\n\t\t\t%s%c%c%c%c%c%c%c%c   %c%c%c%c%c%c%c%c%c   %c%c      %c%c   %c%c%c%c%c%c%c   %c%c    %c%c   %c%c%c%c%c     %c%c      %c%c   %c%c%c%c%c%c%c   %c%c    %c%c", SPACE, t, t, t, t, t, t, t, t, t, t, t, t, t, t, t, t, t, t, t, t, t, t, t, t, t, t, t, t, t, t, t, t, t, t, t, t, t, t, t, t, t, t, t, t, t, t, t, t, t, t, t, t, t, t, t, t);

    while(i < 6)
    {
        system("color 9");
        stallLonger();
        system("color 1");
        stallLonger();
        system("color 9");
        stallLonger();
        system("color A");
        stallLonger();
        system("color 2");
        stallLonger();
        system("color A");
        stallLonger();
        system("color B");
        stallLonger();
        system("color 3");
        stallLonger();
        system("color B");
        stallLonger();
        system("color C");
        stallLonger();
        system("color 4");
        stallLonger();
        system("color C");
        stallLonger();
        system("color D");
        stallLonger();
        system("color 5");
        stallLonger();
        system("color D");
        stallLonger();
        system("color E");
        stallLonger();
        system("color 6");
        stallLonger();
        system("color E");
        stallLonger();
        system("color F");

        i++;
    }

    printf("\n\n\n\n\n\t\t\t\t\t\t\t\t");
    printstr(x);
    getch();
    printf("\n\n\n\n\n\t\t\t\t\t\t\t\tLOADING...\n\n\t\t\t\t\t\t\t\t");

    for (j = 0; j < 3; j++)
    {
        printf("%c%c%c%c%c%c%c%c%c%c", s, s, s, s, s, s, s, s, s, s);
        sleep(1);
    }
}