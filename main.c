#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
  int n1, n2, result;
  char c;
  
  printf("enter the calculation : ");
  scanf("%i %c %i", &n1, &c, &n2);

  if(c == '+')
       result = n1 + n2;
  else if(c == '-')
       result = n1 - n2;
  else if(c == '*')
       result = n1 * n2;
  else if(c == '/')
       result = n1 / n2;
       
  printf("= %i\n", result);

  
  system("PAUSE");
  return 0;
}
