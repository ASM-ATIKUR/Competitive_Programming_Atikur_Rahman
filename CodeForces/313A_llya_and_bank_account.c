#include <stdio.h>

int main()
{
    int n, a;
    scanf(" %d", &n);
    if(n>=0) printf("%d\n", n);
    else
    {
        a=(n/100)*10;
        a=a+(n%10);
        if((n/10)>a) printf("%d\n", n/10);
        else printf("%d\n", a);
    }
    return 0;
}
