#include <stdio.h>

int factorial(int a)
{
    int i;
    int res = 1;

    for(i=0;i<a;i++)
    {
        res=res*(i+1);
    }

    return res;
}

int combination(int n, int r)
{
    int up, down;

    //분자계산 : up에 저장
    up= factorial(n);

    //분모 계산: down에 저장
    down=factorial(n-r)*factorial(r);

    return (up/down);
}

int main (void)
{
    //변수 선언
    int result;
    int n,r;
    //입력 받기
       //n입력 문구 찍기
       printf("input n :");
       //scanf n
       scanf("%i", &n);

       // r 입력문구 찍기
       printf("input r :");
       // scanf r
       scanf("%i", &r);

    //combination 계산
    result = combination (n, r);

    //결과 출력
printf("The combination result is %i\n", result);

return 0;
}