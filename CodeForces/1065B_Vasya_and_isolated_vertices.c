#include <stdio.h>

int main()
{
    long long int n, m, min, max, i;
    scanf("%lld %lld", &n, &m);
    max=0;
    if(m>=n) for(i=2; i<=n; i++)
    {
        if((i*(i-1))/2<=m)
        {
            max=n-i;
            break;
        }
    }
    else max=n-(m+1);
    if(m==0) max=n;
    min=n-(m*2);
    if(min<0) min=0;
    if(max<0) max=0;
    printf("%lld %lld\n", min, max);

    return 0;
}
