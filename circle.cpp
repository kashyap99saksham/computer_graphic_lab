#include<iostream>
#include<conio.h>
#include<graphics.h>
main()
{
    int gd=0,gm;    //gd->Graphic Driver auto Detection,gm->graphic mode
    initgraph(&gd,&gm," ");
    circle(100,80,20);
    getch();
    closegraph();
}
