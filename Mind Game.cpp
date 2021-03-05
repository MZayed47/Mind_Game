#include<conio.h>
#include<graphics.h>
#include<stdio.h>
#include<stdlib.h>
#include<dos.h>
void table();

void table()
{
    int x,y,i,l;
    setcolor(2);
    setlinestyle(DASHED_LINE,1,3);
    x=20,y=20;
    for(i=1; i<10; i++)
        line(x+=60,80,y+=60,400);
    x=80,y=80;
    for(i=1; i<10; i++)
        line(20,x+=32,620,y+=32);
    rectangle(20,80,620,400);
}


main()
{
    int driver=DETECT,mode;
    initgraph(&driver,&mode,"c:\\tc\\bgi");
label:
    cleardevice();
    char str[4];
    int low=0,up=99,mid=0,n=0,r,d,l,i,j,k,check,a,b,p=0,c=90,e=40,q=0,s=50;
    setcolor(1);
    settextstyle(0,0,2);
    outtextxy(20,35,"Take a number in your mind...");

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
    }
    setcolor(1);
    outtextxy(20,430,"Press enter");
    getch();
//    sound(200);
    delay(250);
//    nosound();
    mid=(up+low)/2;
    n=49;


    for(k=0; k<=6; k++)
    {
        d=(mid-low);
        check=0;
        q=0;
        s=50;
//        clrscr();
        cleardevice();
        table();
        setcolor(14);
        settextstyle(DEFAULT_FONT,HORIZ_DIR,2);

        for(i=30; i<620; i+=60)
        {
            for(j=90; j<400; j+=64)
            {
                if(check<d)
                {
                    gcvt(p++,2,str);
                    outtextxy(i,j,str);
                    check++;
                }
                else if(check<=(2*d))
                {
                    gcvt(n++,2,str);
                    outtextxy(i,j,str);
                    check++;
                }
                else if(n>49)
                {
                    gcvt(q++,2,str);
                    outtextxy(i,j,str);
                }
                else if(n<50)
                {
                    gcvt(s++,2,str);
                    outtextxy(i,j,str);
                }
            }
        }
        settextstyle(0,0,2);
        setcolor(6);
        outtextxy(20,35,"IF YOUR NUMBER IS HERE, PRESS 1 or PRESS 0");
        setcolor(1);
        outtextxy(20,430,"To restart press 9");
        scanf("%d",&l);
//        sound(200);
        delay(250);
  //      nosound();

        if(l==1)
        {
            p=mid+1;
            up=mid;
            mid=(up+low)/2;
            r=mid;
            n=low;
        }
        else if(l==0)
        {
            p=low;
            low=(mid+1);
            mid=(up+low)/2;
            r=mid;
            n=low;
        }
        else
            goto label;
    }
//    clrscr();
    cleardevice();
    settextstyle(1,0,6);
//    textbackground(4);
    setcolor(2);
    outtextxy(10,10,"YOUR NUMBER ");
    outtextxy(280,100,"IS");
    gcvt(r,4,str);
    setcolor(5);
    outtextxy(280,180,str);
    getch();
    cleardevice();
    closegraph();
}
