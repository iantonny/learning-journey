#include <cs50.h>
#include <stdio.h>
#include <string.h>

int main(void)
{
    string cars[] = {"mercedes", "mazda", "toyota", "subaru",};
    string word = get_string("Name: ");
    int size = 4;
    for(int i = 0; i < size; i++)
    {
        // compare
        if(strcmp(cars[i], word) == 0)
        {
            printf("Found\n");
            return 0;
        }
    }
    printf("Not found\n");
    return 1;
}
