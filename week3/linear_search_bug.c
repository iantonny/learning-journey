#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int figures[] = {10, 20, 30, 50, 100, 200, 300, 500, 700, 1000};

    int number = get_int("number: ");

    for(int i = 0; i < 10; i++)
     //compares the number given by the user to the figures listed 
    if(figures[i] == number)
    {
        printf("Number found\n");
        return 0;
    }
    else
    {
        printf("Number not found\n");
        return 1;
    }
}
