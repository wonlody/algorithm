/*
   problem 2577 : 숫자의 개수
   BAEKJOON >> Olympiad > 한국정보올림피아드 > 한국정보올림피아드시․도지역본선 > 지역본선 2006 > 초등부 2번
   pineapple, tncks0121
   
   세 개의 자연수 A, B, C가 주어질 때,
   A × B × C를 계산한 결과에 0부터 9까지의 각각의 숫자가 몇 번씩 쓰였는지 구하는 프로그램
*/

#include <stdio.h>

int main(void)
{
    int num, tot = 1;
    int cnt[10] = {0, };

    for (int i = 0; i < 3; i++)
    {
        scanf("%d", &num);        
        tot = tot * num;
    }

    while (tot > 0)
    {
        num = tot % 10;
        cnt[num]++;
        tot /= 10;
    }

    for (int i = 0; i < 10; i++)
    {
        printf("%d\n", cnt[i]);
    }

    return 0;
}
