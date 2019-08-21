#include<graphics.h>
int main()
{
    int gd=0,gm;
    initgraph(&gd,&gm,"");
    rectangle(100,50,200,100);
    line(150,100,250,100);
    line(50,50,70,70);
    line(50,50,20,70);
    line(20,70,70,70);
    getch();
    closegraph();
}
