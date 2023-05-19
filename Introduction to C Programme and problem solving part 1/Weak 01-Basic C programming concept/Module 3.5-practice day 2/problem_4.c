#include <stdio.h>
int main()
{
    long long A;
    long long B;
    float C;
    char D;
    scanf("%lld %lld %f %c", &A, &B, &C, &D);

    {
        printf("%lld\n", A);
        printf("%lld\n", B);
        printf("%.2f\n", C);
        printf("%c\n", D);
    }

    return 0;
}