#include <stdio.h>
int main()
{
    int a, b, sum, mul, mins, dvd;

    scanf("%d %d", &a, &b);

    sum = a + b;
    printf("%d + %d = %d\n", a, b, sum);

    mins = b - a;
    printf("%d - %d = %d\n", a, b, mins);

    mul = a * b;
    printf("%d * %d = %d\n", a, b, mul);

    dvd = b / a;
    printf("%d / %d = %d\n", a, b, dvd);

    return 0;
}