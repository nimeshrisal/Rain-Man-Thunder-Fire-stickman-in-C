#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<dos.h>
#include<stdlib.h>
void fire(int i)
{
if(i%2==0)
{
	line(210,385,200,400);
	line(210,385,220,400);
	arc(210,400,180,230,10);
	arc(210,400,310,360,10);
	arc(205,425,5,62,20);
	arc(215,425,120,170,20);
	line(195,425,190,415);
	line(225,424,230,415);
	arc(220,431,330,60,20);
	arc(200,431,120,220,20);
	line(183,440,190,450);
	line(238,440,230,450);
	setfillstyle(1,14);
	floodfill(215,400,15);

 }
 else
 {
	line(210,360,200,380);
	line(210,360,220,380);
	arc(210,380,180,230,10);
	arc(210,380,310,360,10);
	arc(205,405,5,60,20);
	arc(215,405,120,170,20);
	line(195,405,180,385);
	line(225,405,240,385);
	arc(225,411,330,60,30);
	arc(195,411,120,220,30);
	line(173,430,180,450);
	line(250,425,240,450);
	setfillstyle(1,14);
	floodfill(215,400,15);

 }
}
void rain(int i)
{
for(int n=0;n<300;n++)
{
int a=rand()%getmaxx();
int b=rand()%getmaxy();
if(b<450)
{
	if(b<310 || (b>330 && (a<25+i || a>125+i)))
	  {
		line(a,b,a,b+5);
	  }
 }
}
}
void cloud1(int j)
{
	arc(50+j,100,90,180,15);
	arc(35+j,115,90,240,15);
	arc(42+j,129,180,300,15);
	arc(64+j,143,180,330,15);
	arc(90+j,145,210,330,15);
	arc(103+j,140,270,30,15);
	arc(103+j,123,330,60,15);
	arc(95+j,110,360,90,15);
	arc(80+j,95,0,90,15);
	arc(65+j,80,0,200,15);
	setfillstyle(1,WHITE);
	floodfill(50+j,110,WHITE);
}
void cloud(int j)
{
	arc(550-j,100,90,180,15);
	arc(535-j,115,90,240,15);
	arc(542-j,129,180,300,15);
	arc(564-j,143,180,330,15);
	arc(590-j,145,210,330,15);
	arc(603-j,140,270,30,15);
	arc(603-j,123,330,60,15);
	arc(595-j,110,360,90,15);
	arc(580-j,95,0,90,15);
	arc(565-j,80,0,200,15);
	setfillstyle(1,WHITE);
	floodfill(550-j,110,WHITE);
	delay(100);
}
void man1(int i)
{
	line(0,450,700,450);
	arc(50+i,350,0,359,15);
	arc(55+i,340,0,359,2);
	ellipse(55+i,358,60,300,5,2);
	line(50+i,365,50+i,410);
	line(50+i,375,75+i,390);
	line(75+i,330,75+i,390);
	line(25+i,330,125+i,330);
	arc(75+i,330,0,180,50);
	floodfill(27+i,320,WHITE);
	if(i%2==0)
	{
	line(50+i,410,25+i,445);
	line(50+i,410,75+i,445);
	delay(20);
	}
	else
	{
	line(50+i,450,50+i,410);
	delay(20);
	}
}
void man2(int i)
{
	line(0,450,700,450);
	arc(50+i,350,0,359,15);
	arc(55+i,340,0,359,3);
	ellipse(55+i,358,60,300,5,3);
	line(50+i,365,50+i,410);
	line(50+i,375,75+i,390);
	line(75+i,330,75+i,390);

	if(i%2==0)
	{
	line(50+i,410,25+i,445);
	line(50+i,410,75+i,445);
	delay(20);
	line(250,400,350,400);
	arc(300,400,180,360,50);
	floodfill(310,420,WHITE);
	}
	else
	{
	line(50+i,450,50+i,410);
	delay(20);
	ellipse(275,400,0,180,25,10);
	ellipse(325,400,0,180,25,10);
	arc(300,400,180,360,50);
	floodfill(310,420,WHITE);
	}
}
void man3(int i)
{
	int j=i-60;
	line(0,450,700,450);
	fire(i);
	rain(i);
	cloud(j);
	cloud1(j);
	arc(40+i,355,0,359,15);
	arc(35+i,345,0,359,2);
	ellipse(45+i,345,120,60,2,5);
	line(50+i,365,50+i,410);
	line(50+i,375,75+i,390);
	line(75+i,330,75+i,390);
	line(25+i,330,125+i,330);
	//legs
	line(50+i,410,25+i,445);
	line(50+i,410,75+i,445);
	//umbrella fire
	line(250,400,350,400);
	arc(300,400,180,360,50);
	setfillstyle(1,14);
	floodfill(310,420,WHITE);
	delay(200);
	cleardevice();

	line(0,450,700,450);
	fire(i);
	rain(i+25);
	cloud(j+20);
	cloud1(j+20);
	arc(50+i,350,0,359,15);
	arc(55+i,340,0,359,2);
	ellipse(55+i,358,60,300,5,2);
	line(50+i,365,50+i,410);
	line(50+i,375,75+i,390);
	line(75+i,330,75+i,390);
	line(25+i,330,125+i,330);
	//legs
	line(50+i,410,25+i,445);
	line(50+i,410,75+i,445);
	//umbrella fire
	ellipse(275,400,0,180,25,10);
	ellipse(325,400,0,180,25,10);
	arc(300,400,180,360,50);
	setfillstyle(1,14);
	floodfill(310,420,WHITE);
	delay(250);

	cleardevice();
	line(0,450,700,450);
	fire(i);
	rain(i+50);
	cloud(j+40);
	cloud1(j+40);
	arc(50+i,350,0,359,15);
	arc(45+i,340,0,359,3);
	ellipse(45+i,358,270,120,5,3);
	line(50+i,365,50+i,410);
	line(50+i,375,75+i,390);
	line(75+i,330,75+i,390);
	line(25+i,330,125+i,330);
	//legs
	line(50+i,410,25+i,445);
	line(50+i,410,75+i,445);
	//umbrella fire
	line(250,400,350,400);
	arc(300,400,180,360,50);
	setfillstyle(1,14);
	floodfill(310,420,WHITE);
	delay(250);

}

void main()
{
	int gd=DETECT,gm,i,j;
	initgraph(&gd,&gm,"C:\\Turbo C3\\BGI\\");
	i=0;
	j=0;
	while(i<300)
	{
	cleardevice();
	rain(i);
	cloud(j);
	cloud1(j);
	man1(i);
	i+=25;
	j+=20;
	delay(150);
	}
	line(300,130,250,160);
	delay(10);
	line(250,160,280,160);
	delay(10);
	line(280,160,230,350);
	floodfill(30,40,WHITE);
	delay(500);
	cleardevice();
	man3(i);

	while(!kbhit())
	{
	cleardevice();
	rain(i);
	man2(i);
	cloud(j);
	cloud1(j);
	i+=25;
	j+=20;
	fire(i);
	delay(40);
	}
	getch();
	closegraph();
}