/*
   problem 2562 : 최댓값
   BAEKJOON >> Olympiad > 한국정보올림피아드 > 한국정보올림피아드시․도지역본선 > 지역본선 2007 > 초등부 1번
   sait2000
   
   9개의 서로 다른 자연수가 주어질 때, 최댓값을 찾고 그 최댓값이 몇 번째 수인지를 구하는 프로그램
*/

int main(void)
{
    long n, num, min=1000000, max=-1000000;
    scanf("%ld", &n);

    for (int i = 0; i < n; i++)
    {
        scanf("%ld", &num);
        if (max < num)
        {
            max = num;
        }
        if (num < min)
        {
            min = num;
        }
    }
    printf("%ld %ld\n", min, max);

    return 0;
}
