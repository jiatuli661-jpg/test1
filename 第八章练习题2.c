#include <stdio.h>

#define RATE1 8.75
#define RATE2 9.33
#define RATE3 10.00
#define RATE4 11.20

#define H_LIMIT 40
#define OVER_MULT 1.5

#define TAX1 300
#define TAX_R1 0.15
#define TAX2 150
#define TAX_R2 0.20
#define TAX_R3 0.25

int main(void)
{
    char ch;
    double pay, hour, gross, tax, net;
    while (1)
    {
        printf("*************************************************\n");
        printf("Enter the letter corresponding to the desired pay rate or action:\n");
        printf("a) $8.75/hr\t\tb) $9.33/hr\n");
        printf("c) $10.00/hr\t\td) $11.20/hr\n");
        printf("q) quit\n");
        printf("*************************************************\n");
        scanf(" %c", &ch);

        if (ch == 'q')
        {
            printf("Bye.\n");
            break;
        }
        switch (ch)
        {
            case 'a': pay = RATE1; break;
            case 'b': pay = RATE2; break;
            case 'c': pay = RATE3; break;
            case 'd': pay = RATE4; break;
            default:
                printf("请输入 a/b/c/d/q!\n\n");
                continue;
        }

        printf("请输入本周工作小时：");
        scanf("%lf", &hour);

        // 计算税前工资
        if (hour <= H_LIMIT)
            gross = hour * pay;
        else
            gross = H_LIMIT * pay + (hour - H_LIMIT) * pay * OVER_MULT;

        // 分段计税
        if (gross <= TAX1)
            tax = gross * TAX_R1;
        else if (gross <= TAX1 + TAX2)
            tax = TAX1 * TAX_R1 + (gross - TAX1) * TAX_R2;
        else
            tax = TAX1 * TAX_R1 + TAX2 * TAX_R2 + (gross - TAX1 - TAX2) * TAX_R3;

        net = gross - tax;
        printf("税前工资：$%.2f\n", gross);
        printf("税金：$%.2f\n", tax);
        printf("净收入：$%.2f\n\n", net);
    }
    return 0;
}