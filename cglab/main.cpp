
#include<stdio.h>
#include<conio.h>
#include<graphics.h>

#include<math.h>

void trans();



void scale();

void rotate();

int maxx,maxy,midx,midy;



int main()

{

    int ch;

    int gd=DETECT,gm;

    detectgraph(&gd,&gm);

    initgraph(&gd,&gm,"e:\\tc\\bgi");

    printf("\n 1.Translation \n2.Scaling\n 3.Rotation \n 4.exit");

    printf("\n enter your choice");

    scanf("%d",&ch);

    do

    {

        switch(ch)

        {

        case 1 :
            trans();

            getch();



            break;



        case 2 :
            scale();

            getch();



            break;



        case 3 :
            rotate();

            getch();



            break;



        case 4 :
            break;

        }

        printf("\n enter your choice");

        scanf("%d",&ch);

    }
    while(ch<4);
    return 0;

}

void trans()

{

    int x,y,z,o,x1,x2,y1,y2;

    maxx=getmaxx();

    maxy=getmaxy();

    midx=maxx/2;

    midy=maxy/2;



    bar3d(midx+50,midy-100,midx+60,midy-90,10,1);

    printf("Enter translation factor: ");

    scanf("%d%d",&x,&y);

    printf("After translation:");

    bar3d(midx+x+50,midy-(y+100),midx+x+60,midy-(y+90),10,1);

}

void scale()

{

    int x,y,z,o,x1,x2,y1,y2;

    maxx=getmaxx();

    maxy=getmaxy();

    midx=maxx/2;

    midy=maxy/2;



    bar3d(midx+50,midy-100,midx+60,midy-90,5,1);

    printf("before translation\n");

    printf("Enter scaling factors: \n");

    scanf("%d %d %d", &x,&y,&z);

    printf("After scaling\n");

    bar3d(midx+(x*50),midy-(y*100),midx+(x*60),midy-(y*90),5*z,1);

}

void rotate()

{

    int x,y,z,o,x1,x2,y1,y2;

    maxx=getmaxx();

    maxy=getmaxy();

    midx=maxx/2;

    midy=maxy/2;



    bar3d(midx+50,midy-100,midx+60,midy-90,5,1);

    printf("Enter rotating angle: ");

    scanf("%d",&o);

    x1=50*cos(o*3.14/180)-100*sin(o*3.14/180);

    y1=50*sin(o*3.14/180)+100*cos(o*3.14/180);

    x2=60*cos(o*3.14/180)-90*sin(o*3.14/180);

    y2=60*sin(o*3.14/180)+90*cos(o*3.14/180);



    printf("\nAfter rotation  about x axis\n");

    bar3d(midx+50,midy-x1,midx+60,midy-x2,5,1);



    printf("After rotation about y axis\n");

    bar3d(midx+x1,midy-100,midx+x2,midy-90,5,1);



}

