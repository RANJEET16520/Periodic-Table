#include<iostream.h>
#include<conio.h>
#include<graphics.h>
#include<stdlib.h>
#include<math.h>
#include<dos.h>
#include<process.h>
int main()
{
	void outline();
	void write();
	void property();
	int gdriver =DETECT,gmode,errorcode;
	initgraph(&gdriver,&gmode,"C:\\TURBOC3\\BGI");
	errorcode=graphresult();
	if(errorcode!=0)
	{
		cout<<grapherrormsg(errorcode);
		cout<<"press any key to halt";
		getch();
		return 0;
	}
	outline();
	write();
	getch();
	closegraph();
	return 0;
}

void outline()
{
	int x=31;
	int y=31;
	setcolor(14);
	int point[]={10,30,40,30,40,60,10,60,10,30};
	drawpoly(5,point);
	setfillstyle( SOLID_FILL,6);
	floodfill(15,45,14);

	for(int i=0;i<6;i++)
	{
		setcolor(2);
		int point1[]={10,30+x,40,30+x,40,60+x,10,60+x,10,30+x};
		drawpoly(5,point1);
		setfillstyle(SOLID_FILL,4);
		floodfill(15,45+x,2);
		x=x+30;
	}

	for(int j=0;j<6;j++)
	{
		setcolor(1);
		int point2[]={41,30+y,71,30+y,71,60+y,41,60+y,41,30+y};
		drawpoly(5,point2);
		setfillstyle(SOLID_FILL,12);
		floodfill(45,45+y,1);
		y=y+30;
	}

	for(int f=121;f<241;)
	{
		int z=31;
		for(int b=0;b<10;b++)
		{
			 setcolor(3);
			 int point3[]={41+z,f,71+z,f,71+z,f+30,41+z,f+30,41+z,f};
			 drawpoly(5,point3);
			 setfillstyle(SOLID_FILL,14);
			 floodfill(56+z,f+15,3);
			 z=z+30;

		 }
		f=f+30;
	}

	setcolor(4);
	int point4[]={373,91,403,91,403,121,373,121,373,91};
	drawpoly(5,point4);
	setfillstyle(SOLID_FILL,2);
	floodfill(373+15,91+15,4);

	for(int i1=0;i1<4;i1++)
	{
		int x1=373;
		int y1=121+i1*30;
		for(int j1=0;j1<i1+1;j1++)
		{ if(j1==3)
		{ setcolor(4);
			 int point5[]={x1+j1*30,y1,x1+31+j1*30,y1,x1+j1*30+31,y1+30,x1+j1*30,y1+30,x1+j1*30,y1};
			 drawpoly(5,point5);
		}
		else{
		setcolor(4);
		int point5[]={x1+j1*30,y1,x1+30+j1*30,y1,x1+j1*30+30,y1+30,x1+j1*30,y1+30,x1+j1*30,y1};
		drawpoly(5,point5); }
		setfillstyle(SOLID_FILL,2);
		floodfill(x1+j1*30+15,y1+15,4);
	}
	}
	int x2,y2;
	for(int i2=0;i2<3;i2++)
	{
		 x2=404+i2*30;
		 y2=120+i2*30;
		setcolor(6);
		int point6[]={x2,y2,x2+30,y2,x2+30,y2+30,x2,y2+30,x2,y2};
		drawpoly(5,point6);
		setfillstyle(SOLID_FILL,11);
		floodfill(x2+15,y2+15,6);
	}
	for( i2=0;i2<4;i2++)
	{ if(i2==0) { x2=373;  y2=59;}

	else{ x2=374+i2*30;y2=60+i2*30;}
	setcolor(6);
	if(i2==0)
	{ int point6[]={x2,y2,x2+31,y2,x2+31,y2+31,x2,y2+31,x2,y2};
	drawpoly(5,point6);
	setfillstyle(SOLID_FILL,11);
	floodfill(x2+15,y2+15,6);
	}
	else{
	int point6[]={x2,y2,x2+30,y2,x2+30,y2+30,x2,y2+30,x2,y2};
	drawpoly(5,point6);
	setfillstyle(SOLID_FILL,11);
	 floodfill(x2+15,y2+15,6);
	}
	}

	for( i1=0;i1<3;i1++)
	{
	int x1=405+i1*30;
	int y1=59;
	for(int j1=0;j1<i1+1;j1++)
	{ if(i1==2)
		{ setcolor(8);
		 int point8[]={x1,y1+j1*30,x1+29,y1+j1*30,x1+29,y1+30+j1*30,x1,y1+30+j1*30,x1,y1+j1*30};
		drawpoly(5,point8);
		setfillstyle(SOLID_FILL,3);
		floodfill(x1+15,y1+j1*30+15,8);
	}
	else{
		setcolor(8);
		int point5[]={x1,y1+j1*30,x1+30,y1+j1*30,x1+30,y1+30+j1*30,x1,y1+30+j1*30,x1,y1+j1*30};
		drawpoly(5,point5);
		setfillstyle(SOLID_FILL,3);
		floodfill(x1+15,y1+j1*30+15,8); }
		}
	}
	for(int i5=1;i5<7;i5++)
	{
	int  a1=495;
	int  b1=59;
	setcolor(10);
	int point6[] ={a1,b1,a1+30,b1,a1+30,b1+i5*30,a1,b1+i5*30,a1,b1};
	drawpoly(5,point6);
	setfillstyle(SOLID_FILL,9);
	floodfill(a1+15,b1+i5*30-15,10);
	line(495,240,525,240);
	}

	setcolor(3);
	for(int i6=1;i6<7;i6++)
	{  	int a2 =526;
		int b2=29+i6*30;
		int point7[]={a2,b2,a2+30,b2,a2+30,b2+30,a2,b2+30,a2,b2};
		drawpoly(5,point7);
		setfillstyle(SOLID_FILL,1);
		floodfill(a2+15,b2+15,3);
	}
	int a2 =526;
	int b2=29;
	int point7[]={a2,b2,a2+30,b2,a2+30,b2+30,a2,b2+30,a2,b2};
	drawpoly(5,point7);
	setfillstyle(SOLID_FILL,1);
	floodfill(a2+15,b2+15,3);
	for(int i7=0;i7<2;i7++)
	{  	setcolor(14);
		int b2=290+i7*30;
		for(int i6=1;i6<16;i6++)
		{  int a2 =76+i6*30;

			int point7[]={a2,b2,a2+30,b2,a2+30,b2+30,a2,b2+30,a2,b2};
			drawpoly(5,point7);
			setfillstyle(SOLID_FILL,2);
			floodfill(a2+15,b2+15,14);
		}
	}

}
void property()
{
		delay(20);
		cleardevice();
		setcolor(14);
		outtextxy(120,50,"THE PROPERTIES OF THE ELLEMENTS ARE GIVEN BELOW");

		for(int y1=0;y1<8;y1++)
		{
		int s1=166;
		int s2=100+y1*30;
		setcolor(2);
		int point9[]={s1,s2,s1+300,s2,s1+300,s2+30,s1,s2+30,s1,s2};
		drawpoly(5,point9);
		line(326,100,326,340);
		setcolor(15);
		outtextxy(180,110,"NAME OF ELEMENT");
		outtextxy(180,140,"ATOMIC NUMBER");
		outtextxy(180,170,"BLOCK");
		outtextxy(180,200,"MELTING POINT");
		outtextxy(180,230,"BOILING POINT");
		outtextxy(180,260,"ELECTRONEGATIVITY");
		outtextxy(180,290,"ATOMIC RADIUS");
		outtextxy(180,320,"DENSITY");

}

}
void write()
{
	int d, d1;
	setcolor(0);
	outtextxy(15,45,"1");   outtextxy(25,35,"H");
	outtextxy(15,75,"3");   outtextxy(25,65,"Li");
	outtextxy(15,105,"11"); outtextxy(25,95,"Na");
	outtextxy(15,135,"19"); outtextxy(25,125,"K");
	outtextxy(15,165,"37"); outtextxy(25,155,"Rb");
	outtextxy(15,195,"55"); outtextxy(25,185,"Cs");
	outtextxy(15,225,"87"); outtextxy(25,215,"Fr");
	outtextxy(45,75,"4");   outtextxy(55,65,"Be");
	outtextxy(45,105,"12"); outtextxy(55,95,"Mg");
	outtextxy(45,135,"20"); outtextxy(55,125,"Ca");
	outtextxy(45,165,"38"); outtextxy(55,155,"Sr");
	outtextxy(45,195,"56"); outtextxy(55,185,"Ba");
	outtextxy(45,225,"88"); outtextxy(55,215,"Ra");
	outtextxy(75,135,"21"); outtextxy(85,125,"Sc");
	outtextxy(75,165,"39"); outtextxy(85,155,"Y");
	outtextxy(75,195,"*");
	outtextxy(75,225,"**");
	outtextxy(105,135,"22"); outtextxy(115,125,"Ti");
	outtextxy(105,165,"40"); outtextxy(115,155,"Zr");
	outtextxy(105,195,"72"); outtextxy(115,185,"Hf");
	outtextxy(105,225,"104"); outtextxy(115,215,"Rf");
	outtextxy(135,135,"23"); outtextxy(145,125,"V");
	outtextxy(135,165,"41"); outtextxy(145,155,"Nb");
	outtextxy(135,195,"73"); outtextxy(145,185,"Ta");
	outtextxy(135,225,"105"); outtextxy(145,215,"Db");
	outtextxy(165,135,"24"); outtextxy(175,125,"Cr");
	outtextxy(165,165,"42"); outtextxy(175,155,"Mo");
	outtextxy(165,195,"74"); outtextxy(175,185,"W");
	outtextxy(165,225,"106"); outtextxy(175,215,"Sg");
	outtextxy(195,135,"25"); outtextxy(205,125,"Mn");
	outtextxy(195,165,"43"); outtextxy(205,155,"Tc");
	outtextxy(195,195,"75"); outtextxy(205,185,"Re");
	outtextxy(195,225,"107"); outtextxy(205,215,"Bh");
	outtextxy(225,135,"26"); outtextxy(235,125,"Fe");
	outtextxy(225,165,"44"); outtextxy(235,155,"Ru");
	outtextxy(225,195,"76"); outtextxy(235,185,"Os");
	outtextxy(225,225,"108"); outtextxy(235,215,"Hs");
	outtextxy(255,135,"27"); outtextxy(265,125,"Co");
	outtextxy(255,165,"45"); outtextxy(265,155,"Rh");
	outtextxy(255,195,"77"); outtextxy(265,185,"Ir");
	outtextxy(255,225,"109"); outtextxy(265,215,"Mt");
	outtextxy(285,135,"28"); outtextxy(295,125,"Ni");
	outtextxy(285,165,"46"); outtextxy(295,155,"Pd");
	outtextxy(285,195,"78"); outtextxy(295,185,"Pt");
	outtextxy(285,225,"110"); outtextxy(295,215,"Ds");
	outtextxy(315,135,"29"); outtextxy(325,125,"Cu");
	outtextxy(315,165,"47"); outtextxy(325,155,"Ag");
	outtextxy(315,195,"79"); outtextxy(325,185,"Au");
	outtextxy(315,225,"111");outtextxy(325,215,"Rg");
	outtextxy(345,135,"30"); outtextxy(355,125,"Zn");
	outtextxy(345,165,"48"); outtextxy(355,155,"Cd");
	outtextxy(345,195,"80"); outtextxy(355,185,"Hg");
	outtextxy(345,225,"112");outtextxy(355,215,"Cn");
	outtextxy(380,75,"5");   outtextxy(385,65,"B");
	outtextxy(375,105,"13"); outtextxy(385,95,"Al");
	outtextxy(375,135,"31"); outtextxy(385,125,"Ga");
	outtextxy(375,165,"49"); outtextxy(385,155,"In");
	outtextxy(375,195,"81"); outtextxy(385,185,"Tl");
	outtextxy(375,225,"113");outtextxy(375,215,"Uut");
	outtextxy(410,75,"6");   outtextxy(415,65,"C");
	outtextxy(405,105,"14"); outtextxy(415,95,"Si");
	outtextxy(405,135,"32"); outtextxy(415,125,"Ge");
	outtextxy(405,165,"50"); outtextxy(415,155,"Sn");
	outtextxy(405,195,"82"); outtextxy(415,185,"Pb");
	outtextxy(405,225,"114");outtextxy(415,215,"Fl");
	outtextxy(440,75,"7");   outtextxy(445,65,"N");
	outtextxy(435,105,"15"); outtextxy(445,95,"P");
	outtextxy(435,135,"33"); outtextxy(445,125,"As");
	outtextxy(435,165,"51"); outtextxy(445,155,"Sb");
	outtextxy(435,195,"83"); outtextxy(445,185,"Bi");
	outtextxy(435,225,"115");outtextxy(435,215,"Uup");
	outtextxy(470,75,"8");   outtextxy(475,65,"O");
	outtextxy(465,105,"16"); outtextxy(475,95,"S");
	outtextxy(465,135,"34"); outtextxy(475,125,"Se");
	outtextxy(465,165,"52"); outtextxy(475,155,"Te");
	outtextxy(465,195,"84"); outtextxy(475,185,"Po");
	outtextxy(465,225,"116");outtextxy(475,215,"Lv");
	outtextxy(500,75,"9");   outtextxy(505,65,"F");
	outtextxy(495,105,"17"); outtextxy(505,95,"Cl");
	outtextxy(495,135,"35"); outtextxy(505,125,"Br");
	outtextxy(495,165,"53"); outtextxy(505,155,"I");
	outtextxy(495,195,"85"); outtextxy(505,185,"At");
	outtextxy(495,225,"117");outtextxy(495,215,"Uus");
	outtextxy(530,45,"2");   outtextxy(535,35,"He");
	outtextxy(530,75,"10");  outtextxy(535,65,"Ne");
	outtextxy(530,105,"18"); outtextxy(535,95,"Ar");
	outtextxy(530,135,"36"); outtextxy(535,125,"Kr");
	outtextxy(530,165,"54"); outtextxy(535,155,"Xe");
	outtextxy(530,195,"86"); outtextxy(535,185,"Rn");
	outtextxy(530,225,"118");outtextxy(530,215,"Uuo");
	outtextxy(110,305,"57"); outtextxy(120,295,"La");
	outtextxy(140,305,"58"); outtextxy(150,295,"Ce");
	outtextxy(170,305,"59"); outtextxy(180,295,"Pr");
	outtextxy(200,305,"60"); outtextxy(210,295,"Nd");
	outtextxy(230,305,"61"); outtextxy(240,295,"Pm");
	outtextxy(260,305,"62"); outtextxy(270,295,"Sm");
	outtextxy(290,305,"63"); outtextxy(300,295,"Eu");
	outtextxy(320,305,"64"); outtextxy(330,295,"Gd");
	outtextxy(350,305,"65"); outtextxy(360,295,"Tb");
	outtextxy(380,305,"66"); outtextxy(390,295,"Dy");
	outtextxy(410,305,"67"); outtextxy(420,295,"Ho");
	outtextxy(440,305,"68"); outtextxy(450,295,"Er");
	outtextxy(470,305,"69"); outtextxy(480,295,"Tm");
	outtextxy(500,305,"70"); outtextxy(510,295,"Yb");
	outtextxy(530,305,"71"); outtextxy(540,295,"Lu");
	outtextxy(110,335,"89"); outtextxy(120,325,"Ac");
	outtextxy(140,335,"90"); outtextxy(150,325,"Th");
	outtextxy(170,335,"91"); outtextxy(180,325,"Pa");
	outtextxy(200,335,"92"); outtextxy(210,325,"U");
	outtextxy(230,335,"93"); outtextxy(240,325,"Np");
	outtextxy(260,335,"94"); outtextxy(270,325,"Pu");
	outtextxy(290,335,"95"); outtextxy(300,325,"Am");
	outtextxy(320,335,"96"); outtextxy(330,325,"Cm");
	outtextxy(350,335,"97"); outtextxy(360,325,"Bk");
	outtextxy(380,335,"98"); outtextxy(390,325,"Cf");
	outtextxy(410,335,"99"); outtextxy(420,325,"Es");
	outtextxy(440,335,"100"); outtextxy(450,325,"Fm");
	outtextxy(470,335,"101"); outtextxy(480,325,"Md");
	outtextxy(500,335,"102"); outtextxy(510,325,"No");
	outtextxy(530,335,"103"); outtextxy(540,325,"Lr");
	setcolor(15);
	outtextxy(10,400, "ENTER THE ELEMENT ATOMIC NUMBER WHOSE PROPERTY YOU WANT TO SEE");
	cin>>d;
	if(d==1)
	{
	    property();
	    outtextxy(360,110,"HYDROGEN"); outtextxy(360,140,"1");
	    outtextxy(360,170,"S");        outtextxy(360,200,"-259.2 c ");
	    outtextxy(360,230,"-252.9 c"); outtextxy(360,260,"2.2");
	    outtextxy(360,290,"53 pm");    outtextxy(360,320, "0.08988g/l");
	    outtextxy(100,390,"----IF YOU WANT TO SEE THE PROPERTY OF OTHER ELEMENT PRESS 0");
	    outtextxy(100,410,"----IF YOU WANT TO STOP PRESS ANY KEY");
	    cin>>d1;
	    if (d1==0)
	    { delay (20);
	      cleardevice();
	      outline();
	      write();
	    }
	    else
	    exit(-1);

	}
       if(d==2)
       {    property();
	    outtextxy(360,110,"HELIUM");   outtextxy(360,140,"2");
	    outtextxy(360,170,"p");        outtextxy(360,200,"-272.2 c");
	    outtextxy(360,230,"-268.9 c"); outtextxy(360,260,"UNKNOWN");
	    outtextxy(360,290,"31 pm");    outtextxy(360,320, "0.1785 g/l");
	    outtextxy(100,390,"----IF YOU WANT TO SEE THE PROPERTY OF OTHER ELEMENT PRESS 0");
	    outtextxy(100,410,"----IF YOU WANT TO STOP PRESS ANY KEY");
	    cin>>d1;
	    if (d1==0)
	    { delay (20); cleardevice(); outline(); write();
	    }
	    else
	    exit(-1);

       }

       if(d==3)
       {    property();
	    outtextxy(360,110,"LITHIUM");  outtextxy(360,140,"3");
	    outtextxy(360,170,"S");        outtextxy(360,200,"180.54 c");
	    outtextxy(360,230,"1342 c");   outtextxy(360,260,"0.98");
	    outtextxy(360,290,"167 pm");   outtextxy(360,320, "0.535");
	    outtextxy(100,390,"----IF YOU WANT TO SEE THE PROPERTY OF OTHER ELEMENT PRESS 0");
	    outtextxy(100,410,"----IF YOU WANT TO STOP PRESS ANY KEY");
	    cin>>d1;
	    if (d1==0)
	    { delay (20); cleardevice(); outline(); write();
	    }
	    else
	    exit(-1);

       }
	if(d==4)
       {    property();
	    outtextxy(360,110,"BERYLLIUM");outtextxy(360,140,"4");
	    outtextxy(360,170,"S");        outtextxy(360,200,"1287 c");
	    outtextxy(360,230,"2470 c"); outtextxy(360,260,"1.57");
	    outtextxy(360,290,"112 pm");    outtextxy(360,320, "1.848");
	    outtextxy(100,390,"----IF YOU WANT TO SEE THE PROPERTY OF OTHER ELEMENT PRESS 0");
	    outtextxy(100,410,"----IF YOU WANT TO STOP PRESS ANY KEY");
	    cin>>d1;
	    if (d1==0)
	    { delay (20); cleardevice(); outline(); write();
	    }
	    else
	    exit(-1);

       }
	if(d==5)
       {    property();
	    outtextxy(360,110,"BORON");outtextxy(360,140,"5");
	    outtextxy(360,170,"P");        outtextxy(360,200,"2075 c");
	    outtextxy(360,230,"4000 c"); outtextxy(360,260,"2.04");
	    outtextxy(360,290,"87 pm");    outtextxy(360,320, "2.46");
	    outtextxy(100,390,"----IF YOU WANT TO SEE THE PROPERTY OF OTHER ELEMENT PRESS 0");
	    outtextxy(100,410,"----IF YOU WANT TO STOP PRESS ANY KEY");
	    cin>>d1;
	    if (d1==0)
	    { delay (20); cleardevice(); outline(); write();
	    }
	    else
	    exit(-1);

       }
	if(d==6)
       {    property();
	    outtextxy(360,110,"CARBON");  outtextxy(360,140,"6");
	    outtextxy(360,170,"P");        outtextxy(360,200,"3550 c");
	    outtextxy(360,230,"4027 c"); outtextxy(360,260,"2.55");
	    outtextxy(360,290,"67 pm");    outtextxy(360,320, "2.26");
	    outtextxy(100,390,"----IF YOU WANT TO SEE THE PROPERTY OF OTHER ELEMENT PRESS 0");
	    outtextxy(100,410,"----IF YOU WANT TO STOP PRESS ANY KEY");
	    cin>>d1;
	    if (d1==0)
	    { delay (20); cleardevice(); outline(); write();
	    }
	    else
	    exit(-1);

       }
	if(d==7)
       {    property();
	    outtextxy(360,110,"NITROGEN");outtextxy(360,140,"7");
	    outtextxy(360,170,"P");        outtextxy(360,200,"-210.1 c");
	    outtextxy(360,230,"-195.79 c"); outtextxy(360,260,"3.04");
	    outtextxy(360,290,"56 pm");    outtextxy(360,320, "1.251 g\\l");
	    outtextxy(100,390,"----IF YOU WANT TO SEE THE PROPERTY OF OTHER ELEMENT PRESS 0");
	    outtextxy(100,410,"----IF YOU WANT TO STOP PRESS ANY KEY");
	    cin>>d1;
	    if (d1==0)
	    { delay (20); cleardevice(); outline(); write();
	    }
	    else
	    exit(-1);
       }
	if(d==8)
       {    property();
	    outtextxy(360,110,"OXYGEN");outtextxy(360,140,"8");
	    outtextxy(360,170,"P");        outtextxy(360,200,"-218.3 c");
	    outtextxy(360,230,"-182.9 c"); outtextxy(360,260,"3.44");
	    outtextxy(360,290,"48 pm");    outtextxy(360,320, "1.429 g\\l");
	    outtextxy(100,390,"----IF YOU WANT TO SEE THE PROPERTY OF OTHER ELEMENT PRESS 0");
	    outtextxy(100,410,"----IF YOU WANT TO STOP PRESS ANY KEY");
	    cin>>d1;
	    if (d1==0)
	    { delay (20); cleardevice(); outline(); write();
	    }
	    else
	    exit(-1);
       }
	if(d==9)
       {    property();
	    outtextxy(360,110,"FLUORINE");outtextxy(360,140,"9");
	    outtextxy(360,170,"P");        outtextxy(360,200,"-219.6 c");
	    outtextxy(360,230,"-188.12 c"); outtextxy(360,260,"3.98");
	    outtextxy(360,290,"42 pm");    outtextxy(360,320, "1.696 g\\l");
	    outtextxy(100,390,"----IF YOU WANT TO SEE THE PROPERTY OF OTHER ELEMENT PRESS 0");
	    outtextxy(100,410,"----IF YOU WANT TO STOP PRESS ANY KEY");
	    cin>>d1;
	    if (d1==0)
	    { delay (20); cleardevice(); outline(); write();
	    }
	    else
	    exit(-1);
       }
	if(d==10)
       {    property();
	    outtextxy(360,110,"NEON");outtextxy(360,140,"10");
	    outtextxy(360,170,"P");        outtextxy(360,200,"-248.59 c");
	    outtextxy(360,230,"-246.08 c"); outtextxy(360,260,"N/A");
	    outtextxy(360,290,"38 pm");    outtextxy(360,320, "0.9 g\\l");
	    outtextxy(100,390,"----IF YOU WANT TO SEE THE PROPERTY OF OTHER ELEMENT PRESS 0");
	    outtextxy(100,410,"----IF YOU WANT TO STOP PRESS ANY KEY");
	    cin>>d1;
	    if (d1==0)
	    { delay (20); cleardevice(); outline(); write();
	    }
	    else
	    exit(-1);
       }
	if(d==11)
       {    property();
	    outtextxy(360,110,"SODIUM");outtextxy(360,140,"11");
	    outtextxy(360,170,"S");        outtextxy(360,200,"97.72 c");
	    outtextxy(360,230,"883 c"); outtextxy(360,260,"0.93");
	    outtextxy(360,290,"190 pm");    outtextxy(360,320, "0.968");
	    outtextxy(100,390,"----IF YOU WANT TO SEE THE PROPERTY OF OTHER ELEMENT PRESS 0");
	    outtextxy(100,410,"----IF YOU WANT TO STOP PRESS ANY KEY");
	    cin>>d1;
	    if (d1==0)
	    { delay (20); cleardevice(); outline(); write();
	    }
	    else
	    exit(-1);
       }
	if(d==12)
       {    property();
	    outtextxy(360,110,"MAGNESIUM");outtextxy(360,140,"12");
	    outtextxy(360,170,"S");        outtextxy(360,200,"650 c");
	    outtextxy(360,230,"1090 c"); outtextxy(360,260,"1.31");
	    outtextxy(360,290,"145 pm");    outtextxy(360,320, "1.738");
	    outtextxy(100,390,"----IF YOU WANT TO SEE THE PROPERTY OF OTHER ELEMENT PRESS 0");
	    outtextxy(100,410,"----IF YOU WANT TO STOP PRESS ANY KEY");
	    cin>>d1;
	    if (d1==0)
	    { delay (20); cleardevice(); outline(); write();
	    }
	    else
	    exit(-1);
       }
	if(d==13)
       {    property();
	    outtextxy(360,110,"ALUMINUM");outtextxy(360,140,"13");
	    outtextxy(360,170,"P");        outtextxy(360,200,"660.32 c");
	    outtextxy(360,230,"2519 c"); outtextxy(360,260,"1.61");
	    outtextxy(360,290,"118 pm");    outtextxy(360,320, "2.7");
	    outtextxy(100,390,"----IF YOU WANT TO SEE THE PROPERTY OF OTHER ELEMENT PRESS 0");
	    outtextxy(100,410,"----IF YOU WANT TO STOP PRESS ANY KEY");
	    cin>>d1;
	    if (d1==0)
	    { delay (20); cleardevice(); outline(); write();
	    }
	    else
	    exit(-1);
       }
	if(d==14)
       {    property();
	    outtextxy(360,110,"SILICON");outtextxy(360,140,"14");
	    outtextxy(360,170,"P");        outtextxy(360,200,"1414 c");
	    outtextxy(360,230,"2900 c"); outtextxy(360,260,"1.9");
	    outtextxy(360,290,"111 pm");    outtextxy(360,320, "2.33");
	    outtextxy(100,390,"----IF YOU WANT TO SEE THE PROPERTY OF OTHER ELEMENT PRESS 0");
	    outtextxy(100,410,"----IF YOU WANT TO STOP PRESS ANY KEY");
	    cin>>d1;
	    if (d1==0)
	    { delay (20); cleardevice(); outline(); write();
	    }
	    else
	    exit(-1);
       }
	if(d==15)
       {    property();
	    outtextxy(360,110,"PHOSPHORUS");outtextxy(360,140,"15");
	    outtextxy(360,170,"P");        outtextxy(360,200,"44.2 c");
	    outtextxy(360,230,"280.5 c"); outtextxy(360,260,"2.19");
	    outtextxy(360,290,"98 pm");    outtextxy(360,320, "1.823");
	    outtextxy(100,390,"----IF YOU WANT TO SEE THE PROPERTY OF OTHER ELEMENT PRESS 0");
	    outtextxy(100,410,"----IF YOU WANT TO STOP PRESS ANY KEY");
	    cin>>d1;
	    if (d1==0)
	    { delay (20); cleardevice(); outline(); write();
	    }
	    else
	    exit(-1);
       }
	if(d==16)
       {    property();
	    outtextxy(360,110,"SULPHUR");outtextxy(360,140,"16");
	    outtextxy(360,170,"P");        outtextxy(360,200,"115.21 c");
	    outtextxy(360,230,"444.72 c"); outtextxy(360,260,"2.58");
	    outtextxy(360,290,"87 pm");    outtextxy(360,320, "1.96");
	    outtextxy(100,390,"----IF YOU WANT TO SEE THE PROPERTY OF OTHER ELEMENT PRESS 0");
	    outtextxy(100,410,"----IF YOU WANT TO STOP PRESS ANY KEY");
	    cin>>d1;
	    if (d1==0)
	    { delay (20); cleardevice(); outline(); write();
	    }
	    else
	    exit(-1);
       }
	if(d==17)
       {    property();
	    outtextxy(360,110,"CHLORINE");outtextxy(360,140,"17");
	    outtextxy(360,170,"P");        outtextxy(360,200,"-101.5 c");
	    outtextxy(360,230,"-34.04 c"); outtextxy(360,260,"3.16");
	    outtextxy(360,290,"79 pm");    outtextxy(360,320, "3.214 g\\l");
	    outtextxy(100,390,"----IF YOU WANT TO SEE THE PROPERTY OF OTHER ELEMENT PRESS 0");
	    outtextxy(100,410,"----IF YOU WANT TO STOP PRESS ANY KEY");
	    cin>>d1;
	    if (d1==0)
	    { delay (20); cleardevice(); outline(); write();
	    }
	    else
	    exit(-1);
       }
	if(d==18)
       {    property();
	    outtextxy(360,110,"ARGON");outtextxy(360,140,"18");
	    outtextxy(360,170,"P");        outtextxy(360,200,"-189.3 c");
	    outtextxy(360,230,"-185.8 c"); outtextxy(360,260,"N\\A");
	    outtextxy(360,290,"71 pm");    outtextxy(360,320, "1.784 g\\l");
	    outtextxy(100,390,"----IF YOU WANT TO SEE THE PROPERTY OF OTHER ELEMENT PRESS 0");
	    outtextxy(100,410,"----IF YOU WANT TO STOP PRESS ANY KEY");
	    cin>>d1;
	    if (d1==0)
	    { delay (20); cleardevice(); outline(); write();
	    }
	    else
	    exit(-1);
       }
	if(d==19)
       {    property();
	    outtextxy(360,110,"POTASSIUM");outtextxy(360,140,"19");
	    outtextxy(360,170,"S");        outtextxy(360,200,"63.88 c");
	    outtextxy(360,230,"759 c"); outtextxy(360,260,"0.82");
	    outtextxy(360,290,"243 pm");    outtextxy(360,320, "0.856");
	    outtextxy(100,390,"----IF YOU WANT TO SEE THE PROPERTY OF OTHER ELEMENT PRESS 0");
	    outtextxy(100,410,"----IF YOU WANT TO STOP PRESS ANY KEY");
	    cin>>d1;
	    if (d1==0)
	    { delay (20); cleardevice(); outline(); write();
	    }
	    else
	    exit(-1);
       }
	if(d==20)
       {    property();
	    outtextxy(360,110,"CALCIUM");outtextxy(360,140,"20");
	    outtextxy(360,170,"S");        outtextxy(360,200,"842 c");
	    outtextxy(360,230,"1484 c"); outtextxy(360,260,"1");
	    outtextxy(360,290,"194 pm");    outtextxy(360,320, "1.55");
	    outtextxy(100,390,"----IF YOU WANT TO SEE THE PROPERTY OF OTHER ELEMENT PRESS 0");
	    outtextxy(100,410,"----IF YOU WANT TO STOP PRESS ANY KEY");
	    cin>>d1;
	    if (d1==0)
	    { delay (20); cleardevice(); outline(); write();
	    }
	    else
	    exit(-1);
       }
	if(d==21)
       {    property();
	    outtextxy(360,110,"SCANDIUM");outtextxy(360,140,"21");
	    outtextxy(360,170,"D");        outtextxy(360,200,"1541 c");
	    outtextxy(360,230,"2830 c"); outtextxy(360,260,"1.36");
	    outtextxy(360,290,"184 pm");    outtextxy(360,320, "2.985");
	    outtextxy(100,390,"----IF YOU WANT TO SEE THE PROPERTY OF OTHER ELEMENT PRESS 0");
	    outtextxy(100,410,"----IF YOU WANT TO STOP PRESS ANY KEY");
	    cin>>d1;
	    if (d1==0)
	    { delay (20); cleardevice(); outline(); write();
	    }
	    else
	    exit(-1);
       }
	if(d==22)
       {    property();
	    outtextxy(360,110,"TITANIUM");outtextxy(360,140,"22");
	    outtextxy(360,170,"D");        outtextxy(360,200,"1688 c");
	    outtextxy(360,230,"3287 c"); outtextxy(360,260,"1.54");
	    outtextxy(360,290,"176 pm");    outtextxy(360,320, "4.507");
	    outtextxy(100,390,"----IF YOU WANT TO SEE THE PROPERTY OF OTHER ELEMENT PRESS 0");
	    outtextxy(100,410,"----IF YOU WANT TO STOP PRESS ANY KEY");
	    cin>>d1;
	    if (d1==0)
	    { delay (20); cleardevice(); outline(); write();
	    }
	    else
	    exit(-1);
       }
	if(d==23)
       {    property();
	    outtextxy(360,110,"VANADIUM");outtextxy(360,140,"23");
	    outtextxy(360,170,"D");        outtextxy(360,200,"1910 c");
	    outtextxy(360,230,"3407 c"); outtextxy(360,260,"1.63");
	    outtextxy(360,290,"171 pm");    outtextxy(360,320, "6.11");
	    outtextxy(100,390,"----IF YOU WANT TO SEE THE PROPERTY OF OTHER ELEMENT PRESS 0");
	    outtextxy(100,410,"----IF YOU WANT TO STOP PRESS ANY KEY");
	    cin>>d1;
	    if (d1==0)
	    { delay (20); cleardevice(); outline(); write();
	    }
	    else
	    exit(-1);
       }
	if(d==24)
       {    property();
	    outtextxy(360,110,"CHROMIUM");outtextxy(360,140,"24");
	    outtextxy(360,170,"D");        outtextxy(360,200,"1907 c");
	    outtextxy(360,230,"2671 c"); outtextxy(360,260,"1.66");
	    outtextxy(360,290,"166 pm");    outtextxy(360,320, "7.19");
	    outtextxy(100,390,"----IF YOU WANT TO SEE THE PROPERTY OF OTHER ELEMENT PRESS 0");
	    outtextxy(100,410,"----IF YOU WANT TO STOP PRESS ANY KEY");
	    cin>>d1;
	    if (d1==0)
	    { delay (20); cleardevice(); outline(); write();
	    }
	    else
	    exit(-1);
       }
	if(d==25)
       {    property();
	    outtextxy(360,110,"MANGANESE");outtextxy(360,140,"25");
	    outtextxy(360,170,"D");        outtextxy(360,200,"1246 c");
	    outtextxy(360,230,"2061 c"); outtextxy(360,260,"1.55");
	    outtextxy(360,290,"161 pm");    outtextxy(360,320, "7.47");
	    outtextxy(100,390,"----IF YOU WANT TO SEE THE PROPERTY OF OTHER ELEMENT PRESS 0");
	    outtextxy(100,410,"----IF YOU WANT TO STOP PRESS ANY KEY");
	    cin>>d1;
	    if (d1==0)
	    { delay (20); cleardevice(); outline(); write();
	    }
	    else
	    exit(-1);
       }
	if(d==26)
       {    property();
	    outtextxy(360,110,"IRON");outtextxy(360,140,"26");
	    outtextxy(360,170,"D");        outtextxy(360,200,"1538 c");
	    outtextxy(360,230,"2861 c"); outtextxy(360,260,"1.83");
	    outtextxy(360,290,"156 pm");    outtextxy(360,320, "7.874");
	    outtextxy(100,390,"----IF YOU WANT TO SEE THE PROPERTY OF OTHER ELEMENT PRESS 0");
	    outtextxy(100,410,"----IF YOU WANT TO STOP PRESS ANY KEY");
	    cin>>d1;
	    if (d1==0)
	    { delay (20); cleardevice(); outline(); write();
	    }
	    else
	    exit(-1);
       }
	if(d==27)
       {    property();
	    outtextxy(360,110,"COBALT");outtextxy(360,140,"27");
	    outtextxy(360,170,"D");        outtextxy(360,200,"1495 c");
	    outtextxy(360,230,"2927 c"); outtextxy(360,260,"1.88");
	    outtextxy(360,290,"152 pm");    outtextxy(360,320, "8.9");
	    outtextxy(100,390,"----IF YOU WANT TO SEE THE PROPERTY OF OTHER ELEMENT PRESS 0");
	    outtextxy(100,410,"----IF YOU WANT TO STOP PRESS ANY KEY");
	    cin>>d1;
	    if (d1==0)
	    { delay (20); cleardevice(); outline(); write();
	    }
	    else
	    exit(-1);
       }
	if(d==28)
       {    property();
	    outtextxy(360,110,"NICKEL");outtextxy(360,140,"28");
	    outtextxy(360,170,"D");        outtextxy(360,200,"1455 c");
	    outtextxy(360,230,"2913 c"); outtextxy(360,260,"1.91");
	    outtextxy(360,290,"149 pm");    outtextxy(360,320, "8.908");
	    outtextxy(100,390,"----IF YOU WANT TO SEE THE PROPERTY OF OTHER ELEMENT PRESS 0");
	    outtextxy(100,410,"----IF YOU WANT TO STOP PRESS ANY KEY");
	    cin>>d1;
	    if (d1==0)
	    { delay (20); cleardevice(); outline(); write();
	    }
	    else
	    exit(-1);
       }
	if(d==29)
       {    property();
	    outtextxy(360,110,"COPPER");outtextxy(360,140,"29");
	    outtextxy(360,170,"D");        outtextxy(360,200,"1084.62 c");
	    outtextxy(360,230,"2562 c"); outtextxy(360,260,"1.9");
	    outtextxy(360,290,"145 pm");    outtextxy(360,320, "8.96");
	    outtextxy(100,390,"----IF YOU WANT TO SEE THE PROPERTY OF OTHER ELEMENT PRESS 0");
	    outtextxy(100,410,"----IF YOU WANT TO STOP PRESS ANY KEY");
	    cin>>d1;
	    if (d1==0)
	    { delay (20); cleardevice(); outline(); write();
	    }
	    else
	    exit(-1);
       }
	if(d==30)
       {    property();
	    outtextxy(360,110,"ZINC");outtextxy(360,140,"30");
	    outtextxy(360,170,"D");        outtextxy(360,200,"419.53 c");
	    outtextxy(360,230,"907 c"); outtextxy(360,260,"1.65");
	    outtextxy(360,290,"142 pm");    outtextxy(360,320, "7.14");
	    outtextxy(100,390,"----IF YOU WANT TO SEE THE PROPERTY OF OTHER ELEMENT PRESS 0");
	    outtextxy(100,410,"----IF YOU WANT TO STOP PRESS ANY KEY");
	    cin>>d1;
	    if (d1==0)
	    { delay (20); cleardevice(); outline(); write();
	    }
	    else
	    exit(-1);
       }
	if(d==31)
       {    property();
	    outtextxy(360,110,"GALLIUM");outtextxy(360,140,"31");
	    outtextxy(360,170,"P");        outtextxy(360,200,"29.76 c");
	    outtextxy(360,230,"2204 c"); outtextxy(360,260,"1.81");
	    outtextxy(360,290,"136 pm");    outtextxy(360,320, "5.904");
	    outtextxy(100,390,"----IF YOU WANT TO SEE THE PROPERTY OF OTHER ELEMENT PRESS 0");
	    outtextxy(100,410,"----IF YOU WANT TO STOP PRESS ANY KEY");
	    cin>>d1;
	    if (d1==0)
	    { delay (20); cleardevice(); outline(); write();
	    }
	    else
	    exit(-1);
       }
	if(d==32)
       {    property();
	    outtextxy(360,110,"GERMANIUM");outtextxy(360,140,"32");
	    outtextxy(360,170,"P");        outtextxy(360,200,"938.3 c");
	    outtextxy(360,230,"2820 c"); outtextxy(360,260,"2.01");
	    outtextxy(360,290,"125 pm");    outtextxy(360,320, "5.323");
	    outtextxy(100,390,"----IF YOU WANT TO SEE THE PROPERTY OF OTHER ELEMENT PRESS 0");
	    outtextxy(100,410,"----IF YOU WANT TO STOP PRESS ANY KEY");
	    cin>>d1;
	    if (d1==0)
	    { delay (20); cleardevice(); outline(); write();
	    }
	    else
	    exit(-1);
       }
	if(d==33)
       {    property();
	    outtextxy(360,110,"ARSENIC");outtextxy(360,140,"33");
	    outtextxy(360,170,"P");        outtextxy(360,200,"817 c");
	    outtextxy(360,230,"614 c"); outtextxy(360,260,"2.18");
	    outtextxy(360,290,"114 pm");    outtextxy(360,320, "5.727");
	    outtextxy(100,390,"----IF YOU WANT TO SEE THE PROPERTY OF OTHER ELEMENT PRESS 0");
	    outtextxy(100,410,"----IF YOU WANT TO STOP PRESS ANY KEY");
	    cin>>d1;
	    if (d1==0)
	    { delay (20); cleardevice(); outline(); write();
	    }
	    else
	    exit(-1);
       }
	if(d==34)
       {    property();
	    outtextxy(360,110,"SELENIUM");outtextxy(360,140,"34");
	    outtextxy(360,170,"P");        outtextxy(360,200,"221 c");
	    outtextxy(360,230,"685 c"); outtextxy(360,260,"2.55");
	    outtextxy(360,290,"103 pm");    outtextxy(360,320, "4.819");
	    outtextxy(100,390,"----IF YOU WANT TO SEE THE PROPERTY OF OTHER ELEMENT PRESS 0");
	    outtextxy(100,410,"----IF YOU WANT TO STOP PRESS ANY KEY");
	    cin>>d1;
	    if (d1==0)
	    { delay (20); cleardevice(); outline(); write();
	    }
	    else
	    exit(-1);
       }
	if(d==35)
       {    property();
	    outtextxy(360,110,"BROMINE");outtextxy(360,140,"35");
	    outtextxy(360,170,"P");        outtextxy(360,200,"-7.3 c");
	    outtextxy(360,230,"59 c"); outtextxy(360,260,"2.96");
	    outtextxy(360,290,"94 pm");    outtextxy(360,320, "3.12");
	    outtextxy(100,390,"----IF YOU WANT TO SEE THE PROPERTY OF OTHER ELEMENT PRESS 0");
	    outtextxy(100,410,"----IF YOU WANT TO STOP PRESS ANY KEY");
	    cin>>d1;
	    if (d1==0)
	    { delay (20); cleardevice(); outline(); write();
	    }
	    else
	    exit(-1);
       }
	if(d==36)
       {    property();
	    outtextxy(360,110,"KRYPTON");outtextxy(360,140,"36");
	    outtextxy(360,170,"P");        outtextxy(360,200,"-157.36 c");
	    outtextxy(360,230,"-153.22 c"); outtextxy(360,260,"3");
	    outtextxy(360,290,"87 pm");    outtextxy(360,320, "3.75 g\\l");
	    outtextxy(100,390,"----IF YOU WANT TO SEE THE PROPERTY OF OTHER ELEMENT PRESS 0");
	    outtextxy(100,410,"----IF YOU WANT TO STOP PRESS ANY KEY");
	    cin>>d1;
	    if (d1==0)
	    { delay (20); cleardevice(); outline(); write();
	    }
	    else
	    exit(-1);
       }
	if(d==37)
       {    property();
	    outtextxy(360,110,"RUBIDIUM");outtextxy(360,140,"37");
	    outtextxy(360,170,"S");        outtextxy(360,200,"39.31 c");
	    outtextxy(360,230,"688 c"); outtextxy(360,260,"0.82");
	    outtextxy(360,290,"265 pm");    outtextxy(360,320, "1.532");
	    outtextxy(100,390,"----IF YOU WANT TO SEE THE PROPERTY OF OTHER ELEMENT PRESS 0");
	    outtextxy(100,410,"----IF YOU WANT TO STOP PRESS ANY KEY");
	    cin>>d1;
	    if (d1==0)
	    { delay (20); cleardevice(); outline(); write();
	    }
	    else
	    exit(-1);
       }
	if(d==38)
       {    property();
	    outtextxy(360,110,"STRONTIUM");outtextxy(360,140,"38");
	    outtextxy(360,170,"S");        outtextxy(360,200,"777 c");
	    outtextxy(360,230,"1382 c"); outtextxy(360,260,"0.95");
	    outtextxy(360,290,"219 pm");    outtextxy(360,320, "2.63");
	    outtextxy(100,390,"----IF YOU WANT TO SEE THE PROPERTY OF OTHER ELEMENT PRESS 0");
	    outtextxy(100,410,"----IF YOU WANT TO STOP PRESS ANY KEY");
	    cin>>d1;
	    if (d1==0)
	    { delay (20); cleardevice(); outline(); write();
	    }
	    else
	    exit(-1);
       }
	if(d==39)
       {    property();
	    outtextxy(360,110,"YTTRIUM");outtextxy(360,140,"39");
	    outtextxy(360,170,"D");        outtextxy(360,200,"1526 c");
	    outtextxy(360,230,"3345 c"); outtextxy(360,260,"1.22");
	    outtextxy(360,290,"212 pm");    outtextxy(360,320, "4.472");
	    outtextxy(100,390,"----IF YOU WANT TO SEE THE PROPERTY OF OTHER ELEMENT PRESS 0");
	    outtextxy(100,410,"----IF YOU WANT TO STOP PRESS ANY KEY");
	    cin>>d1;
	    if (d1==0)
	    { delay (20); cleardevice(); outline(); write();
	    }
	    else
	    exit(-1);
       }
	if(d==40)
       {    property();
	    outtextxy(360,110,"ZIRCONIUM");outtextxy(360,140,"40");
	    outtextxy(360,170,"D");        outtextxy(360,200,"1855 c");
	    outtextxy(360,230,"4409 c"); outtextxy(360,260,"1.33");
	    outtextxy(360,290,"206 pm");    outtextxy(360,320, "6.511");
	    outtextxy(100,390,"----IF YOU WANT TO SEE THE PROPERTY OF OTHER ELEMENT PRESS 0");
	    outtextxy(100,410,"----IF YOU WANT TO STOP PRESS ANY KEY");
	    cin>>d1;
	    if (d1==0)
	    { delay (20); cleardevice(); outline(); write();
	    }
	    else
	    exit(-1);
       }
	if(d==41)
       {    property();
	    outtextxy(360,110,"NIOBIUM");outtextxy(360,140,"41");
	    outtextxy(360,170,"D");        outtextxy(360,200,"2477 c");
	    outtextxy(360,230,"4744 c"); outtextxy(360,260,"1.6");
	    outtextxy(360,290,"198 pm");    outtextxy(360,320, "8.57");
	    outtextxy(100,390,"----IF YOU WANT TO SEE THE PROPERTY OF OTHER ELEMENT PRESS 0");
	    outtextxy(100,410,"----IF YOU WANT TO STOP PRESS ANY KEY");
	    cin>>d1;
	    if (d1==0)
	    { delay (20); cleardevice(); outline(); write();
	    }
	    else
	    exit(-1);
       }
	if(d==42)
       {    property();
	    outtextxy(360,110,"MOLYBDENUM");outtextxy(360,140,"42");
	    outtextxy(360,170,"D");        outtextxy(360,200,"2623 c");
	    outtextxy(360,230,"4639 c"); outtextxy(360,260,"2.16");
	    outtextxy(360,290,"190 pm");    outtextxy(360,320, "10.28");
	    outtextxy(100,390,"----IF YOU WANT TO SEE THE PROPERTY OF OTHER ELEMENT PRESS 0");
	    outtextxy(100,410,"----IF YOU WANT TO STOP PRESS ANY KEY");
	    cin>>d1;
	    if (d1==0)
	    { delay (20); cleardevice(); outline(); write();
	    }
	    else
	    exit(-1);
       }
	if(d==43)
       {    property();
	    outtextxy(360,110,"TECHNETIUM");outtextxy(360,140,"43");
	    outtextxy(360,170,"D");        outtextxy(360,200,"2157 c");
	    outtextxy(360,230,"4265 c"); outtextxy(360,260,"1.9");
	    outtextxy(360,290,"183 pm");    outtextxy(360,320, "11.5");
	    outtextxy(100,390,"----IF YOU WANT TO SEE THE PROPERTY OF OTHER ELEMENT PRESS 0");
	    outtextxy(100,410,"----IF YOU WANT TO STOP PRESS ANY KEY");
	    cin>>d1;
	    if (d1==0)
	    { delay (20); cleardevice(); outline(); write();
	    }
	    else
	    exit(-1);
       }
	if(d==44)
       {    property();
	    outtextxy(360,110,"RUTHENIUM");outtextxy(360,140,"44");
	    outtextxy(360,170,"D");        outtextxy(360,200,"2334 c");
	    outtextxy(360,230,"4150 c"); outtextxy(360,260,"2.2");
	    outtextxy(360,290,"178 pm");    outtextxy(360,320, "12.37");
	    outtextxy(100,390,"----IF YOU WANT TO SEE THE PROPERTY OF OTHER ELEMENT PRESS 0");
	    outtextxy(100,410,"----IF YOU WANT TO STOP PRESS ANY KEY");
	    cin>>d1;
	    if (d1==0)
	    { delay (20); cleardevice(); outline(); write();
	    }
	    else
	    exit(-1);
       }
	if(d==45)
       {    property();
	    outtextxy(360,110,"RHODIUM");outtextxy(360,140,"45");
	    outtextxy(360,170,"D");        outtextxy(360,200,"1964 c");
	    outtextxy(360,230,"3695 c"); outtextxy(360,260,"2.28");
	    outtextxy(360,290,"173 pm");    outtextxy(360,320, "12.45");
	    outtextxy(100,390,"----IF YOU WANT TO SEE THE PROPERTY OF OTHER ELEMENT PRESS 0");
	    outtextxy(100,410,"----IF YOU WANT TO STOP PRESS ANY KEY");
	    cin>>d1;
	    if (d1==0)
	    { delay (20); cleardevice(); outline(); write();
	    }
	    else
	    exit(-1);
       }
	if(d==46)
       {    property();
	    outtextxy(360,110,"PALLADIUM");outtextxy(360,140,"46");
	    outtextxy(360,170,"D");        outtextxy(360,200,"1554.9 c");
	    outtextxy(360,230,"2963 c"); outtextxy(360,260,"2.2");
	    outtextxy(360,290,"169 pm");    outtextxy(360,320, "12.023");
	    outtextxy(100,390,"----IF YOU WANT TO SEE THE PROPERTY OF OTHER ELEMENT PRESS 0");
	    outtextxy(100,410,"----IF YOU WANT TO STOP PRESS ANY KEY");
	    cin>>d1;
	    if (d1==0)
	    { delay (20); cleardevice(); outline(); write();
	    }
	    else
	    exit(-1);
       }
	if(d==47)
       {    property();
	    outtextxy(360,110,"SILVER");outtextxy(360,140,"47");
	    outtextxy(360,170,"D");        outtextxy(360,200,"961.78 c");
	    outtextxy(360,230,"2162 c"); outtextxy(360,260,"1.93");
	    outtextxy(360,290,"165 pm");    outtextxy(360,320, "10.49");
	    outtextxy(100,390,"----IF YOU WANT TO SEE THE PROPERTY OF OTHER ELEMENT PRESS 0");
	    outtextxy(100,410,"----IF YOU WANT TO STOP PRESS ANY KEY");
	    cin>>d1;
	    if (d1==0)
	    { delay (20); cleardevice(); outline(); write();
	    }
	    else
	    exit(-1);
       }
	if(d==48)
       {    property();
	    outtextxy(360,110,"CADAMIUM");outtextxy(360,140,"48");
	    outtextxy(360,170,"D");        outtextxy(360,200,"321.07 c");
	    outtextxy(360,230,"767 c"); outtextxy(360,260,"1.69");
	    outtextxy(360,290,"161 pm");    outtextxy(360,320, "8.65");
	    outtextxy(100,390,"----IF YOU WANT TO SEE THE PROPERTY OF OTHER ELEMENT PRESS 0");
	    outtextxy(100,410,"----IF YOU WANT TO STOP PRESS ANY KEY");
	    cin>>d1;
	    if (d1==0)
	    { delay (20); cleardevice(); outline(); write();
	    }
	    else
	    exit(-1);
       }
	if(d==49)
       {    property();
	    outtextxy(360,110,"INDIUM");outtextxy(360,140,"49");
	    outtextxy(360,170,"P");        outtextxy(360,200,"156.6 c");
	    outtextxy(360,230,"2072 c"); outtextxy(360,260,"1.78");
	    outtextxy(360,290,"156 pm");    outtextxy(360,320, "7.31");
	    outtextxy(100,390,"----IF YOU WANT TO SEE THE PROPERTY OF OTHER ELEMENT PRESS 0");
	    outtextxy(100,410,"----IF YOU WANT TO STOP PRESS ANY KEY");
	    cin>>d1;
	    if (d1==0)
	    { delay (20); cleardevice(); outline(); write();
	    }
	    else
	    exit(-1);
       }
	if(d==50)
       {    property();
	    outtextxy(360,110,"TIN");outtextxy(360,140,"50");
	    outtextxy(360,170,"P");        outtextxy(360,200,"231.93 c");
	    outtextxy(360,230,"2602 c"); outtextxy(360,260,"1.96");
	    outtextxy(360,290,"145 pm");    outtextxy(360,320, "7.31");
	    outtextxy(100,390,"----IF YOU WANT TO SEE THE PROPERTY OF OTHER ELEMENT PRESS 0");
	    outtextxy(100,410,"----IF YOU WANT TO STOP PRESS ANY KEY");
	    cin>>d1;
	    if (d1==0)
	    { delay (20); cleardevice(); outline(); write();
	    }
	    else
	    exit(-1);
       }
	if(d==51)
       {    property();
	    outtextxy(360,110,"ANTIMONY");outtextxy(360,140,"51");
	    outtextxy(360,170,"P");        outtextxy(360,200,"630.63 c");
	    outtextxy(360,230,"1587 c"); outtextxy(360,260,"2.05");
	    outtextxy(360,290,"133 pm");    outtextxy(360,320, "6.697");
	    outtextxy(100,390,"----IF YOU WANT TO SEE THE PROPERTY OF OTHER ELEMENT PRESS 0");
	    outtextxy(100,410,"----IF YOU WANT TO STOP PRESS ANY KEY");
	    cin>>d1;
	    if (d1==0)
	    { delay (20); cleardevice(); outline(); write();
	    }
	    else
	    exit(-1);
       }
	if(d==52)
       {    property();
	    outtextxy(360,110,"TEELURIUM");outtextxy(360,140,"52");
	    outtextxy(360,170,"P");        outtextxy(360,200,"449.51 c");
	    outtextxy(360,230,"988 c"); outtextxy(360,260,"2.1");
	    outtextxy(360,290,"123 pm");    outtextxy(360,320, "6.24");
	    outtextxy(100,390,"----IF YOU WANT TO SEE THE PROPERTY OF OTHER ELEMENT PRESS 0");
	    outtextxy(100,410,"----IF YOU WANT TO STOP PRESS ANY KEY");
	    cin>>d1;
	    if (d1==0)
	    { delay (20); cleardevice(); outline(); write();
	    }
	    else
	    exit(-1);
       }
	if(d==53)
       {    property();
	    outtextxy(360,110,"IODINE");outtextxy(360,140,"53");
	    outtextxy(360,170,"P");        outtextxy(360,200,"113.7 c");
	    outtextxy(360,230,"184.3 c"); outtextxy(360,260,"2.66");
	    outtextxy(360,290,"115 pm");    outtextxy(360,320, "4.94");
	    outtextxy(100,390,"----IF YOU WANT TO SEE THE PROPERTY OF OTHER ELEMENT PRESS 0");
	    outtextxy(100,410,"----IF YOU WANT TO STOP PRESS ANY KEY");
	    cin>>d1;
	    if (d1==0)
	    { delay (20); cleardevice(); outline(); write();
	    }
	    else
	    exit(-1);
       }
	if(d==54)
       {    property();
	    outtextxy(360,110,"XENON");outtextxy(360,140,"54");
	    outtextxy(360,170,"P");        outtextxy(360,200,"-111.8 c");
	    outtextxy(360,230,"-108 c"); outtextxy(360,260,"2.6");
	    outtextxy(360,290,"108 pm");    outtextxy(360,320, "5.9 g\\l");
	    outtextxy(100,390,"----IF YOU WANT TO SEE THE PROPERTY OF OTHER ELEMENT PRESS 0");
	    outtextxy(100,410,"----IF YOU WANT TO STOP PRESS ANY KEY");
	    cin>>d1;
	    if (d1==0)
	    { delay (20); cleardevice(); outline(); write();
	    }
	    else
	    exit(-1);
       }
	if(d==55)
       {    property();
	    outtextxy(360,110,"CESIUM");outtextxy(360,140,"55");
	    outtextxy(360,170,"S");        outtextxy(360,200,"28.44 c");
	    outtextxy(360,230,"671 c"); outtextxy(360,260,"0.79");
	    outtextxy(360,290,"298 pm");    outtextxy(360,320, "1.879");
	    outtextxy(100,390,"----IF YOU WANT TO SEE THE PROPERTY OF OTHER ELEMENT PRESS 0");
	    outtextxy(100,410,"----IF YOU WANT TO STOP PRESS ANY KEY");
	    cin>>d1;
	    if (d1==0)
	    { delay (20); cleardevice(); outline(); write();
	    }
	    else
	    exit(-1);
       }
	if(d==56)
       {    property();
	    outtextxy(360,110,"BARIUM");outtextxy(360,140,"56");
	    outtextxy(360,170,"S");        outtextxy(360,200,"727 c");
	    outtextxy(360,230,"1870 c"); outtextxy(360,260,"0.89");
	    outtextxy(360,290,"253 pm");    outtextxy(360,320, "3.51");
	    outtextxy(100,390,"----IF YOU WANT TO SEE THE PROPERTY OF OTHER ELEMENT PRESS 0");
	    outtextxy(100,410,"----IF YOU WANT TO STOP PRESS ANY KEY");
	    cin>>d1;
	    if (d1==0)
	    { delay (20); cleardevice(); outline(); write();
	    }
	    else
	    exit(-1);
       }
	if(d==57)
       {    property();
	    outtextxy(360,110,"LANTHANUM");outtextxy(360,140,"57");
	    outtextxy(360,170,"F");        outtextxy(360,200,"919 c");
	    outtextxy(360,230,"3464 c"); outtextxy(360,260,"1.1");
	    outtextxy(360,290,"250 pm");    outtextxy(360,320, "6.146");
	    outtextxy(100,390,"----IF YOU WANT TO SEE THE PROPERTY OF OTHER ELEMENT PRESS 0");
	    outtextxy(100,410,"----IF YOU WANT TO STOP PRESS ANY KEY");
	    cin>>d1;
	    if (d1==0)
	    { delay (20); cleardevice(); outline(); write();
	    }
	    else
	    exit(-1);
       }
	if(d==58)
       {    property();
	    outtextxy(360,110,"CERIUM");outtextxy(360,140,"58");
	    outtextxy(360,170,"F");        outtextxy(360,200,"798 c");
	    outtextxy(360,230,"3360 c"); outtextxy(360,260,"1.12");
	    outtextxy(360,290,"248 pm");    outtextxy(360,320, "6.689");
	    outtextxy(100,390,"----IF YOU WANT TO SEE THE PROPERTY OF OTHER ELEMENT PRESS 0");
	    outtextxy(100,410,"----IF YOU WANT TO STOP PRESS ANY KEY");
	    cin>>d1;
	    if (d1==0)
	    { delay (20); cleardevice(); outline(); write();
	    }
	    else
	    exit(-1);
       }
	if(d==59)
       {    property();
	    outtextxy(360,110,"PRASEODYMIUM");outtextxy(360,140,"59");
	    outtextxy(360,170,"F");        outtextxy(360,200,"931 c");
	    outtextxy(360,230,"3290 c"); outtextxy(360,260,"1.13");
	    outtextxy(360,290,"247 pm");    outtextxy(360,320, "6.64");
	    outtextxy(100,390,"----IF YOU WANT TO SEE THE PROPERTY OF OTHER ELEMENT PRESS 0");
	    outtextxy(100,410,"----IF YOU WANT TO STOP PRESS ANY KEY");
	    cin>>d1;
	    if (d1==0)
	    { delay (20); cleardevice(); outline(); write();
	    }
	    else
	    exit(-1);
       }
	if(d==60)
       {    property();
	    outtextxy(360,110,"NEODYMIUM");outtextxy(360,140,"60");
	    outtextxy(360,170,"F");        outtextxy(360,200,"1021 c");
	    outtextxy(360,230,"3100 c"); outtextxy(360,260,"1.14");
	    outtextxy(360,290,"206 pm");    outtextxy(360,320, "7.01");
	    outtextxy(100,390,"----IF YOU WANT TO SEE THE PROPERTY OF OTHER ELEMENT PRESS 0");
	    outtextxy(100,410,"----IF YOU WANT TO STOP PRESS ANY KEY");
	    cin>>d1;
	    if (d1==0)
	    { delay (20); cleardevice(); outline(); write();
	    }
	    else
	    exit(-1);
       }
	if(d==61)
       {    property();
	    outtextxy(360,110,"PROMETHIUM");outtextxy(360,140,"61");
	    outtextxy(360,170,"F");        outtextxy(360,200,"1100 c");
	    outtextxy(360,230,"3000 c"); outtextxy(360,260,"1.1");
	    outtextxy(360,290,"205 pm");    outtextxy(360,320, "7.264");
	    outtextxy(100,390,"----IF YOU WANT TO SEE THE PROPERTY OF OTHER ELEMENT PRESS 0");
	    outtextxy(100,410,"----IF YOU WANT TO STOP PRESS ANY KEY");
	    cin>>d1;
	    if (d1==0)
	    { delay (20); cleardevice(); outline(); write();
	    }
	    else
	    exit(-1);
       }
	if(d==62)
       {    property();
	    outtextxy(360,110,"SAMARIUM");outtextxy(360,140,"62");
	    outtextxy(360,170,"F");        outtextxy(360,200,"1072 c");
	    outtextxy(360,230,"1803 c"); outtextxy(360,260,"1.17");
	    outtextxy(360,290,"238 pm");    outtextxy(360,320, "7.353");
	    outtextxy(100,390,"----IF YOU WANT TO SEE THE PROPERTY OF OTHER ELEMENT PRESS 0");
	    outtextxy(100,410,"----IF YOU WANT TO STOP PRESS ANY KEY");
	    cin>>d1;
	    if (d1==0)
	    { delay (20); cleardevice(); outline(); write();
	    }
	    else
	    exit(-1);
       }
	if(d==63)
       {    property();
	    outtextxy(360,110,"EUROPIUM");outtextxy(360,140,"63");
	    outtextxy(360,170,"F");        outtextxy(360,200,"822 c");
	    outtextxy(360,230,"1527 c"); outtextxy(360,260,"1.2");
	    outtextxy(360,290,"231 pm");    outtextxy(360,320, "5.244");
	    outtextxy(100,390,"----IF YOU WANT TO SEE THE PROPERTY OF OTHER ELEMENT PRESS 0");
	    outtextxy(100,410,"----IF YOU WANT TO STOP PRESS ANY KEY");
	    cin>>d1;
	    if (d1==0)
	    { delay (20); cleardevice(); outline(); write();
	    }
	    else
	    exit(-1);
       }
	if(d==64)
       {    property();
	    outtextxy(360,110,"GADOLINIUM");outtextxy(360,140,"64");
	    outtextxy(360,170,"F");        outtextxy(360,200,"1313 c");
	    outtextxy(360,230,"3250 c"); outtextxy(360,260,"1.2");
	    outtextxy(360,290,"233 pm");    outtextxy(360,320, "7.901");
	    outtextxy(100,390,"----IF YOU WANT TO SEE THE PROPERTY OF OTHER ELEMENT PRESS 0");
	    outtextxy(100,410,"----IF YOU WANT TO STOP PRESS ANY KEY");
	    cin>>d1;
	    if (d1==0)
	    { delay (20); cleardevice(); outline(); write();
	    }
	    else
	    exit(-1);
       }
	if(d==65)
       {    property();
	    outtextxy(360,110,"TERBIUM");outtextxy(360,140,"65");
	    outtextxy(360,170,"F");        outtextxy(360,200,"1356 c");
	    outtextxy(360,230,"3230 c"); outtextxy(360,260,"1.2");
	    outtextxy(360,290,"225 pm");    outtextxy(360,320, "8.219");
	    outtextxy(100,390,"----IF YOU WANT TO SEE THE PROPERTY OF OTHER ELEMENT PRESS 0");
	    outtextxy(100,410,"----IF YOU WANT TO STOP PRESS ANY KEY");
	    cin>>d1;
	    if (d1==0)
	    { delay (20); cleardevice(); outline(); write();
	    }
	    else
	    exit(-1);
       }
	if(d==66)
       {    property();
	    outtextxy(360,110,"DYSPROSIUM");outtextxy(360,140,"66");
	    outtextxy(360,170,"F");        outtextxy(360,200,"1412 c");
	    outtextxy(360,230,"2567 c"); outtextxy(360,260,"1.22");
	    outtextxy(360,290,"228 pm");    outtextxy(360,320, "8.551");
	    outtextxy(100,390,"----IF YOU WANT TO SEE THE PROPERTY OF OTHER ELEMENT PRESS 0");
	    outtextxy(100,410,"----IF YOU WANT TO STOP PRESS ANY KEY");
	    cin>>d1;
	    if (d1==0)
	    { delay (20); cleardevice(); outline(); write();
	    }
	    else
	    exit(-1);
       }
	if(d==67)
       {    property();
	    outtextxy(360,110,"HOLMIUM");outtextxy(360,140,"67");
	    outtextxy(360,170,"F");        outtextxy(360,200,"1474 c");
	    outtextxy(360,230,"2700 c"); outtextxy(360,260,"1.23");
	    outtextxy(360,290,"226 pm");    outtextxy(360,320, "8.795");
	    outtextxy(100,390,"----IF YOU WANT TO SEE THE PROPERTY OF OTHER ELEMENT PRESS 0");
	    outtextxy(100,410,"----IF YOU WANT TO STOP PRESS ANY KEY");
	    cin>>d1;
	    if (d1==0)
	    { delay (20); cleardevice(); outline(); write();
	    }
	    else
	    exit(-1);
       }
	if(d==68)
       {    property();
	    outtextxy(360,110,"ERBIUM");outtextxy(360,140,"68");
	    outtextxy(360,170,"F");        outtextxy(360,200,"1497 c");
	    outtextxy(360,230,"2868 c"); outtextxy(360,260,"1.24");
	    outtextxy(360,290,"226 pm");    outtextxy(360,320, "9.066");
	    outtextxy(100,390,"----IF YOU WANT TO SEE THE PROPERTY OF OTHER ELEMENT PRESS 0");
	    outtextxy(100,410,"----IF YOU WANT TO STOP PRESS ANY KEY");
	    cin>>d1;
	    if (d1==0)
	    { delay (20); cleardevice(); outline(); write();
	    }
	    else
	    exit(-1);
       }
	if(d==69)
       {    property();
	    outtextxy(360,110,"THULIUM");outtextxy(360,140,"69");
	    outtextxy(360,170,"F");        outtextxy(360,200,"1545 c");
	    outtextxy(360,230,"1950 c"); outtextxy(360,260,"1.25");
	    outtextxy(360,290,"222 pm");    outtextxy(360,320, "9.32");
	    outtextxy(100,390,"----IF YOU WANT TO SEE THE PROPERTY OF OTHER ELEMENT PRESS 0");
	    outtextxy(100,410,"----IF YOU WANT TO STOP PRESS ANY KEY");
	    cin>>d1;
	    if (d1==0)
	    { delay (20); cleardevice(); outline(); write();
	    }
	    else
	    exit(-1);
       }
	if(d==70)
       {    property();
	    outtextxy(360,110,"YTTERBIUM");outtextxy(360,140,"70");
	    outtextxy(360,170,"F");        outtextxy(360,200,"819 c");
	    outtextxy(360,230,"1196 c"); outtextxy(360,260,"1.1");
	    outtextxy(360,290,"222 pm");    outtextxy(360,320, "6.57");
	    outtextxy(100,390,"----IF YOU WANT TO SEE THE PROPERTY OF OTHER ELEMENT PRESS 0");
	    outtextxy(100,410,"----IF YOU WANT TO STOP PRESS ANY KEY");
	    cin>>d1;
	    if (d1==0)
	    { delay (20); cleardevice(); outline(); write();
	    }
	    else
	    exit(-1);
       }
	if(d==71)
       {    property();
	    outtextxy(360,110,"LUTETIUM");outtextxy(360,140,"71");
	    outtextxy(360,170,"F");        outtextxy(360,200,"1663 c");
	    outtextxy(360,230,"3402 c"); outtextxy(360,260,"1.27");
	    outtextxy(360,290,"217 pm");    outtextxy(360,320, "9.841");
	    outtextxy(100,390,"----IF YOU WANT TO SEE THE PROPERTY OF OTHER ELEMENT PRESS 0");
	    outtextxy(100,410,"----IF YOU WANT TO STOP PRESS ANY KEY");
	    cin>>d1;
	    if (d1==0)
	    { delay (20); cleardevice(); outline(); write();
	    }
	    else
	    exit(-1);
       }
	if(d==72)
       {    property();
	    outtextxy(360,110,"HAFNIUM");outtextxy(360,140,"72");
	    outtextxy(360,170,"D");        outtextxy(360,200,"2233 c");
	    outtextxy(360,230,"4603 c"); outtextxy(360,260,"1.3");
	    outtextxy(360,290,"208 pm");    outtextxy(360,320, "13.31");
	    outtextxy(100,390,"----IF YOU WANT TO SEE THE PROPERTY OF OTHER ELEMENT PRESS 0");
	    outtextxy(100,410,"----IF YOU WANT TO STOP PRESS ANY KEY");
	    cin>>d1;
	    if (d1==0)
	    { delay (20); cleardevice(); outline(); write();
	    }
	    else
	    exit(-1);
       }
	if(d==73)
       {    property();
	    outtextxy(360,110,"TANTALUM");outtextxy(360,140,"73");
	    outtextxy(360,170,"D");        outtextxy(360,200,"3017 c");
	    outtextxy(360,230,"5458 c"); outtextxy(360,260,"1.5");
	    outtextxy(360,290,"200 pm");    outtextxy(360,320, "16.65");
	    outtextxy(100,390,"----IF YOU WANT TO SEE THE PROPERTY OF OTHER ELEMENT PRESS 0");
	    outtextxy(100,410,"----IF YOU WANT TO STOP PRESS ANY KEY");
	    cin>>d1;
	    if (d1==0)
	    { delay (20); cleardevice(); outline(); write();
	    }
	    else
	    exit(-1);
       }
	if(d==74)
       {    property();
	    outtextxy(360,110,"TUNGSTEN");outtextxy(360,140,"74");
	    outtextxy(360,170,"D");        outtextxy(360,200,"3422 c");
	    outtextxy(360,230,"5555 c"); outtextxy(360,260,"2.36");
	    outtextxy(360,290,"193 pm");    outtextxy(360,320, "19.25");
	    outtextxy(100,390,"----IF YOU WANT TO SEE THE PROPERTY OF OTHER ELEMENT PRESS 0");
	    outtextxy(100,410,"----IF YOU WANT TO STOP PRESS ANY KEY");
	    cin>>d1;
	    if (d1==0)
	    { delay (20); cleardevice(); outline(); write();
	    }
	    else
	    exit(-1);
       }
	if(d==75)
       {    property();
	    outtextxy(360,110,"RHENIUM");outtextxy(360,140,"75");
	    outtextxy(360,170,"D");        outtextxy(360,200,"3186 c");
	    outtextxy(360,230,"5596 c"); outtextxy(360,260,"1.9");
	    outtextxy(360,290,"188 pm");    outtextxy(360,320, "21.02");
	    outtextxy(100,390,"----IF YOU WANT TO SEE THE PROPERTY OF OTHER ELEMENT PRESS 0");
	    outtextxy(100,410,"----IF YOU WANT TO STOP PRESS ANY KEY");
	    cin>>d1;
	    if (d1==0)
	    { delay (20); cleardevice(); outline(); write();
	    }
	    else
	    exit(-1);
       }
	if(d==76)
       {    property();
	    outtextxy(360,110,"OSMIUM");outtextxy(360,140,"76");
	    outtextxy(360,170,"D");        outtextxy(360,200,"3033 c");
	    outtextxy(360,230,"5012 c"); outtextxy(360,260,"2.2");
	    outtextxy(360,290,"185 pm");    outtextxy(360,320, "22.59");
	    outtextxy(100,390,"----IF YOU WANT TO SEE THE PROPERTY OF OTHER ELEMENT PRESS 0");
	    outtextxy(100,410,"----IF YOU WANT TO STOP PRESS ANY KEY");
	    cin>>d1;
	    if (d1==0)
	    { delay (20); cleardevice(); outline(); write();
	    }
	    else
	    exit(-1);
       }
	if(d==77)
       {    property();
	    outtextxy(360,110,"IRIDIUM");outtextxy(360,140,"77");
	    outtextxy(360,170,"D");        outtextxy(360,200,"2466 c");
	    outtextxy(360,230,"4428 c"); outtextxy(360,260,"2.2");
	    outtextxy(360,290,"180 pm");    outtextxy(360,320, "22.56");
	    outtextxy(100,390,"----IF YOU WANT TO SEE THE PROPERTY OF OTHER ELEMENT PRESS 0");
	    outtextxy(100,410,"----IF YOU WANT TO STOP PRESS ANY KEY");
	    cin>>d1;
	    if (d1==0)
	    { delay (20); cleardevice(); outline(); write();
	    }
	    else
	    exit(-1);
       }
	if(d==78)
       {    property();
	    outtextxy(360,110,"PLATINUM");outtextxy(360,140,"78");
	    outtextxy(360,170,"D");        outtextxy(360,200,"1768.3 c");
	    outtextxy(360,230,"3825 c"); outtextxy(360,260,"2.28");
	    outtextxy(360,290,"177 pm");    outtextxy(360,320, "21.45");
	    outtextxy(100,390,"----IF YOU WANT TO SEE THE PROPERTY OF OTHER ELEMENT PRESS 0");
	    outtextxy(100,410,"----IF YOU WANT TO STOP PRESS ANY KEY");
	    cin>>d1;
	    if (d1==0)
	    { delay (20); cleardevice(); outline(); write();
	    }
	    else
	    exit(-1);
       }
	if(d==79)
       {    property();
	    outtextxy(360,110,"GOLD");outtextxy(360,140,"79");
	    outtextxy(360,170,"D");        outtextxy(360,200,"1064.18 c");
	    outtextxy(360,230,"2856 c"); outtextxy(360,260,"2.54");
	    outtextxy(360,290,"174 pm");    outtextxy(360,320, "19.3");
	    outtextxy(100,390,"----IF YOU WANT TO SEE THE PROPERTY OF OTHER ELEMENT PRESS 0");
	    outtextxy(100,410,"----IF YOU WANT TO STOP PRESS ANY KEY");
	    cin>>d1;
	    if (d1==0)
	    { delay (20); cleardevice(); outline(); write();
	    }
	    else
	    exit(-1);
       }
	if(d==80)
       {    property();
	    outtextxy(360,110,"MERCURY");outtextxy(360,140,"80");
	    outtextxy(360,170,"D");        outtextxy(360,200,"-38.83 c");
	    outtextxy(360,230,"356.73 c"); outtextxy(360,260,"2");
	    outtextxy(360,290,"171 pm");    outtextxy(360,320, "13.534");
	    outtextxy(100,390,"----IF YOU WANT TO SEE THE PROPERTY OF OTHER ELEMENT PRESS 0");
	    outtextxy(100,410,"----IF YOU WANT TO STOP PRESS ANY KEY");
	    cin>>d1;
	    if (d1==0)
	    { delay (20); cleardevice(); outline(); write();
	    }
	    else
	    exit(-1);
       }
	if(d==81)
       {    property();
	    outtextxy(360,110,"THALLIUM");outtextxy(360,140,"81");
	    outtextxy(360,170,"P");        outtextxy(360,200,"304 c");
	    outtextxy(360,230,"1473 c"); outtextxy(360,260,"1,62");
	    outtextxy(360,290,"156 pm");    outtextxy(360,320, "11.85");
	    outtextxy(100,390,"----IF YOU WANT TO SEE THE PROPERTY OF OTHER ELEMENT PRESS 0");
	    outtextxy(100,410,"----IF YOU WANT TO STOP PRESS ANY KEY");
	    cin>>d1;
	    if (d1==0)
	    { delay (20); cleardevice(); outline(); write();
	    }
	    else
	    exit(-1);
       }
	if(d==82)
       {    property();
	    outtextxy(360,110,"LEAD");outtextxy(360,140,"82");
	    outtextxy(360,170,"P");        outtextxy(360,200,"327.46 c");
	    outtextxy(360,230,"1749 c"); outtextxy(360,260,"2.33");
	    outtextxy(360,290,"154 pm");    outtextxy(360,320, "11.34");
	    outtextxy(100,390,"----IF YOU WANT TO SEE THE PROPERTY OF OTHER ELEMENT PRESS 0");
	    outtextxy(100,410,"----IF YOU WANT TO STOP PRESS ANY KEY");
	    cin>>d1;
	    if (d1==0)
	    { delay (20); cleardevice(); outline(); write();
	    }
	    else
	    exit(-1);
       }
	if(d==83)
       {    property();
	    outtextxy(360,110,"BISMUTH");outtextxy(360,140,"83");
	    outtextxy(360,170,"P");        outtextxy(360,200,"271.3 c");
	    outtextxy(360,230,"1564 c"); outtextxy(360,260,"2.02");
	    outtextxy(360,290,"143 pm");    outtextxy(360,320, "9.78");
	    outtextxy(100,390,"----IF YOU WANT TO SEE THE PROPERTY OF OTHER ELEMENT PRESS 0");
	    outtextxy(100,410,"----IF YOU WANT TO STOP PRESS ANY KEY");
	    cin>>d1;
	    if (d1==0)
	    { delay (20); cleardevice(); outline(); write();
	    }
	    else
	    exit(-1);
       }
	if(d==84)
       {    property();
	    outtextxy(360,110,"POLONIUM");outtextxy(360,140,"84");
	    outtextxy(360,170,"P");        outtextxy(360,200,"254 c");
	    outtextxy(360,230,"962 c"); outtextxy(360,260,"2");
	    outtextxy(360,290,"135 pm");    outtextxy(360,320, "9.196");
	    outtextxy(100,390,"----IF YOU WANT TO SEE THE PROPERTY OF OTHER ELEMENT PRESS 0");
	    outtextxy(100,410,"----IF YOU WANT TO STOP PRESS ANY KEY");
	    cin>>d1;
	    if (d1==0)
	    { delay (20); cleardevice(); outline(); write();
	    }
	    else
	    exit(-1);
       }
	if(d==85)
       {    property();
	    outtextxy(360,110,"ASTATINE");outtextxy(360,140,"85");
	    outtextxy(360,170,"P");        outtextxy(360,200,"302 c");
	    outtextxy(360,230,"336.8 c"); outtextxy(360,260,"2.2");
	    outtextxy(360,290,"127 pm");    outtextxy(360,320, "7");
	    outtextxy(100,390,"----IF YOU WANT TO SEE THE PROPERTY OF OTHER ELEMENT PRESS 0");
	    outtextxy(100,410,"----IF YOU WANT TO STOP PRESS ANY KEY");
	    cin>>d1;
	    if (d1==0)
	    { delay (20); cleardevice(); outline(); write();
	    }
	    else
	    exit(-1);
       }
       if(d==86)
       {    property();
	    outtextxy(360,110,"RADON");outtextxy(360,140,"86");
	    outtextxy(360,170,"P");        outtextxy(360,200,"-71 c");
	    outtextxy(360,230,"-61.7 c"); outtextxy(360,260,"N\\A");
	    outtextxy(360,290,"120 pm");    outtextxy(360,320, "9.73 g\\l");
	    outtextxy(100,390,"----IF YOU WANT TO SEE THE PROPERTY OF OTHER ELEMENT PRESS 0");
	    outtextxy(100,410,"----IF YOU WANT TO STOP PRESS ANY KEY");
	    cin>>d1;
	    if (d1==0)
	    { delay (20); cleardevice(); outline(); write();
	    }
	    else
	    exit(-1);
       }
	if(d==87)
       {    property();
	    outtextxy(360,110,"FRANCIUM");outtextxy(360,140,"87");
	    outtextxy(360,170,"S");        outtextxy(360,200,"27 c");
	    outtextxy(360,230,"676.8 c"); outtextxy(360,260,"0.79");
	    outtextxy(360,290,"348 pm");    outtextxy(360,320, "2.9");
	    outtextxy(100,390,"----IF YOU WANT TO SEE THE PROPERTY OF OTHER ELEMENT PRESS 0");
	    outtextxy(100,410,"----IF YOU WANT TO STOP PRESS ANY KEY");
	    cin>>d1;
	    if (d1==0)
	    { delay (20); cleardevice(); outline(); write();
	    }
	    else
	    exit(-1);
	 }
	 if(d==88)
       {    property();
	    outtextxy(360,110,"RADIUM");outtextxy(360,140,"88");
	    outtextxy(360,170,"S");        outtextxy(360,200,"700 c");
	    outtextxy(360,230,"1737 c"); outtextxy(360,260,"0.9");
	    outtextxy(360,290,"200 pm");    outtextxy(360,320, "5");
	    outtextxy(100,390,"----IF YOU WANT TO SEE THE PROPERTY OF OTHER ELEMENT PRESS 0");
	    outtextxy(100,410,"----IF YOU WANT TO STOP PRESS ANY KEY");
	    cin>>d1;
	    if (d1==0)
	    { delay (20); cleardevice(); outline(); write();
	    }
	    else
	    exit(-1);
       }
	if(d==89)
       {    property();
	    outtextxy(360,110,"ACITINIUM");outtextxy(360,140,"89");
	    outtextxy(360,170,"F");        outtextxy(360,200,"1050 c");
	    outtextxy(360,230,"3200 c"); outtextxy(360,260,"1.1");
	    outtextxy(360,290,"200 pm");    outtextxy(360,320, "10.07");
	    outtextxy(100,390,"----IF YOU WANT TO SEE THE PROPERTY OF OTHER ELEMENT PRESS 0");
	    outtextxy(100,410,"----IF YOU WANT TO STOP PRESS ANY KEY");
	    cin>>d1;
	    if (d1==0)
	    { delay (20); cleardevice(); outline(); write();
	    }
	    else
	    exit(-1);
       }
	if(d==90)
       {    property();
	    outtextxy(360,110,"THORIUM");outtextxy(360,140,"90");
	    outtextxy(360,170,"F");        outtextxy(360,200,"1750 c");
	    outtextxy(360,230,"4820 c"); outtextxy(360,260,"1.3");
	    outtextxy(360,290,"240 pm");    outtextxy(360,320, "11.724");
	    outtextxy(100,390,"----IF YOU WANT TO SEE THE PROPERTY OF OTHER ELEMENT PRESS 0");
	    outtextxy(100,410,"----IF YOU WANT TO STOP PRESS ANY KEY");
	    cin>>d1;
	    if (d1==0)
	    { delay (20); cleardevice(); outline(); write();
	    }
	    else
	    exit(-1);
       }
	if(d==91)
       {    property();
	    outtextxy(360,110,"PROTACTINIUM");outtextxy(360,140,"91");
	    outtextxy(360,170,"F");        outtextxy(360,200,"1572 c");
	    outtextxy(360,230,"4000 c"); outtextxy(360,260,"1.5");
	    outtextxy(360,290,"200 pm");    outtextxy(360,320, "15.37");
	    outtextxy(100,390,"----IF YOU WANT TO SEE THE PROPERTY OF OTHER ELEMENT PRESS 0");
	    outtextxy(100,410,"----IF YOU WANT TO STOP PRESS ANY KEY");
	    cin>>d1;
	    if (d1==0)
	    { delay (20); cleardevice(); outline(); write();
	    }
	    else
	    exit(-1);
       }
	if(d==92)
       {    property();
	    outtextxy(360,110,"URANIUM");outtextxy(360,140,"92");
	    outtextxy(360,170,"F");        outtextxy(360,200,"1135 c");
	    outtextxy(360,230,"3927 c"); outtextxy(360,260,"1.38");
	    outtextxy(360,290,"230 pm");    outtextxy(360,320, "19.05");
	    outtextxy(100,390,"----IF YOU WANT TO SEE THE PROPERTY OF OTHER ELEMENT PRESS 0");
	    outtextxy(100,410,"----IF YOU WANT TO STOP PRESS ANY KEY");
	    cin>>d1;
	    if (d1==0)
	    { delay (20); cleardevice(); outline(); write();
	    }
	    else
	    exit(-1);
       }
	if(d==93)
       {    property();
	    outtextxy(360,110,"NEPTUNIUM");outtextxy(360,140,"93");
	    outtextxy(360,170,"F");        outtextxy(360,200,"644 c");
	    outtextxy(360,230,"4000 c"); outtextxy(360,260,"1.36");
	    outtextxy(360,290,"200 pm");    outtextxy(360,320, "20.45");
	    outtextxy(100,390,"----IF YOU WANT TO SEE THE PROPERTY OF OTHER ELEMENT PRESS 0");
	    outtextxy(100,410,"----IF YOU WANT TO STOP PRESS ANY KEY");
	    cin>>d1;
	    if (d1==0)
	    { delay (20); cleardevice(); outline(); write();
	    }
	    else
	    exit(-1);
       }
	if(d==94)
       {    property();
	    outtextxy(360,110,"PLUTONIUM");outtextxy(360,140,"4");
	    outtextxy(360,170,"F");        outtextxy(360,200,"640 c");
	    outtextxy(360,230,"3230 c"); outtextxy(360,260,"1.28");
	    outtextxy(360,290,"187 pm");    outtextxy(360,320, "19.816");
	    outtextxy(100,390,"----IF YOU WANT TO SEE THE PROPERTY OF OTHER ELEMENT PRESS 0");
	    outtextxy(100,410,"----IF YOU WANT TO STOP PRESS ANY KEY");
	    cin>>d1;
	    if (d1==0)
	    { delay (20); cleardevice(); outline(); write();
	    }
	    else
	    exit(-1);
       }
	if(d==95)
       {    property();
	    outtextxy(360,110,"AMERICIUM");outtextxy(360,140,"95");
	    outtextxy(360,170,"F");        outtextxy(360,200,"1175 c");
	    outtextxy(360,230,"2011 c"); outtextxy(360,260,"1.3");
	    outtextxy(360,290,"180 pm");    outtextxy(360,320, "13.67");
	    outtextxy(100,390,"----IF YOU WANT TO SEE THE PROPERTY OF OTHER ELEMENT PRESS 0");
	    outtextxy(100,410,"----IF YOU WANT TO STOP PRESS ANY KEY");
	    cin>>d1;
	    if (d1==0)
	    { delay (20); cleardevice(); outline(); write();
	    }
	    else
	    exit(-1);
       }
       if(d==96)
       {    property();
	    outtextxy(360,110,"CURIUM");outtextxy(360,140,"96");
	    outtextxy(360,170,"F");        outtextxy(360,200,"1345 c");
	    outtextxy(360,230,"3110 c"); outtextxy(360,260,"1.3");
	    outtextxy(360,290,"169 pm");    outtextxy(360,320, "13.51");
	    outtextxy(100,390,"----IF YOU WANT TO SEE THE PROPERTY OF OTHER ELEMENT PRESS 0");
	    outtextxy(100,410,"----IF YOU WANT TO STOP PRESS ANY KEY");
	    cin>>d1;
	    if (d1==0)
	    { delay (20); cleardevice(); outline(); write();
	    }
	    else
	    exit(-1);
       }
	if(d==97)
       {    property();
	    outtextxy(360,110,"BERKELIUM");outtextxy(360,140,"97");
	    outtextxy(360,170,"F");        outtextxy(360,200,"1050 c");
	    outtextxy(360,230,"2627 c"); outtextxy(360,260,"1.3");
	    outtextxy(360,290,"200 pm");    outtextxy(360,320, "14.78");
	    outtextxy(100,390,"----IF YOU WANT TO SEE THE PROPERTY OF OTHER ELEMENT PRESS 0");
	    outtextxy(100,410,"----IF YOU WANT TO STOP PRESS ANY KEY");
	    cin>>d1;
	    if (d1==0)
	    { delay (20); cleardevice(); outline(); write();
	    }
	    else
	    exit(-1);
       }
	if(d==98)
       {    property();
	    outtextxy(360,110,"CALIFORNIUM");outtextxy(360,140,"98");
	    outtextxy(360,170,"F");        outtextxy(360,200,"900 c");
	    outtextxy(360,230,"1472 c"); outtextxy(360,260,"1.3");
	    outtextxy(360,290,"200 pm");    outtextxy(360,320, "15.1");
	    outtextxy(100,390,"----IF YOU WANT TO SEE THE PROPERTY OF OTHER ELEMENT PRESS 0");
	    outtextxy(100,410,"----IF YOU WANT TO STOP PRESS ANY KEY");
	    cin>>d1;
	    if (d1==0)
	    { delay (20); cleardevice(); outline(); write();
	    }
	    else
	    exit(-1);
       }
	if(d==99)
       {    property();
	    outtextxy(360,110,"EINSTEINIUM");outtextxy(360,140,"99");
	    outtextxy(360,170,"F");        outtextxy(360,200,"860 c");
	    outtextxy(360,230,"860 c"); outtextxy(360,260,"1.3");
	    outtextxy(360,290,"200 pm");    outtextxy(360,320, "8.84");
	    outtextxy(100,390,"----IF YOU WANT TO SEE THE PROPERTY OF OTHER ELEMENT PRESS 0");
	    outtextxy(100,410,"----IF YOU WANT TO STOP PRESS ANY KEY");
	    cin>>d1;
	    if (d1==0)
	    { delay (20); cleardevice(); outline(); write();
	    }
	    else
	    exit(-1);
       }
	if(d==100)
       {    property();
	    outtextxy(360,110,"FERMIUM");outtextxy(360,140,"100");
	    outtextxy(360,170,"F");        outtextxy(360,200,"1527 c");
	    outtextxy(360,230,"N\\A "); outtextxy(360,260,"1.3");
	    outtextxy(360,290,"200 pm");    outtextxy(360,320, "8.84");
	    outtextxy(100,390,"----IF YOU WANT TO SEE THE PROPERTY OF OTHER ELEMENT PRESS 0");
	    outtextxy(100,410,"----IF YOU WANT TO STOP PRESS ANY KEY");
	    cin>>d1;
	    if (d1==0)
	    { delay (20); cleardevice(); outline(); write();
	    }
	    else
	    exit(-1);
       }
	if(d==101)
       {    property();
	    outtextxy(360,110,"MENDELEVIUM");outtextxy(360,140,"101");
	    outtextxy(360,170,"F");        outtextxy(360,200,"826.8 c");
	    outtextxy(360,230,"828 c"); outtextxy(360,260,"1.3");
	    outtextxy(360,290,"200 pm");    outtextxy(360,320, "N\\A");
	    outtextxy(100,390,"----IF YOU WANT TO SEE THE PROPERTY OF OTHER ELEMENT PRESS 0");
	    outtextxy(100,410,"----IF YOU WANT TO STOP PRESS ANY KEY");
	    cin>>d1;
	    if (d1==0)
	    { delay (20); cleardevice(); outline(); write();
	    }
	    else
	    exit(-1);
       }
	if(d==102)
       {    property();
	    outtextxy(360,110,"NOBELIUM");outtextxy(360,140,"102");
	    outtextxy(360,170,"F");        outtextxy(360,200,"828 c");
	    outtextxy(360,230,"827 c"); outtextxy(360,260,"1.3");
	    outtextxy(360,290,"200 pm");    outtextxy(360,320, "N\\A");
	    outtextxy(100,390,"----IF YOU WANT TO SEE THE PROPERTY OF OTHER ELEMENT PRESS 0");
	    outtextxy(100,410,"----IF YOU WANT TO STOP PRESS ANY KEY");
	    cin>>d1;
	    if (d1==0)
	    { delay (20); cleardevice(); outline(); write();
	    }
	    else
	    exit(-1);
       }
	if(d==103)
       {    property();
	    outtextxy(360,110,"LAWRENCIUM");outtextxy(360,140,"103");
	    outtextxy(360,170,"D");        outtextxy(360,200,"N\\A");
	    outtextxy(360,230,"N\\A "); outtextxy(360,260,"1.3");
	    outtextxy(360,290,"200 pm");    outtextxy(360,320, "N\\A");
	    outtextxy(100,390,"----IF YOU WANT TO SEE THE PROPERTY OF OTHER ELEMENT PRESS 0");
	    outtextxy(100,410,"----IF YOU WANT TO STOP PRESS ANY KEY");
	    cin>>d1;
	    if (d1==0)
	    { delay (20); cleardevice(); outline(); write();
	    }
	    else
	    exit(-1);
       }
	if(d==104)
       {    property();
	    outtextxy(360,110,"RUTHERFORDIUM");outtextxy(360,140,"104");
	    outtextxy(360,170,"D");        outtextxy(360,200,"N\\A");
	    outtextxy(360,230,"N\\A "); outtextxy(360,260,"N\\A");
	    outtextxy(360,290,"N\\A");    outtextxy(360,320, "N\\A");
	    outtextxy(100,390,"----IF YOU WANT TO SEE THE PROPERTY OF OTHER ELEMENT PRESS 0");
	    outtextxy(100,410,"----IF YOU WANT TO STOP PRESS ANY KEY");
	    cin>>d1;
	    if (d1==0)
	    { delay (20); cleardevice(); outline(); write();
	    }
	    else
	    exit(-1);
       }
	if(d==105)
       {    property();
	    outtextxy(360,110,"DUBNIUM");outtextxy(360,140,"105");
	    outtextxy(360,170,"D");        outtextxy(360,200,"N\\A");
	    outtextxy(360,230,"N\\A "); outtextxy(360,260,"N\\A");
	    outtextxy(360,290,"N\\A");    outtextxy(360,320, "N\\A");
	    outtextxy(100,390,"----IF YOU WANT TO SEE THE PROPERTY OF OTHER ELEMENT PRESS 0");
	    outtextxy(100,410,"----IF YOU WANT TO STOP PRESS ANY KEY");
	    cin>>d1;
	    if (d1==0)
	    { delay (20); cleardevice(); outline(); write();
	    }
	    else
	    exit(-1);
       }
	if(d==106)
       {    property();
	    outtextxy(360,110,"SEABORGIUM");outtextxy(360,140,"106");
	    outtextxy(360,170,"D");        outtextxy(360,200,"N\\A");
	    outtextxy(360,230,"N\\A "); outtextxy(360,260,"N\\A");
	    outtextxy(360,290,"N\\A");    outtextxy(360,320, "N\\A");
	    outtextxy(100,390,"----IF YOU WANT TO SEE THE PROPERTY OF OTHER ELEMENT PRESS 0");
	    outtextxy(100,410,"----IF YOU WANT TO STOP PRESS ANY KEY");
	    cin>>d1;
	    if (d1==0)
	    { delay (20); cleardevice(); outline(); write();
	    }
	    else
	    exit(-1);
       }
	if(d==107)
       {    property();
	    outtextxy(360,110,"BOHRIUM");outtextxy(360,140,"107");
	    outtextxy(360,170,"D");        outtextxy(360,200,"N\\A");
	    outtextxy(360,230,"N\\A "); outtextxy(360,260,"N\\A");
	    outtextxy(360,290,"N\\A");    outtextxy(360,320, "N\\A");
	    outtextxy(100,390,"----IF YOU WANT TO SEE THE PROPERTY OF OTHER ELEMENT PRESS 0");
	    outtextxy(100,410,"----IF YOU WANT TO STOP PRESS ANY KEY");
	    cin>>d1;
	    if (d1==0)
	    { delay (20); cleardevice(); outline(); write();
	    }
	    else
	    exit(-1);
       }
	if(d==108)
       {    property();
	    outtextxy(360,110,"HASSIUM");outtextxy(360,140,"108");
	    outtextxy(360,170,"D");        outtextxy(360,200,"N\\A");
	    outtextxy(360,230,"N\\A "); outtextxy(360,260,"N\\A");
	    outtextxy(360,290,"N\\A");    outtextxy(360,320, "N\\A");
	    outtextxy(100,390,"----IF YOU WANT TO SEE THE PROPERTY OF OTHER ELEMENT PRESS 0");
	    outtextxy(100,410,"----IF YOU WANT TO STOP PRESS ANY KEY");
	    cin>>d1;
	    if (d1==0)
	    { delay (20); cleardevice(); outline(); write();
	    }
	    else
	    exit(-1);
       }
	if(d==109)
       {    property();
	    outtextxy(360,110,"MEITNERIUM");outtextxy(360,140,"109");
	    outtextxy(360,170,"D");        outtextxy(360,200,"N\\A");
	    outtextxy(360,230,"N\\A "); outtextxy(360,260,"N\\A");
	    outtextxy(360,290,"N\\A");    outtextxy(360,320, "N\\A");
	    outtextxy(100,390,"----IF YOU WANT TO SEE THE PROPERTY OF OTHER ELEMENT PRESS 0");
	    outtextxy(100,410,"----IF YOU WANT TO STOP PRESS ANY KEY");
	    cin>>d1;
	    if (d1==0)
	    { delay (20); cleardevice(); outline(); write();
	    }
	    else
	    exit(-1);
       }
	if(d==110)
       {    property();
	    outtextxy(360,110,"DARMSTADTIUM");outtextxy(360,140,"110");
	    outtextxy(360,170,"D");        outtextxy(360,200,"N\\A");
	    outtextxy(360,230,"N\\A "); outtextxy(360,260,"N\\A");
	    outtextxy(360,290,"N\\A");    outtextxy(360,320, "N\\A");
	    outtextxy(100,390,"----IF YOU WANT TO SEE THE PROPERTY OF OTHER ELEMENT PRESS 0");
	    outtextxy(100,410,"----IF YOU WANT TO STOP PRESS ANY KEY");
	    cin>>d1;
	    if (d1==0)
	    { delay (20); cleardevice(); outline(); write();
	    }
	    else
	    exit(-1);
       }
	if(d==111)
       {    property();
	    outtextxy(360,110,"ROENTGENIUM");outtextxy(360,140,"111");
	    outtextxy(360,170,"D");        outtextxy(360,200,"N\\A");
	    outtextxy(360,230,"N\\A "); outtextxy(360,260,"N\\A");
	    outtextxy(360,290,"N\\A");    outtextxy(360,320, "N\\A");
	    outtextxy(100,390,"----IF YOU WANT TO SEE THE PROPERTY OF OTHER ELEMENT PRESS 0");
	    outtextxy(100,410,"----IF YOU WANT TO STOP PRESS ANY KEY");
	    cin>>d1;
	    if (d1==0)
	    { delay (20); cleardevice(); outline(); write();
	    }
	    else
	    exit(-1);
       }
	if(d==112)
       {    property();
	    outtextxy(360,110,"COPERNICIUM");outtextxy(360,140,"112");
	    outtextxy(360,170,"D");        outtextxy(360,200,"N\\A");
	    outtextxy(360,230,"N\\A "); outtextxy(360,260,"N\\A");
	    outtextxy(360,290,"N\\A");    outtextxy(360,320, "N\\A");
	    outtextxy(100,390,"----IF YOU WANT TO SEE THE PROPERTY OF OTHER ELEMENT PRESS 0");
	    outtextxy(100,410,"----IF YOU WANT TO STOP PRESS ANY KEY");
	    cin>>d1;
	    if (d1==0)
	    { delay (20); cleardevice(); outline(); write();
	    }
	    else
	    exit(-1);
       }
	if(d==113)
       {    property();
	    outtextxy(360,110,"NIHONIUM");outtextxy(360,140,"113");
	    outtextxy(360,170,"P");        outtextxy(360,200,"N\\A");
	    outtextxy(360,230,"N\\A "); outtextxy(360,260,"N\\A");
	    outtextxy(360,290,"N\\A");    outtextxy(360,320, "N\\A");
	    outtextxy(100,390,"----IF YOU WANT TO SEE THE PROPERTY OF OTHER ELEMENT PRESS 0");
	    outtextxy(100,410,"----IF YOU WANT TO STOP PRESS ANY KEY");
	    cin>>d1;
	    if (d1==0)
	    { delay (20); cleardevice(); outline(); write();
	    }
	    else
	    exit(-1);
       }
	if(d==114)
       {    property();
	    outtextxy(360,110,"FLEROVIUM");outtextxy(360,140,"114");
	    outtextxy(360,170,"P");        outtextxy(360,200,"N\\A");
	    outtextxy(360,230,"N\\A "); outtextxy(360,260,"N\\A");
	    outtextxy(360,290,"N\\A");    outtextxy(360,320, "N\\A");
	    outtextxy(100,390,"----IF YOU WANT TO SEE THE PROPERTY OF OTHER ELEMENT PRESS 0");
	    outtextxy(100,410,"----IF YOU WANT TO STOP PRESS ANY KEY");
	    cin>>d1;
	    if (d1==0)
	    { delay (20); cleardevice(); outline(); write();
	    }
	    else
	    exit(-1);
       }
	if(d==115)
       {    property();
	    outtextxy(360,110,"MOSCOVIUM");outtextxy(360,140,"115");
	    outtextxy(360,170,"P");        outtextxy(360,200,"N\\A");
	    outtextxy(360,230,"N\\A "); outtextxy(360,260,"N\\A");
	    outtextxy(360,290,"N\\A");    outtextxy(360,320, "N\\A");
	    outtextxy(100,390,"----IF YOU WANT TO SEE THE PROPERTY OF OTHER ELEMENT PRESS 0");
	    outtextxy(100,410,"----IF YOU WANT TO STOP PRESS ANY KEY");
	    cin>>d1;
	    if (d1==0)
	    { delay (20); cleardevice(); outline(); write();
	    }
	    else
	    exit(-1);
       }
	if(d==116)
       {    property();
	    outtextxy(360,110,"LIVERMORIUM");outtextxy(360,140,"116");
	    outtextxy(360,170,"P");        outtextxy(360,200,"N\\A");
	    outtextxy(360,230,"N\\A "); outtextxy(360,260,"N\\A");
	    outtextxy(360,290,"N\\A");    outtextxy(360,320, "N\\A");
	    outtextxy(100,390,"----IF YOU WANT TO SEE THE PROPERTY OF OTHER ELEMENT PRESS 0");
	    outtextxy(100,410,"----IF YOU WANT TO STOP PRESS ANY KEY");
	    cin>>d1;
	    if (d1==0)
	    { delay (20); cleardevice(); outline(); write();
	    }
	    else
	    exit(-1);
       }
	if(d==117)
       {    property();
	    outtextxy(360,110,"TENNESSINE");outtextxy(360,140,"117");
	    outtextxy(360,170,"P");        outtextxy(360,200,"N\\A");
	    outtextxy(360,230,"N\\A "); outtextxy(360,260,"N\\A");
	    outtextxy(360,290,"N\\A");    outtextxy(360,320, "N\\A");
	    outtextxy(100,390,"----IF YOU WANT TO SEE THE PROPERTY OF OTHER ELEMENT PRESS 0");
	    outtextxy(100,410,"----IF YOU WANT TO STOP PRESS ANY KEY");
	    cin>>d1;
	    if (d1==0)
	    { delay (20); cleardevice(); outline(); write();
	    }
	    else
	    exit(-1);
       }
	if(d==118)
       {    property();
	    outtextxy(360,110,"OGANESSON");outtextxy(360,140,"118");
	    outtextxy(360,170,"P");        outtextxy(360,200,"N\\A");
	    outtextxy(360,230,"N\\A "); outtextxy(360,260,"N\\A");
	    outtextxy(360,290,"N\\A");    outtextxy(360,320, "N\\A");
	    outtextxy(100,390,"----IF YOU WANT TO SEE THE PROPERTY OF OTHER ELEMENT PRESS 0");
	    outtextxy(100,410,"----IF YOU WANT TO STOP PRESS ANY KEY");
	    cin>>d1;
	    if (d1==0)
	    { delay (20); cleardevice(); outline(); write();
	    }
	    else
	    exit(-1);
       }
}



























