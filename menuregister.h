#include "head.h"
void MenuRegister()
{
    int i=0,j=0,n;
    system("cls");
    SetPosition(getx,gety);
    printf("��--------------------��¼-------------------��");
    SetPosition(getx,gety+13);
    printf("��");
    SetPosition(getx+46,gety+13);
    printf("��");
    for(i=2;i<46;i++)
    {
        SetPosition(getx+i,gety+13);
        printf("-");
    }
    for(j=1;j<13;j++)
    {
       SetPosition(getx,gety+j);
        printf("|");
        SetPosition(getx+46,gety+j);
        printf("|");
    }
    SetPosition(getx+16,gety+5);
    printf("1.User Login");
    SetPosition(getx+16,gety+8);
    printf("2.exit");
    SetPosition(getx,gety+16);
    printf("please choose:");
    scanf("%d",&n);
    switch(n)
    {
        case 1:UserLogin();break;
        case 2:exit(0);break;
        default:system("pause");
    }
    return Menu();
    // UserRegister()
}
