#include<graphics.h>
#include<stdio.h>
#include<conio.h>
#include<math.h>
void plotcircle(int,int,int,int);

int main()
{

int gd = DETECT, gm;
int xh,yk,x,y,xend,r,d;
initgraph(&gd, &gm, "");

printf("\n Enter h:");
scanf("%d",&xh);
printf("\n Enter k:");
scanf("%d",&yk);
printf("\n Enter r:");
scanf("%d",&r);
x=0;
xend=r/sqrt(2);
plotcircle(xh,yk,x,y);
while(x<xend)
{
x=x+1;
y=sqrt((r*r)-(x*x));

plotcircle(xh,yk,x,y);
}
getch();
}

void plotcircle(int xh,int yk,int x,int y)
{
putpixel(xh+x,yk+y,2);
putpixel(xh-x,yk+y,2);
putpixel(xh+x,yk-y,2);
putpixel(xh+y,yk+x,2);
putpixel(xh-y,yk-x,2);
putpixel(xh-y,yk+x,2);
putpixel(xh+y,yk-x,2);
putpixel(xh-x,yk-y,2);
}
