#include <stdlib.h>
#include <stdio.h>
#include "ADD1.H"

int main(int argc, char* argv[])
{

  if (argc < 4)
  {
    printf("ERR");
    return 1;
  }

  FILE* f = fopen("C:\\Users\\a_kul\\Documents\\Visual Studio 2013\\Projects\\ConsoleApplication4\\FirstPart\\file.txt", "w");

  if (f == NULL)
  {
    printf("ERRr");
    return 1;
  }

  unsigned int min = atoi(argv[3]);
  unsigned int max = atoi(argv[4]);
  int t = atoi(argv[2]);
  Make(f, t, min, max);
  printf("It's OK!\n");
  fclose(f);
  return 1;

}