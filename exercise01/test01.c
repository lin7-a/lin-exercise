//1035 级数求和
#include<stdio.h>
int main(void)
{
    int k, n = 1;
    double s;
    scanf("%d", &k);
    s = 0.0;
    for ( n = 1; s <= k; n++) {
        s += 1.0/n;
    }
    printf("%d", n - 1);
    return 0;
}