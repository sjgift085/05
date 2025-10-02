#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
  int num;
  
  printf("정수 하나를 입력하시오 :");
  scanf("%i", &num);
  
  if(num < 0)
      num = -num;
  
  printf("절대값은 %i 입니다.\n", num); 
  
  
  system("PAUSE");	
  return 0;
}
