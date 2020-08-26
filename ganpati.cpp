
#include<graphics.h>
#include<stdio.h>
#include<conio.h>
#include<dos.h>

void main()
{
 int gd=DETECT,gm,i,k=1;
 int x1=5,y1=5,x2=615,y2=5;
 int xx1=70,yy1=20,xx2=200,yy2=20;
 int xc,yc,x=135,y=140;
 int poly[8]={135,140,115,170,155,170,135,140};//ghant
 int poly1[14]={400,350,395,340,385,335,375,340,387,342,395,340,400,350};//rat
 initgraph(&gd,&gm,"c:\\tc\\bgi");

 settextstyle(10,HORIZ_DIR,8);
 setcolor(RED);
 outtextxy(100,50,"GANESH");
 settextstyle(7,HORIZ_DIR,4);
 setcolor(9);
 outtextxy(320,260,"ROLL NO : 49");
 outtextxy(320,310,"ROLL NO : 70");
 getch();
 // setcolor(6);
 drawpoly(7,poly1);
  for(i=1;i<=110;i++)
  {
   poly1[0]--;
   poly1[1]=poly1[1];
   poly1[2]--;
   poly1[3]=poly1[3];
   poly1[4]--;
   poly1[5]=poly1[5];
   poly1[6]--;
   poly1[7]=poly1[7];
   poly1[8]--;
   poly1[9]=poly1[9];
   poly1[10]--;
   poly1[11]=poly1[11];
   poly1[12]--;
   poly1[13]=poly1[13];
   setcolor(k++);
  drawpoly(7,poly1);
  delay(100);
 cleardevice();
  }
  drawpoly(7,poly1);
  setcolor(9);
   line(x1,y1,x2,y2);
   line(8,8,612,8);
 x1=5,y1=5,x2=5,y2=455;
 line(x1,y1,x2,y2);
 line(8,8,8,452);
 x1=5,y1=455,x2=615,y2=455;
 line(x1,y1,x2,y2);
 line(8,452,612,452);
 x1=615,y1=5,x2=615,y2=455;
 line(x1,y1,x2,y2);
 line(612,452,612,8);
 setcolor(5);
 settextstyle(7,HORIZ_DIR,4);
 outtextxy(300,50,"SHRI GANESH");
 setcolor(1);
 arc(310,240,240,360,30);
 setcolor(10);
 circle(320,280,3);//dunti
 setfillstyle(1,4);
 floodfill(320,280,10);
 setcolor(3);
 arc(320,280,180,390,10);
 setcolor(14);
 ellipse(320,280,155,350,30,30);
 setcolor(5);
 arc(320,270,300,400,30);
 setcolor(4);
 arc(300,290,140,280,30);
 setcolor(4);
 arc(340,290,290,420,30);
 setcolor(9);
 arc(300,305,280,330,20);//left
 setcolor(9);
 arc(360,305,200,290,20); //right
 setcolor(5);
 arc(315,325,250,400,10);
 setcolor(5);
 arc(350,320,170,310,15);
 setcolor(5);
 arc(305,230,110,310,25); //sunth
 setcolor(5);
 arc(300,230,105,295,25);
 setcolor(11);
 arc(310,255,390,140,10);
 setcolor(11);
 arc(310,250,360,170,10);
 setcolor(10);
 circle(297,223,3);
 setfillstyle(1,4);
 floodfill(297,223,10);
 setcolor(4);
 arc(300,225,90,200,10);//eye
 setcolor(10);
 arc(315,215,360,120,20);//mugat
 setcolor(14);
 arc(312,220,360,120,20);
 setcolor(2);
 arc(325,200,308,170,20);
 setcolor(14);
 circle(335,177,5);
 setfillstyle(1,4);
 floodfill(335,177,14);
 setcolor(4);
 arc(340,225,292,420,15);//ear
 setcolor(4);
 line(347,212,343,238);//earline
 //ghant line
 setcolor(12);
 line(70,18,200,18);
 line(xx1,yy1,xx2,yy2);
 xc= (xx1+xx2)/2;
 yc=(yy1+yy2)/2;
 line(xc,yc,x,y);
  drawpoly(4,poly);
  setfillstyle(SOLID_FILL,9);
 fillpoly(4,poly);
 setcolor(9);
 circle(135,140,2);//toch circle
 circle(135,172,3);
 setcolor(6);
 ellipse(240,320,190,350,25,25);//dish
 line(218,325,262,325);

 //first line laddu
 circle(220,320,4);
 circle(228,320,4);
 circle(236,320,4);
 circle(244,320,4);
 circle(252,320,4);
 circle(260,320,4);
 //second line laddu
 circle(224,312,4);
 circle(232,312,4);
 circle(240,312,4);
 circle(248,312,4);
 circle(256,312,4);
 //third line laddu
 circle(228,304,4);
 circle(236,304,4);
 circle(244,304,4);
 circle(252,304,4);
 //fourth line laddu
 circle(232,296,4);
 circle(240,296,4);
 circle(248,296,4);
 //fifth laddu
 circle(236,288,4);
 circle(244,288,4);
 //last laddu
 circle(240,280,4);
 //for sathiya
 setcolor(4);
 line(500,220,550,220);
 line(500,220,500,320);
 line(500,320,450,320);
 line(450,220,450,270);
 line(450,270,550,270);
 line(550,270,550,320);
//sathiya circle

  circle(525,245,4);
  setfillstyle(1,4);
  floodfill(525,245,4);
  circle(475,245,4);
  setfillstyle(1,4);
  floodfill(475,245,4);
  circle(525,295,4);
  setfillstyle(1,4);
  floodfill(525,295,4);
  circle(475,295,4);
  setfillstyle(1,4);
  floodfill(475,295,4);
  //for deep
  setcolor(4);
  arc(190,245,400,135,18);
  arc(190,220,225,320,18);
  ellipse(190,234,180,360,13,13);
  setcolor(6);
  arc(209,225,120,240,10);
  arc(197,225,290,60,10);
  //deep line
  setcolor(3);
  line(196,225,194,223);
  setcolor(10);
  line(196,220,194,218);
  setcolor(14);
  line(198,215,196,213);
  setcolor(10);
  line(203,213,203,210);
  setcolor(4);
  line(207,216,211,214);
  setcolor(10);
  line(210,222,213,220);
  setcolor(12);
  line(210,227,213,225);
  setcolor(11);
  line(208,232,211,230);
    getch();
    cleardevice();
    setcolor(12);
    settextstyle(10,HORIZ_DIR,6);
    outtextxy(100,150,"THANK YOU");
    getch();
 closegraph();
}












