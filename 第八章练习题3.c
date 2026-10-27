
#include<stdio.h>

int main()
{
    printf("Enter the operation of your choice:\n");
    printf("a.add           s.subtract\n");
    printf("m.multiply      d.divide\n");
    printf("q.quit\n");

    char ch;
    double num1,num2;
    double sum;
    int c;

    while(scanf(" %c",&ch)==1)
    {
        if(ch=='q'){
            printf("Bye.\n");
            break;
        }

        if(ch!='a'&&ch!='s'&&ch!='m'&&ch!='d'){
            printf("Please enter a,s,m,d or q:\n");
            continue;
        }

        printf("Enter first number:");
        while(scanf("%lf",&num1)!=1)
        {
            while((c=getchar())!='\n' && c!=EOF);
            if(c==EOF) return 0;
            printf("Not a number, enter first number:");
        }

        printf("Enter second number:");
        while(scanf("%lf",&num2)!=1)
        {
            while((c=getchar())!='\n' && c!=EOF);
            if(c==EOF) return 0;
            printf("Not a number, enter second number:");
        }

        if(ch=='d'){
            while(num2==0){
                printf("Enter a number other than 0:");

                while(scanf("%lf",&num2)!=1)
                {
                    while((c=getchar())!='\n' && c!=EOF);
                    if(c==EOF) return 0;
                    printf("Enter a number other than 0:");
                }
            }
        }

        switch(ch)
        {
            case 'a':
                sum=num1+num2;
                printf("%f+%f=%f\n",num1,num2,sum);
                break;

            case 's':
                sum=num1-num2;
                printf("%f-%f=%f\n",num1,num2,sum);
                break;

            case 'm':
                sum=num1*num2;
                printf("%f*%f=%f\n",num1,num2,sum);
                break;

            case 'd':
                sum=num1/num2;
                printf("%f/%f=%f\n",num1,num2,sum);
                break;
        }

        printf("Enter the operation of your choice:\n");
        printf("a.add           s.subtract\n");
        printf("m.multiply      d.divide\n");
        printf("q.quit\n");
    }

    return 0;
}
