#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
  int num;
  
  printf("���� �ϳ��� �Է��Ͻÿ� :");
  scanf("%i", &num);
  
  if(num < 0)
      num = -num;
  
  printf("���밪�� %i �Դϴ�.\n", num); 
  
  
  system("PAUSE");	
  return 0;
}
