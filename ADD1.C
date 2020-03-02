#include <stdlib.h>
#include <time.h>
#include <stdio.h>


void Make(FILE*f, int n, unsigned int min, unsigned int max)
{
  srand(time(NULL));
  int i = 0;
  unsigned int a;
  for (i = 0; i < n; i++)
  {
    a = min+rand()%(max-min+1);
    fprintf(f, "%u\n", a);
  }
}