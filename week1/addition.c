#include <cs50.h>
#include <stdio.h>
int main(void)
{
    int a=get_int("what is the value of a? ");
    int b=get_int("what is the value of b? ");

    printf("the total is:%i\n",a+b);
}
