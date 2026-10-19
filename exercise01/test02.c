//1046 陶陶摘苹果
#include<stdio.h>
int main(void)
{
    int a[15];
    int n = 0;
    for(int i = 0; i < 10; i++){
        scanf("%d", &a[i] );
    }
    scanf("%d", &n);
    n += 30;
    int cnt = 0;
    for(int i = 0; i < 10; i++){
        if(a[i] <= n){
            cnt++;
        }
    }
    printf("%d\n", cnt);
    return 0;
}