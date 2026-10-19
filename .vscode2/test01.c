#include<stdio.h>
int main(void)
{
    int i, j, k, a;
    a = 3;
    i = a;
    int cnt = 0;
    for (; i <= a +3; i++){
        k = a;
        for(k = a; k <= a + 3; k++){
            j = a;
            for(j = a; j <= a + 3; j++){
                if (i != j){
                    if (i != k){
                        if (j != k){
                            printf("%d%d%d", i, j, k);
                            cnt++;
                            if(cnt == 6){
                                printf("\n");
                                cnt = 0;
                            }else{
                                printf(" ");
                            }
                        }    
                    }    
                }
            }
        }
    }
    return 0;
}
