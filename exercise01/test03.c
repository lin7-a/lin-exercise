#include<stdio.h>
int main(void)
{
    int l,m;
    scanf("%d %d",&l,&m);
    int tree[10005];
    for(int i = 0; i <= l; i++){
        tree[i] = 1;
    }
    for(int i = 0; i < m; i++){
        int a,b;
        scanf("%d %d",&a,&b);
        for(int j = a; j <=b; j++){
            tree[j] = 0;
        }
    }
    int cnt = 0;
    for(int i = 0; i <= l; i++){
        if(tree[i] == 1){
            cnt++;
        }
    }
    printf("%d", cnt);
    return 0;
}