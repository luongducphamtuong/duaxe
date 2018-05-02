#include <iostream>
#include<windows.h>
#include<time.h>
#include<stdlib.h>
#include<conio.h>
#include"console.h"
#include<stdio.h>

#define consoleHeight 30
#define consoleWidth 80
#define roadWidth 43

using namespace std;

struct ToaDo
{
    int x,y;
};
struct HinhDang
{
    char a[3][3];
};
struct VatCan
{
    ToaDo td;
    HinhDang hd;
};
struct Xe
{
    ToaDo td;
    HinhDang hd;
    int diem;
};
void KhoiTao(Xe &xe,VatCan &vc,VatCan &vc1,VatCan &vc2,VatCan &vc3,VatCan &vc4,VatCan &vc5)
{

    xe.diem = 0;
    xe.td.y = consoleHeight - 2;
    xe.td.x = roadWidth / 2;
    xe.hd.a[0][0] = xe.hd.a[0][2] = xe.hd.a[2][0] = xe.hd.a[2][2] = '0';
    xe.hd.a[1][0] = '^';
    xe.hd.a[0][1] = xe.hd.a[2][1] = '|';
    xe.hd.a[1][2] = '_';
    xe.hd.a[1][1] = '$';
    // Vat can

    vc.td.x = 2 + rand() % (roadWidth - 4);
    vc.td.y  = -1;
    for(int i=0;i<3;i++)
      for(int j=0;j<3;j++)
            vc.hd.a[i][j]='$';

    vc1.td.x = 2 + rand() % (roadWidth - 4);
    vc1.td.y  = -3;
    for(int i=0;i<3;i++)
      for(int j=0;j<3;j++)
            vc1.hd.a[i][j]='*';

    vc2.td.x = 2 + rand() % (roadWidth - 4);
    vc2.td.y  = -3;
    for(int i=0;i<3;i++)
      for(int j=0;j<3;j++)
            vc2.hd.a[i][j]='#';

     vc3.td.x = 2 + rand() % (roadWidth - 4);
    vc3.td.y  = -6;
    for(int i=0;i<3;i++)
      for(int j=0;j<3;j++)
            vc3.hd.a[i][j]='!';

    vc4.td.x = 2 + rand() % (roadWidth - 4);
    vc4.td.y  = -23;
    for(int i=0;i<3;i++)
      for(int j=0;j<3;j++)
            vc4.hd.a[i][j]='!';

    vc5.td.x = 2 + rand() % (roadWidth - 4);
    vc5.td.y  = -30;
    for(int i=0;i<3;i++)
      for(int j=0;j<3;j++)
            vc5.hd.a[i][j]='!';

}
void HienThi(Xe &xe,VatCan &vc,VatCan &vc1,VatCan &vc2,VatCan &vc3,VatCan &vc4,VatCan &vc5)
{
    // hien thi bien
    clrscr();
    TextColor(ColorCode_DarkPink);
    for(int i = 0;i<consoleHeight;i++)
        {
            gotoXY(0,i);
            cout<< ":!";
        }
    for(int i = 0;i<consoleHeight;i++)
    {
        gotoXY(roadWidth,i);
        cout<< "!:";
    }
    // hien thi xe
    for(int kDong = -1;kDong <= 1;kDong++)
        for(int kCot = -1;kCot <= 1;kCot++)
    {
        TextColor(ColorCode_Red);
        int x = kCot + xe.td.x;
        int y = kDong + xe.td.y;

        gotoXY (x,y);
        cout<< xe.hd.a[kCot+1][kDong+1];
    }
    //hien thi vat can
    for(int kDong = -1;kDong <= 1;kDong++)
        for(int kCot = -1;kCot <= 1;kCot++)
    {
        TextColor(ColorCode_Yellow);
        int x = kCot + vc.td.x;
        int y = kDong + vc.td.y;
        if(y >= 0 && y< consoleHeight)
        {
           gotoXY (x,y);
        cout<< vc.hd.a[kCot+1][kDong+1];
        }
    }

    for(int kDong = -1;kDong <= 1;kDong++)
        for(int kCot = -1;kCot <= 1;kCot++)
    {
        TextColor(ColorCode_White);
        int x = kCot + vc1.td.x;
        int y = kDong + vc1.td.y;
        if(y >= 0 && y< consoleHeight)
        {
           gotoXY (x,y);
        cout<< vc1.hd.a[kCot+1][kDong+1];
        }
    }


    for(int kDong = -1;kDong <= 1;kDong++)
        for(int kCot = -1;kCot <= 1;kCot++)
    {
        TextColor(ColorCode_DarkRed);
        int x = kCot + vc2.td.x;
        int y = kDong + vc2.td.y;
        if(y >= 0 && y< consoleHeight)
        {
           gotoXY (x,y);
        cout<< vc2.hd.a[kCot+1][kDong+1];
        }
    }

     for(int kDong = -1;kDong <= 1;kDong++)
        for(int kCot = -1;kCot <= 1;kCot++)
    {
        TextColor(ColorCode_Pink);
        int x = kCot + vc3.td.x;
        int y = kDong + vc3.td.y;
        if(y >= 0 && y< consoleHeight)
        {
           gotoXY (x,y);
        cout<< vc3.hd.a[kCot+1][kDong+1];
        }
    }

     for(int kDong = -1;kDong <= 1;kDong++)
        for(int kCot = -1;kCot <= 1;kCot++)
    {
        TextColor(ColorCode_Pink);
        int x = kCot + vc4.td.x;
        int y = kDong + vc4.td.y;
        if(y >= 0 && y< consoleHeight)
        {
           gotoXY (x,y);
        cout<< vc4.hd.a[kCot+1][kDong+1];
        }
    }

     for(int kDong = -1;kDong <= 1;kDong++)
        for(int kCot = -1;kCot <= 1;kCot++)
    {
        TextColor(ColorCode_Pink);
        int x = kCot + vc5.td.x;
        int y = kDong + vc5.td.y;
        if(y >= 0 && y< consoleHeight)
        {
           gotoXY (x,y);
        cout<< vc5.hd.a[kCot+1][kDong+1];
        }
    }
    gotoXY(roadWidth +2,10);
    TextColor(ColorCode_Cyan);
    cout<<"Diem = "<<xe.diem;


}
void DiChuyen (Xe &xe){
     if(kbhit())
    {
        int key = _getch();
            if(key == 'A' || key == 'a' && xe.td.x >2)
                xe.td.x--;
            else if(key == 'D'|| key == 'd' &&xe.td.x < roadWidth -1)
                xe.td.x++;
    }

}
int Xuly (Xe &xe, VatCan &vc,VatCan &vc1,VatCan &vc2,VatCan &vc3,VatCan &vc4,VatCan &vc5, int &ThoiGianSleep)
{
    vc.td.y++;

    if(vc.td.y > consoleHeight)
    {
        xe.diem++;
        vc.td.x = 4 + rand() % (roadWidth - 2);
        vc.td.y = -2;
        if(ThoiGianSleep > 30)
            ThoiGianSleep -= 20;
    }
    int dX = abs(xe.td.x-vc.td.x);
    int dY = abs(xe.td.y-vc.td.y);
    if(dX < 3 && dY < 3)
    {
        return 1;
    }

    vc1.td.y++;
    if(vc1.td.y > consoleHeight)
    {
        xe.diem++;
        vc1.td.x = 4 + rand() % (roadWidth -4);
        vc1.td.y = -7;
        if(ThoiGianSleep > 20)
            ThoiGianSleep -= 10;
    }
    int dA = abs(xe.td.x-vc1.td.x);
    int dB = abs(xe.td.y-vc1.td.y);
    if(dA < 3 && dB < 3)
    {
        return 1;
    }

    vc2.td.y++;
    if(vc2.td.y > consoleHeight)
    {
        xe.diem++;
        vc2.td.x = 4 + rand() % (roadWidth -4);
        vc2.td.y = -13;
        if(ThoiGianSleep > 25)
            ThoiGianSleep -= 10;
    }
    int dC = abs(xe.td.x-vc2.td.x);
    int dD = abs(xe.td.y-vc2.td.y);
    if(dC < 3 && dD < 3)
    {
        return 1;
    }

     vc3.td.y++;
    if(vc3.td.y > consoleHeight)
    {
        xe.diem++;
        vc3.td.x = 4 + rand() % (roadWidth -4);
        vc3.td.y = -17;
        if(ThoiGianSleep > 25)
            ThoiGianSleep -= 10;
    }
    int dM = abs(xe.td.x-vc3.td.x);
    int dN = abs(xe.td.y-vc3.td.y);
    if(dM < 3 && dN < 3)
    {
        return 1;
    }

     vc4.td.y++;
    if(vc4.td.y > consoleHeight)
    {
        xe.diem++;
        vc4.td.x = 4 + rand() % (roadWidth -4);
        vc4.td.y = -17;
        if(ThoiGianSleep > 25)
            ThoiGianSleep -= 10;
    }
    int dP = abs(xe.td.x-vc4.td.x);
    int dQ = abs(xe.td.y-vc4.td.y);
    if(dP < 3 && dQ < 3)
    {
        return 1;
    }

    vc5.td.y++;
    if(vc5.td.y > consoleHeight)
    {
        xe.diem++;
        vc5.td.x = 4 + rand() % (roadWidth -4);
        vc5.td.y = -17;
        if(ThoiGianSleep > 25)
            ThoiGianSleep -= 10;
    }
    int dE = abs(xe.td.x-vc5.td.x);
    int dF = abs(xe.td.y-vc5.td.y);
    if(dP < 3 && dQ < 3)
    {
        return 1;
    }
}
int main(){
    srand(time(NULL));
    Xe xe;
    VatCan vc;
    VatCan vc1;
    VatCan vc2;
    VatCan vc3;
    VatCan vc4;
    VatCan vc5;

    KhoiTao(xe,vc,vc1,vc2,vc3,vc4,vc5);
    int ma = 0;
    int ThoiGianSleep = 500;

    while(1)
    {
        HienThi(xe,vc,vc1,vc2,vc3,vc4,vc5);

        DiChuyen (xe);

       ma = Xuly(xe,vc,vc1,vc2,vc3,vc4,vc5,ThoiGianSleep);

        if(ma==1)
        {
            gotoXY(0,0);
            for(int i=0;i<consoleWidth/3;i++)
                TextColor(ColorCode_DarkYellow);
                cout<<endl <<endl <<endl<<endl <<endl<<endl<<endl<<endl<< "          GAME OVER";
            while(_getch()!=13)
break;

        }
        Sleep(ThoiGianSleep);
    }
}

