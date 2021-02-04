/*
   problem 4344 : 평균은 넘겠지
   BAEKJOON >> Contest > Waterloo's local Programming Contests > 28 September, 2002 D번
   busyhuman, choiking10, eric00513, djm03178
   
   주어진 학생 수와 점수를 가지고, 평균을 넘는 학생들의 비율을 반올림하여 소수점 셋째 자리까지 출력하는 프로그램
*/

#include <stdio.h>

int main(void)
{
    int c, n;
    float tot, avg, cnt;

    scanf("%d", &c);

    for (int i = 0; i < c; i++)
    {
        scanf("%d", &n);
        int score[n];
        
        tot = 0, avg = 0, cnt = 0;
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &score[j]);
            tot += score[j];
        }

        avg = tot / n;
        
        for (int k = 0; k < n; k++)
        {
            if (score[k] > avg)
            {
                cnt++;
            }
        }
        
        printf("%.3f%%\n", cnt/n*100);
    }

    return 0;
}
