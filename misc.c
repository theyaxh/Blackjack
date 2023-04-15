void stall()
{
    for(int i = 0; i < 4500000; i++)
        ;
}

void stallLonger()
{
    for(int i = 0; i < 5200000; i++)
        ;
}

void printstr(char string[])
{
    int i = 0;
    while (string[i] != '\0')
    {
        printf("%c", string[i]);
        stall();
        stall();
        i++;
    }
}