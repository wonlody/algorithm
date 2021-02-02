/*
   problem 2739 : 구구단
   BAEKJOON
   
   N을 입력받은 뒤, 구구단 N단을 출력하는 프로그램
*/

#include <stdio.h>

int main(void)
{
    int n;
    scanf("%d", &n);
    
    for (int i = 1; i < 10; i++)
    {
       printf("%d * %d = %d\n", n, i, n*i);
    }
   
    return 0;
}
