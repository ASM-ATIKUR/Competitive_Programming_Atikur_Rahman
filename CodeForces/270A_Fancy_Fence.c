#include<stdio.h>

int main()
{
    int t, n;
    scanf("%d", &t);
    while(t--)
    {
        scanf("%d", &n);
        if(!(360%(180-n))) printf("YES\n");
        else printf("NO\n");
    }
    return 0;
}
