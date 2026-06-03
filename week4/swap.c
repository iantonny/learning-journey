#include <stdio.h>

void swap (int *a,int *b);

int main(void)
{
    int x = 5;
    int y =10;

    printf("initial value of x is: %i\ninitial value of y is: %i\n", x , y);

    swap(&x , &y);

    printf("final value of X is: %i\nfinal value of y is: %i\n", x , y);


}

 void swap (int *a,int *b)
    {
      int tmp =0;
      tmp = *a;
     *a = *b;
     *b = tmp;
    }
