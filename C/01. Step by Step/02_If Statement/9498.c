/*
   problem 9498 : 시험 성적
   BAEKJOON >> baekjoon
   
   시험 점수를 입력받아, 시험 성적{A(90~100), B(80~89), C(70~79), D(60~69), F(나머지)}을 출력하는 프로그램
*/

#include <stdio.h>

int main(void)
{
    int a;
    scanf("%d", &a);
    
    if (90 <= a && a <= 100)
    {
      printf("A\n");
    }
    else if (80 <= a)
    {
      printf("B\n");
    }
    else if (70 <= a)
    {
      printf("C\n");
    }
    else if (60 <= a)
    {
      printf("D\n");
    }
    else
    {
      printf("F\n");
    }
   
    return 0;
}
