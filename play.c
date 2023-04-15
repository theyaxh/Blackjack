#define CardPattern_1 "*************\n" 
#define CardPattern_2 "*           *\n"

// 3 = hearts
// 4 = diamonds
// 5 = clubs
// 6 = spades

int convert_facecards(int);
void shuffle_cards(int []);
void print_card(int);
void push(int [], int, int *, int);
int pop(int [], int, int *);
void stall();
void stallLonger();
void printstr(char []);

void play()
{
    int i, psum = 0, compsum = 0, emoji = 1, totalcards = 52, top = -1;
    int deck[52];
    int stackofcards[52];
	int pcards[5] = {0};
	int compcards[5] = {0};
    char n;
    
    shuffle_cards(deck);

    for(i = 0; i < 52; i++)
        push(stackofcards, totalcards, &top, deck[i]);

    pcards[0] = pop(stackofcards, totalcards, &top);
    pcards[1] = pop(stackofcards, totalcards, &top);
    compcards[0] = pop(stackofcards, totalcards, &top);
    compcards[1] = pop(stackofcards, totalcards, &top);

    char y1[] = " >-> You've chosen the value of Ace as 11.";
    char y2[] = " >-> You've chosen the value of Ace as 1.";
    char y3[] = "~Mr. Jackie's cards:";
    char w1[] = "~Mr. Jackie's 1st card:";
    char w2[] = "~Your cards:";

    printf("\n\n");
    printstr(w1);
    printf("\n");
    print_card(compcards[0]);
    printstr(w2);
    printf("\n");
    print_card(pcards[0]);
    print_card(pcards[1]);

    for(i = 0; i < 2; i++)
    {
        if(pcards[i] % 100 == 1)
        {
            printf("->Choose the value of Ace for card %d, (Enter a for 11 and b for 1): ", i + 1);
            do
            {
                n = getchar();
            }while((n != 'a') && (n != 'b'));

            if(n == 'a')
            {
                printf("\n");
                printstr(y1);
                printf("\n");
                psum += 11;
            }
            else
            {
                printf("\n");
                printstr(y2);
                printf("\n");
                psum += 1;
            }
        }
        else if(convert_facecards(pcards[i]) % 100 == 10)
            psum += 10;
        else
            psum += pcards[i] % 100;

        if(psum > 21)
        {
            printstr(y3);
            printf("\n");
            print_card(compcards[0]);
            print_card(compcards[1]);
            char y4[] = " >-> Mr. Jackie WINS!! because the sum of your cards is over 21!";
            printf("\n");
            printstr(y4);
            printf("\n");
            return;
        }
    }

    char y5[] = " >-> SUM OF YOUR CARDS CURRENTLY is ";
    printstr(y5);
    printf("%d\n", psum);
    stallLonger();
    stallLonger();

    if(psum == 21)
    {
        if((((convert_facecards(compcards[0])) % 100 == 1) && ((convert_facecards(compcards[1])) % 100 == 10)) || (((convert_facecards(compcards[0])) % 100 == 10) && ((convert_facecards(compcards[1])) % 100 == 1)))
        {
            printf("\n~Mr. Jackie's cards:\n");
            print_card(compcards[0]);
            print_card(compcards[1]);
            char y6[] = " >-> Push! its a draw, you and Mr. Jackie both have a Blackjack";
            printf("\n");
            printstr(y6);
            printf("\n");
            return;
        }
        else
        {
            printf("\n~Mr. Jackie's cards:\n");
            print_card(compcards[0]);
            print_card(compcards[1]);
            char y7[] = " >-> You WIN!! Its a blackjack!";
            printstr(y7);
            printf("\n");
            return;
        }
    }
    
    for(i = 0; i < 3; i++)
    {   
        char y8[] = "->Do you want to HIT or STAND?(Enter h to hit and s to stand): ";
        printf("\n");
        printstr(y8);
        do
        {
            n = getchar();
        }while((n != 'h') && (n != 's'));

        if(n == 'h')
        {
            pcards[i + 2] = pop(stackofcards, totalcards, &top);
            printf("\nYour card %d is:\n", i + 3);
            print_card(pcards[i + 2]);

            if(pcards[i + 2] % 100 == 1)
            {
                printf("->Choose the value of Ace for card %d, (Enter a for 11 and b for 1): ", i + 1);
                do
                {
                    n = getchar();
                }while((n != 'a') && (n != 'b'));

                if(n == 'a')
                {
                    printstr(y1);
                    printf("\n");
                    psum += 11;
                }
                else
                {
                    printstr(y2);
                    printf("\n");
                    psum += 1;
                }
            }
            else if(convert_facecards(pcards[i + 2]) % 100 == 10)
                psum += 10;
            else
                psum += pcards[i + 2] % 100;
            
            printstr(y5);
            printf("%d\n", psum);
            stallLonger();
            stallLonger();

            if(psum > 21)
            {
                printf("\n");
                printstr(y3);
                printf("\n");
                print_card(compcards[0]);
                print_card(compcards[1]);
                char y9[] = " >-> Mr. Jackie WINS!! because the sum of your cards is over 21!";
                printstr(y9);
                printf("\n");
                return;
            }
        
            if(psum == 21)
                break;
        }
        else
        {
            char y10[] = " >-> FINAL SUM OF YOUR CARDS is ";
            printf("\n");
            printstr(y10);
            printf("%d\n", psum);
            stallLonger();
            stallLonger();
            break;
        }
    }   
    
    if((i == 3) && (psum <= 21))
    {
        char y11[] = " >-> You WIN!! because the sum of your 5 cards is no larger than 21! you're quite lucky!!";
        printstr(y11);
        printf("\n");
        return;
    }

    char m1[] = "~Mr. Jackie's first 2 cards:";
    char m2[] = " >-> Sum of Mr. Jackie's cards currently is ";

    char n1[] = " >-> Mr. Jackie chosen the value of Ace as 11.";
    char n2[] = " >-> Mr. Jackie chosen the value of Ace as 1.";

    printf("\n");
    printstr(m1);
    printf("\n");
    print_card(compcards[0]);
    print_card(compcards[1]);

    if(compcards[0] % 100 + compcards[1] % 100 == 2)
    {
        compsum = 12;
        printstr(m2);
        printf("%d\n", compsum);
        stallLonger();
        stallLonger();
    }
    else if((((convert_facecards(compcards[0])) % 100 == 1) && ((convert_facecards(compcards[1])) % 100 == 10)) || (((convert_facecards(compcards[0])) % 100 == 10) && ((convert_facecards(compcards[1])) % 100 == 1)))
    {
        compsum = 21;
        printstr(m2);
        printf("%d\n", compsum);

        char m3[] = " >-> Mr. Jackie WINS as he has a BLACKJACK! better luck next time!";
        printf("\n");
        printstr(m3);
        printf("\n");
        return;
    }
    else if((compcards[0] % 100 == 1) || (compcards[1] % 100 == 1))
    {
        compsum = ((compcards[0] % 100) + (compcards[1]) % 100) + (rand() % 2) * 10;
        printstr(m2);
        printf("%d\n", compsum);
    }
    else
    {
        compsum = (convert_facecards(compcards[0]) % 100 + convert_facecards(compcards[1]) % 100);
        printstr(m2);
        printf("%d\n", compsum);
    }

    for(i = 0; i < 3 && compsum < 17; i++)
    {
        compcards[i + 2] = pop(stackofcards, totalcards, &top);
        printf("\n >-> Mr. Jackie's card %d is:\n", i + 3);
        print_card(compcards[i + 2]);

        if(compcards[i + 2] % 100 == 1)
        {
            if(compsum < 21)
            {
                compsum += 11;
                printstr(n1);
                printf("\n");
                printstr(m2);
                printf("%d\n", compsum);
            }
            else
            {
                compsum += 1;
                printstr(n2);
                printf("\n");
                printstr(m2);
                printf("%d\n", compsum);
            }
        }
        else
        {
            compsum += (convert_facecards(compcards[i + 2])) % 100;
            printstr(m2);
            printf("%d\n", compsum);
        }
    }

    if((i == 3) && (compsum <= 21))
    {
        char o1[] = " >-> Mr. Jackie WINS because the sum of his 5 cards is no larger than 21! He is quite lucky!!";
        printf("\n");
        printstr(o1);
        printf("\n");
        return;
    }

    if((compsum > 21) || (psum > compsum))
    {
        char o2[] = " >-> You WIN!!";
        printf("\n");
        printstr(o2);
        printf("%c\n", emoji);
        return;
    }
    else if(psum == compsum)
    {
        char o3[] = " >-> Push! its a draw, yours and Mr. Jackie's card add up to the same!";
        printf("\n");
        printstr(o3);
        printf("\n");
        return;
    }
    else if(compsum > psum)
    {
        char o4[] = " >-> Mr. Jackie WINS!! better luck next time!";
        printf("\n");
        printstr(o4);
        printf("\n");
        return;
    }
}   

int convert_facecards(int val)
{
    if((val % 100 == 11) || (val % 100 == 12) || (val % 100 == 13))
        return ((val / 100) * 100 + 10);
    else
        return val;
}

void shuffle_cards(int deck[])
{
    int i, temp;
    int tempdeck[52];

    for(i = 0; i < 52; i++)
        tempdeck[i] = (((i / 13 + 3) * 100) + (i % 13) + 1);

    srand(time(NULL));
    for(i = 0; i < 52; i++)
    {
        do
        {
            temp = rand() % 52;
        }while(tempdeck[temp] == 0);

        deck[i] = tempdeck[temp];
        tempdeck[temp] = 0;
    }
}

void print_card(int card)
{
    char suit;
    int value;
    
    suit = card / 100;
    value = card % 100;
    
    switch(value)
    {   
        case 1:
        {
            printf("%s", CardPattern_1);
            printf("* A         *\n");
            printf("%s", CardPattern_2);
            printf("%s", CardPattern_2);
            printf("*     %c     *\n", suit);
            printf("%s", CardPattern_2);
            printf("%s", CardPattern_2);
            printf("*         A *\n");
            printf("%s", CardPattern_1);

            break;
        }

        case 2:
        case 3:
        case 4:
        case 5:
        case 6:
        case 7:
        case 8:
        case 9:
        case 10:
        {
            printf("%s", CardPattern_1);
            printf("*%2d         *\n", value);
            printf("%s", CardPattern_2);
            printf("%s", CardPattern_2);
            printf("*     %c     *\n", suit);
            printf("%s", CardPattern_2);
            printf("%s", CardPattern_2);
            printf("*         %2d*\n", value);
            printf("%s", CardPattern_1);

            break;
        }

        case 11:
        {
            printf("%s", CardPattern_1);
            printf("* J         *\n");
            printf("%s", CardPattern_2);
            printf("%s", CardPattern_2);
            printf("*     %c     *\n", suit);
            printf("%s", CardPattern_2);
            printf("%s", CardPattern_2);
            printf("*         J *\n");
            printf("%s", CardPattern_1);

            break;
        }

        case 12:
        {
            printf("%s", CardPattern_1);
            printf("* Q         *\n");
            printf("%s", CardPattern_2);
            printf("%s", CardPattern_2);
            printf("*     %c     *\n", suit);
            printf("%s", CardPattern_2);
            printf("%s", CardPattern_2);
            printf("*         Q *\n");
            printf("%s", CardPattern_1);

            break;
        }
    
        case 13:
        {
            printf("%s", CardPattern_1);
            printf("* K         *\n");
            printf("%s", CardPattern_2);
            printf("%s", CardPattern_2);
            printf("*     %c     *\n", suit);
            printf("%s", CardPattern_2);
            printf("%s", CardPattern_2);
            printf("*         K *\n");
            printf("%s", CardPattern_1);
            break;
        }
    }
    printf("\n");
}