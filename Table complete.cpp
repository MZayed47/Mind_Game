#include<conio.h>
#include<graphics.h>
#include<stdio.h>
#include<stdlib.h>
#include<dos.h>

void table()
{
    int x,y,i,l;
    setcolor(2);
    setlinestyle(SOLID_LINE,1,3);
    x=20,y=20;
    for(i=1; i<10; i++)
        line(x+=60,80,y+=60,400);
    x=80,y=80;
    for(i=1; i<10; i++)
        line(20,x+=32,620,y+=32);
    rectangle(20,80,620,400);
}


int main()
{
//clrscr();
    int driver=DETECT,mode;
    initgraph(&driver,&mode,"c:\\tc\\bgi");

    char str[4];
    int i,j,k,n=0;
    setcolor(1);
    settextstyle(0,0,2);
    outtextxy(20,35,"Take a Number in Your Mind...");
    table();
    setcolor(4);
    settextstyle(DEFAULT_FONT,HORIZ_DIR,2);
    for(i=30; i<620; i+=60)
    {
        for(j=90; j<400; j+=32)
        {
            gcvt(n++,2,str);
            outtextxy(i,j,str);
        }
        outtextxy(235,425,"Press Enter");
        getch();
    }
}
