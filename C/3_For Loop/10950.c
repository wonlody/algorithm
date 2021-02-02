/*
   problem 10950 : A+B-3
   BAEKJOON >> baekjoon, djm03178
   
   두 정수 A와 B를 입력받은 다음, A+B를 출력하는 프로그램
*/

#include <stdio.h>

int main(void)
{
    int t, a, b;
    scanf("%d", &t);

    for (int i = 0; i < t; i++)
    {
        scanf("%d %d", &a, &b);
        printf("%d\n", a+b);
    }
}
