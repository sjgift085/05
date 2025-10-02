#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
  int num, i;
  int sum = 0;
  
  printf("input a number: ");
  scanf("%i", &num);
  
  for(i=0; i<=num; i++)
      sum = sum + i;

  printf("The result is %i\n", sum);
  
  system("PAUSE");
  return 0;
}
