/*
   problem 2753 : 윤년
   BACKJOON >> jh05013, rory143
   
   연도가 주어졌을 때, 윤년이면 1, 아니면 0을 출력하는 프로그램
*/

#include <stdio.h>

int main(void)
{
    int a;
    scanf("%d", &a);
    
    if (a % 4 == 0)
    {
      if (a % 100 == 0)
      {
        if (a % 400 == 0)
        {
          printf("1\n");
        }
        else
        {
          printf("0\n");
        }
      }
      else
      {
          printf("1\n");
      }
    }
    else
    {
      printf("0\n");
    }
   
    return 0;
}
