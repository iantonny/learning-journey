#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int figures[] = {10, 20, 30, 50, 100, 200, 300, 500, 700, 1000};

    int number = get_int("number: ");

    for(int i = 0; i < 10; i++)

    if(figures[i] == number)
    {
        printf("number found\n");
    }
    printf("number not found\n");
}
