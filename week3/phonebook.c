#include <cs50.h>
#include <stdio.h>
#include <string.h>

//data type combining name and number into one unit
typedef struct
{
    string name;
    string number;
}person;

int main(void)
{
    //size of the phonebook
    int n = 3;
    person people[n];

    people[0].name = "ian";
    people[0].number = "0712345678";

    people[1].name = "mary";
    people[1].number = "0723456789";

    people[2].name = "nimo";
    people[2].number = "0734567890";

    string name = get_string("Name:");
    for(int i = 0; i < n; i++)
    {
        // strcmp returns 0 when strings are equal
    if(strcmp(people[i].name, name) == 0)
    {
        printf("found: %s\n", people[i].number);
        return 0;
    }
    }
    // Name not found after checking all entries
    printf("Not found\n");
    return 1;
}
