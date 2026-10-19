#include<stdio.h>
int main(void)
{
    float quarts;
    float num;
    scanf("%f",&quarts);
    num = (quarts*950.0)/3.0e-23;
    printf("%e\n",num);

    return 0;
}
