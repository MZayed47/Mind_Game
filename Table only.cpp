#include<conio.h>
#include<graphics.h>
#include<stdio.h>
#include<stdlib.h>
#include<dos.h>
main()
{
//clrscr();
    int gd=DETECT,gm;

    initgraph(&gd,&gm,"c:\\tc\\bgi");

    int x,y,i,l;

    setcolor(3);

    setlinestyle(SOLID_LINE,1,3);

    x=20,y=20;

    for(i=1; i<10; i++)

        line(x+=60,80,y+=60,400);


    x=80,y=80;

    for(i=1; i<10; i++)

        line(20,x+=32,620,y+=32);

    rectangle(20,80,620,400);
    getch();
}
