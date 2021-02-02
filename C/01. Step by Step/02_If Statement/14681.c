/*
   problem 14681 : 사분면 고르기
   BAEKJOON >> Olympiad > Canadian Computing Competition & Olympiad > 2017 > CCC 2017 Junior Division 1번
   jh05013
   
   주어진 점(x, y)이 어느 사분면에 있는지 출력하는 프로그램
*/

#include <stdio.h>

int main(void)
{
    int x, y;
    scanf("%d", &x);
    scanf("%d", &y);
    
    if (x > 0)
    {
      if (y > 0)
      {
        printf("1\n");
      }
      else
      {
        printf("4\n");
      }
    }
    else
    {
      if (y > 0)
      {
        printf("2\n");
      }
      else
      {
        printf("3\n");
      }
    }
   
    return 0;
}
