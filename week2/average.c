#include <cs50.h>
#include <stdio.h>

float average( int N, int scores[]);

int main(void)
{
    const int N=3;
    int scores[N];
    for(int i=0; i<N; i++)
    {
        scores[i]= get_int("score: ");
    }
    printf("Average:%f\n",average(N, scores));
}
float average( int N, int scores[])
 {
   float sum=0;
 for(int i=0; i<N; i++)
  {
  sum+=scores[i];
  }
  return sum/N;
 }
