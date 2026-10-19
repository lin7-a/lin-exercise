#include<stdio.h>
#include<math.h>    // 提供pow()指数函数原型
int main(void)
{
    double principal, netIncome;
    float interest;
    int year;
    
    printf("input principal:");
    
    scanf("%lf",&principal);
                       //接收本金数据principal
    printf("input interest:");
    
    scanf("%f",&interest);
                        //接收利息数据interest
    printf("input year:");
    scanf("%d",&year);//接收存储年数数据year
    
    netIncome = principal*pow(1 + interest, year)-principal;
    //计算纯收益
    printf("本金%.2f存储%d年的纯收益是%.2f\n", principal, year, netIncome);    //输出结果
       
    return 0;
}
