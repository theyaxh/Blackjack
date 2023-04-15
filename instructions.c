void instructions()
{
    int emoji = 2;
    
    char w[] = "Welcome to Mr. Jackie's Blackjack!!";
    printstr(w);
    printf("\n");
    printf("\nThe rules are simple,\n  ->the one with the sum of their cards closest to 21 without going over it wins!\n");
    printf("  ->If player card's sum goes over 21, he/she losses irrespective of the hand of Mr. Jackie and so is the same for Mr. Jackie!\n");
    printf("  ->Mr. Jackie will continue to draw cards until his cards add upto 17.\n");
    printf("  ->hit = get another card, stand = hold your hand and reveal Mr. Jackie's cards.\n");
    printf("  ->If a player gets an Ace, he/she will have an option to set the value of that card to 11 or 1, if\n");
    printf("    the sum of your cards exceed with the value of ace as 11 then choose 1 and try your luck:)\n");
    printf("Good Luck!%c\n", emoji);
}