#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
  int x, count = 0;
  int answer = 59;

  do{
    printf("Guess a number : ");
    scanf("%i", &x);
    
    count = count + 1;
    
    if(x > answer)
         printf("low!\n");
    else if(x < answer)
         printf("high!\n");
    
    }
  while(x != answer);
  
  printf("Congratulation! trails : %i\n", count);
  
  system("PAUSE");
  return 0;
}
