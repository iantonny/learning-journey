#include <cs50.h>
#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{

    char *s = get_string("s: ");

     if(s == NULL)

     {
        return 1;
    }

    char *t = malloc(strlen(s)+1);

    if(t == NULL)
    {
        return 1;
    }

    strcpy(t, s);
    for(int i = 0, n = strlen(t); i < n; i++)
    {

        t[i] = toupper(t[i]);

   }
    printf("Origiinal: %s\n", s);
    printf("Modified: %s\n", t);

    free(t);
}
