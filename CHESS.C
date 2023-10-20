#include<stdio.h>
#include<conio.h>
#include<graphics.h>
void main(){
int gd=DETECT,gm,xmax,ymax,i,j;
initgraph(&gd,&gm,"C://TURBOC3//BGI");
xmax=getmaxx()/2;
ymax=getmaxy()/2;
rectangle(xmax-202,ymax-202,xmax+202,ymax+202);
bar(xmax-200,ymax-200,xmax+200,ymax+200);
setfillstyle(SOLID_FILL,GREEN);
for(i=0;i<=300;i=i+100)
for(j=0;j<=300;j=j+100){
{
 bar(xmax-200+i,ymax-200+j,xmax-150+i,ymax-150+j);
 bar(xmax-150+i,ymax-150+j,xmax-100+i,ymax-100+j);
}
}
getch();
closegraph();
}