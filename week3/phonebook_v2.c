#include <cs50.h>
#include <ctype.h>
#include <stdio.h>
#include <string.h>

//custom data type 
typedef struct
{
    string name;
    string number;
}persons;
int main(void)
{
    int N = 3;
    persons people[N];

    people[0].name =("ian");
    people[0].number =("0712345678");

    people[1].name = ("mary");
    people[1].number = ("0723456789");

    people[2].name =("tabitha");
    people[2].number = ("071234567890");

    string name = get_string("Name:");
  
     //change every character of the name to lowercase before comaparing
    for(int i = 0, n = strlen(name); i < n; i++ )
    {
        name[i] = tolower(name[i]);
    }

    for(int i = 0; i < N; i++)
    {
      //compare the name given by user before with the ones in the array
        if(strcmp(people[i].name, name) == 0)
        {
            printf("Found: %s\n", people[i].number);
            return 0;
        }
    }
    printf("Not found\n");
    return 1;
}
