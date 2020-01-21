#include <stdio.h>
#include <stdlib.h>
#include<conio.h>
int menu();
void bus();
void riksha();
void cycle();
void Delete();
void showdetail();
int nor=0,nob=0,noc=0,amt=0,cnt=0;
int main()
{
    while(1)
    {
    switch(menu())
    {
        case 1: bus();
        break;
        case 2:cycle();
        break;
        case 3: riksha();
        break;
        case 4: showdetail();
        break;
        case 5: Delete();
        break;
        case 6: exit(0);
        default: printf("\n invalid choice");
    }
    getch();
    }
    return 0;
}
int menu()
{
    int ch;
    printf("\n1.enter bus: \n2.enter cycle: \n3.enter riksha: \n4.show status: \n5.delete data\n6.exit\n");
    printf("\n enter ur choice:\n");
    scanf("%d",&ch);
    return(ch);
}
void Delete()
{
    nob=0;
    noc=0;
    nor=0;
    amt=0;
    cnt=0;
}
void showdetail()
{
    printf("\n no of bus:%d",nob);
    printf("\n no of cycle:%d",nor);
    printf("\n no of riksha:%d",nor);
    printf("\n no of vehicle:%d",cnt);
    printf("\n total gain amount:%d",amt);
}
void riksha()
{
    printf("\n entry successful");
    nor++;
    amt=amt+50;
    cnt++;
}
void cycle()
{
    printf("\n entry successful");
    noc++;
    amt=amt+20;
    cnt++;
}
void bus()
{
    printf("\n entry successful");
    nob++;
    amt=amt+100;
    cnt++;
}
