//COLORS ARE 16 : 0(BLACK) 1 2 3........14(YELLOW) 15(WHITE)
#include<graphics.h>
int main()
{
    int gd=0,gm;
    initgraph(&gd,&gm,"");
    setcolor(14);       //COLOR OF PEN IS SET
    circle(200,200,40);
    setcolor(13);       //CHANGE THE PEN COLOR FOR RECTANGLE
    rectangle(150,50,200,70);
    getch();
    closegraph();
}
