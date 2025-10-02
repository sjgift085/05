#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
  int num;
  
  printf("정수 하나를 입력하시오 :");
  scanf("%i", &num);
  
  if(num > 0)
         printf("정수입니다.\n");
  else if(num < 0)
       printf("음수입니다.\n");
  else
      printf("0 입니다.\n");    
  
  system("PAUSE");	
  return 0;
}
