#include<stdio.h>
void one(void)
{
    printf("菜单一");
}
void two(void)
{
    printf("菜单二");
}
int main()
{
     typedef void (*menu)(void);
     menu menus[]={
         one,
         two
     };
     char ch;
     scanf("%c",&ch);
     menus[ch-'a']();
     return 0;
}