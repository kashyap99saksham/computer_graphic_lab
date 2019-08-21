//WE CAN MAKE HALF/SMALLER THEN HALF/GREATER THEN HALF ELLIPSE ALSO
#include<graphics.h>
int main()
{
    int gd=0,gm;
    initgraph(&gd,&gm,"");
    ellipse(400,200,0,360,40,150);  //FIRST TWO ARGUEMNTS FOR CENTER POINTS||3RD AND 4TH ARE FOR ANGLES(FULL ELLIPSE:HALF:SEMI-HALF)||LAST TWO FOR X RADIUS AND Y RADIUS
    ellipse(500,400,90,280,40,150); //EXAMPLE OF HALF ELLIPSE
    ellipse(200,200,0,360,40,40);      //circle due to same axis
    getch();
    closegraph();
}
