#include <cs50.h>
#include <stdio.h>
int main(void)
{
   int a;
   do
   {
      a=get_int("what is a: ");
   }
   while (a<=0);
   for(int i=0; i<a; i++)
   {
    printf("ian mungai\n");
   }
}
