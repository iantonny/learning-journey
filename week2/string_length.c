#include <cs50.h>
#include <stdio.h>
#include <string.h>

int main(void)
{
    string name = get_string("Enter your name: ");
    int length = strlen(name);
    printf("Your name has %i letters\n", length);
    for (int i = 0; i < length; i++)
    {
        printf("%c\n", name[i]);
    }
}
