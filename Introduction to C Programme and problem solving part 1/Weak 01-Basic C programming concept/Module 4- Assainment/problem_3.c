#include<stdio.h>
int main()
{ 
    long long N;
    scanf("%lld",&N);

    if(N%3==0)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }

    return 0;
}