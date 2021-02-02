/*
   problem 1330 : 두 수 비교하기
   BAEKJOON
   
   두 정수 A, B를 입력받아, A와 B를 비교한 결과를 출력하는 프로그램
*/

#include <stdio.h>

int main(void)
{
    int a, b;
    scanf("%d %d", &a, &b);
    
    if (a > b)
    {
      printf(">\n");
    }
    else if (a < b)
    {
      printf("<\n");
    }
    else
    {
      printf("==\n");
    }
   
    return 0;
}
