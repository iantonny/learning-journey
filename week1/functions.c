#include <cs50.h>
#include <stdio.h>

void car(int n);
int main(void)
{
   int n;
   do
   {
    n=get_int("how many times ");
   }
   while(n<=0);
   car(n);
}
void car(int n)
{
   for(int i=0; i<n; i++)
   {
      printf("car\n");
   }
}
