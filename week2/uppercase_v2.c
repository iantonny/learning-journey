#include <cs50.h>
#include <ctype.h>
#include <stdio.h>
#include <string.h>

int main(void)
{
    string name = get_string("input: ");

    printf("output:  ");

    for(int i = 0, a = strlen(name); i<a; i++)

     //if lower case convert to upper case
    printf("%c", toupper(name[i]));

    printf("\n");

}

