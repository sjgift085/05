#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
  int num;
  
  printf("���� �ϳ��� �Է��Ͻÿ� :");
  scanf("%i", &num);
  
  if(num > 0)
         printf("�����Դϴ�.\n");
  else if(num < 0)
       printf("�����Դϴ�.\n");
  else
      printf("0 �Դϴ�.\n");    
  
  system("PAUSE");	
  return 0;
}
