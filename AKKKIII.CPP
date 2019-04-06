#include<conio.h>
#include<stdio.h>
#include<stdlib.h>
#include<graphics.h>
int gd=DETECT;
int gm;
void move()
{     //c should be of char type. The character can be then typecasted and checked.
	char c;

   while(1)
   { c=getch();
	    if(kbhit)
	    {
	   if(c==81) //redundant check for same character
	    }


   }

}
void ball(int x,int y)         //for making the ball appear
{ int c;
 setcolor(RED) ;
 setfillstyle(SOLID_FILL,9);  //defines the style of colouring
   circle(x,y,50);            //ball drawing
   floodfill(x,y,RED);    //defines the border colour
}
void obstacles(int left,int top,int bottom)
{
int rnd;
       rnd=rand();
	 //to generate random spaces in between bars
    //  while(1)
      //	{
		if(rnd<350 && rnd>10)
		{
		  setcolor(GREEN);             //defines the border colour
		  setfillstyle(SOLID_FILL,GREEN);  //defines the style of colour
		rectangle(left,top,left+20,top+rnd); //for coordinates of bars
		rectangle(left,top+rnd+110,left+20,bottom) ;
		   floodfill(left+1,top+1,GREEN);
		   floodfill(left+1,top+rnd+111,GREEN);
		}
      // }
}
void main()
{
 //total resolution--> 639*479
int Xi=70,Yi=100; //for ball initial position
int RXi,RYi; //for rectangle (obstacle) initial position;
int c;
int b,d;       //ball movement
clrscr();
initgraph(&gd,&gm,"C:\\TURBOC3\\BGI");
cout<<"MOVE THE BALL THROUGH THE GAPS BETWEEN THE BARS \n";
cout<<"USE STANDARD ARROW KEYS TO MAKE THE BALL MOVE...........\n";
cout<<"PRESS Y or y TO START THE GANME";
//DO SOMETHING FOR CLEARING THE SCREEN ON CLICKING ENTER FOR START...
c=getch();
		 //game starts
while(1)
{
	if(c==121||c==25)
	   {
		ball(Xi,Yi);
		obstacles(619,0,479);
		while(1)
		{
		 d=getch();
		 if(d==72)//upwards
		 { //Multithreading function to move the ball simultaneously
		 }

		 if(d==80)//downwards
		 {
			 //Multithreading function to move the ball simultaneously
		}
	   }
	else
	{
	//Don't interrupt the main screen.
	}
}
getch();
}
