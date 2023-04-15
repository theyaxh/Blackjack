void push(int stack[], int n, int *top, int item)
{
    if(*top == n - 1)
        printf("\nStack Overflow!\n");
    else
    {
        ++*top;
        stack[*top] = item;
    }
}

int pop(int stack[], int n, int *top)
{
    if(*top == -1)
        printf("\nStack Underflow!\n");
    else
    {
        int item = stack[*top];
        --*top;
        return item;
    }
}
