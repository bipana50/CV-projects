
#include<dos.h>
  #include<graphics.h>
  #include<stdio.h>
  #include<conio.h>
  union REGS in,out;

  int callmouse()
  { int gdriver= DETECT, gmode, errorcode;
  initgraph(&gdriver, &gmode,"c:\\turboc3\\bgi");
  in.x.ax=1;
  int86 (51,&in,&out);
  return 1;
  }

  void mouseposi(int *xpos,int *ypos,int *click)
  {
   in.x.ax=3;
  int86(51,&in,&out);
  *click=out.x.bx;
  *xpos=out.x.cx;
  *ypos=out.x.dx;
  }

  void circlecolor1(int j)
  {
  setcolor(RED);
  setfillstyle(SOLID_FILL,RED);
  fillellipse(550, 345-j, 50, 40);
   delay(0.000001);
 }

   void circlecolor2(int j)
  {
  setcolor(RED);
  setfillstyle(SOLID_FILL,RED);
  fillellipse(550, 50+j, 50, 40);
   delay(0.000001);
 }



  void circle1(int n)
  { int i,j,x,y,cl;
  int h,k,cl1,l,m,cl2;
  int c=0;
  int b=0;
  int a[15];



 for(j=0;j<=295;)
 {  cleardevice();
	setbkcolor(DARKGRAY);
 if(c==0)
{ switch(n)
{ case 1:
  setlinestyle(0,0,3);
  setcolor(GREEN);
  line(200,330,200,360);
  line(185,345,215,345);
  line(185,330,215,360);
  line(215,330,185,360);
  break;

   case 2:
   if(a[0]!=0)
   {
	setlinestyle(0,0,3);
   setcolor(GREEN);
  line(200,330,200,360);
  line(185,345,215,345);
  line(185,330,215,360);
  line(215,330,185,360);  }
  if(a[1]!=1)
  {
   setlinestyle(0,0,3);
	setcolor(GREEN);
  line(200+50,260,200+50,290);
  line(185+50,275,215+50,275);
  line(185+50,260,215+50,290);
  line(215+50,260,185+50,290); }
  break;
	 }
	}
	circlecolor1(j);

	 while(c==0)
	  {
   mouseposi(&h,&k,&cl1);
  gotoxy(10,9);

if(n==1)
{
 if(cl1==1)
 {  if(((h>=185)&&(h<=215))&&((k>=330)&&(k<=360)))
	 {setcolor(BLACK);
	  circle(200,345,15);
	  b++;
	   }

	   else
	{  break; }
				}
	 else
	{  break; }
		}

 if(n==2)
{
 if(cl1==1)
 {
   if(((h>=185)&&(h<=215))&&((k>=330)&&(k<=360)))
	 {setcolor(BLACK);
	  circle(200,345,15);
	  b++;
	  a[0]=0;
	  delay(50);
	  break;

		   }

	 else if(((h>=235)&&(h<=265))&&((k>=260)&&(k<=290)))
	 {setcolor(BLACK);
	  circle(250,230,15);
		b++;

		a[1]=1;
		delay(50);
		break;

		  }

	   else
	{  break; }
				}
	 else
	{  break; }
		}
		if(n==b)
		{c=1;}
		   }
			if(n==b)
		{c=1;}

	   while(c==1)
		{
	mouseposi(&l,&m,&cl2);
	gotoxy(10,9);

 if(cl2==1)
 {  if(((l>=500)&&(l<=600))&&((m>=0)&&(m<=295)))
	 { cleardevice();
			 setcolor(RED);
  setfillstyle(SOLID_FILL,RED);
  fillellipse(550, 345, 50, 40);
			c=2;	 }

	   else
	{  break; }
					}
		else
	{  break; }

		 }
	   if(c==2)
	  {  printf("you have completed level 1");
		break;     }
		delay(1);
		j=j+5;
			}
  if(c!=2)
{
   for(j=0;j<=295;)
 {
  cleardevice();
  setbkcolor(DARKGRAY);
   if(c==0)
{ switch(n)
{ case 1:
  setlinestyle(0,0,3);
  setcolor(GREEN);
  line(200,330,200,360);
  line(185,345,215,345);
  line(185,330,215,360);
  line(215,330,185,360);
  break;

   case 2:
   if(a[0]!=0)
   {
	setlinestyle(0,0,3);
   setcolor(GREEN);
  line(200,330,200,360);
  line(185,345,215,345);
  line(185,330,215,360);
  line(215,330,185,360);  }
  if(a[1]!=1)
  {
   setlinestyle(0,0,3);
	setcolor(GREEN);
  line(200+50,260,200+50,290);
  line(185+50,275,215+50,275);
  line(185+50,260,215+50,290);
  line(215+50,260,185+50,290); }
  break;
	 }
	}

	circlecolor2(j);

	 while(c==0)
	  {
   mouseposi(&h,&k,&cl1);
  gotoxy(10,9);

if(n==1)
{
 if(cl1==1)
 {  if(((h>=185)&&(h<=215))&&((k>=330)&&(k<=360)))
	 {setcolor(BLACK);
	  circle(200,345,15);
	  b++;
	   }

	   else
	{  break; }
				}
	 else
	{  break; }
		}

 if(n==2)
{
 if(cl1==1)
 {
   if(((h>=185)&&(h<=215))&&((k>=330)&&(k<=360)))
	 {setcolor(BLACK);
	  circle(200,345,15);
	  b++;
	  a[0]=0;
	  delay(50);
	  break;

		   }

	 else if(((h>=235)&&(h<=265))&&((k>=260)&&(k<=290)))
	 {setcolor(BLACK);
	  circle(250,230,15);
		b++;

		a[1]=1;
		delay(50);
		break;

		  }

	   else
	{  break; }
				}
	 else
	{  break; }
		}
		if(n==b)
		{c=1;}
		   }
			if(n==b)
		{c=1;}


	   while(c==1)
		{
	mouseposi(&l,&m,&cl2);
	gotoxy(10,9);

 if(cl2==1)
 {  if(((l>=500)&&(l<=600))&&((m>=0)&&(m<=295)))
	 { cleardevice();

			 setcolor(RED);
  setfillstyle(SOLID_FILL,RED);
  fillellipse(550, 345, 50, 40);
			c=2;	 }

	   else
	{  break; }
					}
		else
	{  break; }

		 }
		 if(c==2)
	   {setcolor(YELLOW);
		settextstyle(TRIPLEX_FONT,HORIZ_DIR,2);
	   printf("you have completed level: %d :-)",n);
		break;     }
		delay(1);
		j=j+5;
		}
		if(j>295)
		{ cleardevice();
		setcolor(YELLOW);
		settextstyle(TRIPLEX_FONT,HORIZ_DIR,2);
		 outtextxy(70,70,"sorry, u lost :-(,\n please enter any key to exit");
		 while(1)
		 { if(kbhit())
		   exit(0); }

		 }



 }  }


  int main()
  {
  int i,x,y,cl,k;
  int n=1;
   int gdriver= DETECT, gmode, errorcode;
  initgraph(&gdriver, &gmode,"c:\\turboc3\\bgi");
  setbkcolor(DARKGRAY);
  setcolor(RED);
  settextstyle(BOLD_FONT,HORIZ_DIR,2);
  outtextxy(100,50," JACK AND BALL ");
  setcolor(BLUE);
  outtextxy(50,150," press any key to continue ");
  getch();
  cleardevice();
  setbkcolor(DARKGRAY);
  for(k=0;k<=350;)
  {setcolor(BROWN);
   outtextxy(100+k, 150, "*" );
	delay(50);
	k=k+5; }
	setcolor(BLUE);
	settextstyle(TRIPLEX_FONT,HORIZ_DIR,1);
	outtextxy(110,150+50,"INSTRUCTIONS");


	outtextxy(110,150+70,"1. First, click the ball");
	outtextxy(110,150+90,"2. Click the jack while the ball is in air");
	outtextxy(110,150+110,"3. Last, Click the ball before it comes to ground");
	outtextxy(110,150+150,"(press any key to continue)");

  getch();
  clrscr();

  callmouse();
  cleardevice();
  do { setbkcolor(DARKGRAY);
   mouseposi(&x,&y,&cl);
  gotoxy(10,9);
  printf("\nmouse position is:%d %d",x,y);
  printf("\nClick:%d",cl);
  setcolor(YELLOW);
  settextstyle(TRIPLEX_FONT,HORIZ_DIR,1);
  outtextxy(50,100,"Note: press any key to exit after a level");
  switch(n)
  {case 1:
  setlinestyle(0,0,3);
  setcolor(GREEN);
  line(200,330,200,360);
  line(185,345,215,345);
  line(185,330,215,360);
  line(215,330,185,360);
  break;
  case 2: setlinestyle(0,0,3);
   setcolor(GREEN);
  line(200,330,200,360);
  line(185,345,215,345);
  line(185,330,215,360);
  line(215,330,185,360);

   setlinestyle(0,0,3);
	setcolor(GREEN);
  line(200+50,260,200+50,290);
  line(185+50,275,215+50,275);
  line(185+50,260,215+50,290);
  line(215+50,260,185+50,290);
  break;
		  }

 setcolor(RED);
 setfillstyle(SOLID_FILL,RED);
 fillellipse(550, 345, 50, 40);


 if(cl==1)
 {  if(((x>=500)&&(x<=600))&&((y>=295)&&(y<=395)))
	 {
	  circle1(n);
	  n++;
	  if(n==3)
	  { getch();
	   exit(0); }
	  }
	 }

  }while(!kbhit());


  printf("press any key to exit");
  getch();
  return 0;
  }
