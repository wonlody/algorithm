/*
   problem 2739 : 구구단
   BAEKJOON
   
   알람 시각이 주어졌을 때, 45분 일찍 시간을 바꾸는 프로그램
*/

#include <stdio.h>

int main(void)
{
    int h, m;
    scanf("%d %d", &h, &m);
    
    if (m >= 45)
    {
      printf("%d %d\n", h, m-45);
    }
    else
    {
      if (h != 0)
      {
        printf("%d %d\n", h-1, m+15);
      }
      else
      {
        printf("%d %d\n", h+23, m+15);
      }
    }
   
    return 0;
}
