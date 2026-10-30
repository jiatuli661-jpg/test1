#include<stdio.h>
#include<string.h>
#include<ctype.h>
#define SEATNUM 12
struct seat{
    int id;
    int book;//1表示已经预定，0表示还未预定123456789101112131415161718192021222324252627282930
    char fname[20];
    char lname[20];
};
void count(struct seat plane[]);
void list(struct seat plane[]);
void plane1(struct seat plane[]);
void seat1(struct seat plane[]);
void seat2(struct seat plane[]);
void menu(void);
int main(void)
{
    struct seat plane[SEATNUM];
    char choice;
    for(int i=0;i<SEATNUM;i++)
    {
        plane[i].id=i+1;
        plane[i].book=0;
        plane[i].fname[0]='\0';
        plane[i].lname[0]='\0';
    }
    while(1)
    {
        menu();
        scanf("%c",&choice);
        choice=tolower(choice);
        switch(choice)
        {
            case'a':
            count(plane);
            break;
            case'b':
            list(plane);
            break;
            case'c':
            plane1(plane);
            break;
            case'd':
            seat1(plane);
            break;
            case'e':
            seat2(plane);
            break;
            case'f':
            printf("退出");
            return 0;
            default:
            printf("输入错误，重新输入");
               }
    }
}
void menu(void)
{
        printf("To choose a function, enter its letter label:\n");
        printf("a) Show number of empty seats\n");
        printf("b) Show list of empty seats\n");
        printf("c) Show alphabetical list of seats\n");
        printf("d) Assign a customer to a seat assignment\n");
        printf("e) Delete a seat assigment\n");
        printf("f) Quit\n");
}
void count(struct seat plane[])
{
    int cnt=0;
    for(int i=0;i<SEATNUM;i++)
    {
        if(!plane[i].book)cnt++;
    }
    printf("Empty seats:%d\n",cnt);
}
void list(struct seat plane[])
{
    printf("Empty seat list:");
    int has=0;
    for(int i=0;i<SEATNUM;i++)
    {
        if(!plane[i].book)
        {
            printf("%d",plane[i].id);
            has=1;
        }
    }
    if(!has)printf("No empty seats");
    printf("\n");
}
void plane1(struct seat plane[])
{
    struct seat temp[SEATNUM];
    int idx=0;
    for(int i=0;i<SEATNUM;i++)
    {
        if(plane[i].book)
        {
            temp[idx++]=plane[i];
        }
    }
    for(int i=0;i<idx-1;i++)
    {
        for(int j=0;j<idx-1-i;j++)
        {
            if(strcmp(temp[j].lname,temp[j+1].lname)>0)
            {
                struct seat t=temp[j];
                temp[j]=temp[j+1];
                temp[j+1]=t;
            }
        }
    }
    printf("Seats sorted by last name\n");
    for(int i=0;i<idx;i++)
    {
        printf("Seat %d: %s %s\n",temp[i].id,temp[i].fname,temp[i].lname);
    }
    if(idx==0)printf("No seats booked yet.\n");
}
void seat1(struct seat plane[])
{
    int seatid;
    printf("Enter seat number(1~12,-1 to quit):");
    if(scanf("%d",&seatid)!=1||seatid==-1)return;
    if(seatid<1||seatid>12)
    {
        printf("座位号非法\n");
        return;
    }
    int pos=seatid-1;
    if(plane[pos].book)
    {
        printf("该座位已被预定\n");
        return;
    }
    printf("Enter first name\n");
    scanf("%s",plane[pos].fname);
    printf("Enter last name\n");
    scanf("%s",plane[pos].lname);
    plane[pos].book=1;
    printf("预订成功\n");
}
void seat2(struct seat plane[])
{
    int seatid;
    printf("Enter seat number ato cancel(1~12,-1 to quit)\n");
    if(scanf("%d",&seatid)!=1||seatid==-1)return;
    if(seatid<1||seatid>12)
    {
        printf("座位号非法\n");
        return;
    }
    int pos=seatid-1;
    if(!plane[pos].book)
    {
        printf("这个座位本来就空闲\n");
        return;
    }
    plane[pos].book=0;
    plane[pos].fname[0]='\0';
    plane[pos].lname[0]='\0';
    printf("取消预订成功\n");
}