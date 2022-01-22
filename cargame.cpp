#include <iostream>
#include <conio.h>
#include <graphics.h>
#include<mmsystem.h>
#include <dos.h>
#include <stdlib.h>
#include <windows.h>
int welcome_screen()
{

    int x, y,i;
    x = getmaxx()/2;//give max size in x direction
    y = getmaxy()/2;//give max size in y direction
    PlaySound(TEXT("GTA.wav"),NULL,SND_ASYNC);

    settextstyle(4, HORIZ_DIR, 4);//set font,text direction,size
    outtextxy(x-200, y-150, "NFS-LOCKDOWN!!");

    //car graph
    setcolor(YELLOW);
    line(x-69, y-3, x+69, y-3);delay(500);//base
    arc(x-105, y, 0, 180, 35);delay(500);//mudguard
    circle(x-105, y, 25);delay(500);
    arc(x+105, y, 0, 180, 35);delay(500);//mudguard
    circle(x+105, y, 25);delay(500);
    line(x+140, y, x+190, y);delay(500);
    line(x+140, y-3, x+190, y-3);delay(500);
    ellipse(x+105, y, 0, 90, 85, 50);delay(500);//frontbonut
    ellipse(x-105, y, 90, 180, 85, 50);delay(500);//back
    line(x-190, y, x-140, y);delay(500);
    ellipse(x, y-50, 0, 180, 105, 35);delay(500);//top
    ellipse(x, y-50, 349, 192, 95, 30);delay(500);//window
    line(x-92, y-44, x+92, y-44);delay(500);
    line(x-92, y-41, x+92, y-41);delay(500);


}
void enemycar(int x, int y,int i)
{
   setcolor(0);
  rectangle(x+1 , y, x + 49, y + 90);//back
  rectangle(x + 9, y + 90, x + 41, y + 100);//front
  rectangle(x+6,y+92,x+10,y+98);//tyres
  rectangle(x+40,y+92,x+44,y+98);//tyres
  setfillstyle(1,0);
  floodfill(x+42,y+95,0);//tyre
  floodfill(x+8,y+95,0);//tyre
  setfillstyle(SOLID_FILL, RED);
  floodfill((x + x + 50) / 2, (y + y + 190) / 2, 0);
  setfillstyle(1, i);
  floodfill((x + x + 50) / 2, (y + y + 90) / 2, 0);
}

void mycar(int x, int y)
{
  setcolor(0);
  rectangle(x + 1, y+12, x + 49, y + 90);//main
  rectangle(x + 5, y + 20, x + 45, y + 85);//upper
  rectangle(x+6,y,x+44,y+13);//front
  rectangle(x+2,y+2,x+6,y+10);//tyres
  rectangle(x+45,y+2,x+49,y+10);//tyres
  setfillstyle(1,0);
  floodfill(x+4,y+5,0);
  floodfill(x+47,y+6,0);
  setfillstyle(1, RED);
  floodfill((x+5 + x + 45) / 2, (y +20+ y + 85) / 2, 0);
  setfillstyle(1, CYAN);
  floodfill((x +6+ x + 44) / 2, (y + y + 13) / 2, 0);
  setfillstyle(1, BROWN);
  floodfill((x +1+ x + 49) / 2, (y + y + 13) / 2+9, 0);
}

void myclear(int x, int y)
{
  setcolor(8);
  rectangle(x + 1, y, x + 49, y + 100);
  rectangle(x + 1, y + 25, x + 49, y + 75);
  setfillstyle(SOLID_FILL, 8);
  floodfill((x + x + 50) / 2, (y + y + 100) / 2, 8);
  floodfill((x + x + 50) / 2, (y + y + 40) / 2, 8);
  floodfill((x + x + 50) / 2, (y + y + 160) / 2, 8);
}

void enemyclear(int x, int y)
{
   setcolor(8);
  rectangle(x+1 , y, x + 49, y + 90);//back
  rectangle(x + 9, y + 90, x + 41, y + 100);//front
  rectangle(x+6,y+92,x+10,y+98);//tyres
  rectangle(x+40,y+92,x+44,y+98);//tyres
  rectangle(x + 5, y + 91, x + 41, y + 92);
   rectangle(x+1 , y, x + 49, y-1);



}
int gameover(int score)
{
    cleardevice();//clear screen

  setcolor(WHITE);
   int x, y, i;
    x = getmaxx()/2;
    y = getmaxy()/2;
    settextstyle(4, HORIZ_DIR, 5);//fontstyle,direction,size
  outtextxy(x/2-30,y/2+90,"GAME OVER");
  settextstyle(4, HORIZ_DIR, 4);//fontstyle,direction,size
  outtextxy(x/2,y/2+140,"Your Score:");
  char sc[1];
  sprintf(sc, "%d", score );
  outtextxy(x/2+260,y/2+140,sc);
  PlaySound(TEXT("car_crash.wav"), NULL,SND_SYNC);
  PlaySound(TEXT("Directed By Robert B Weide Sound Effect.wav"), NULL,SND_SYNC);
  getch();
}
void roadsides()
{
     setfillstyle(1,15);//solidfill,white
  rectangle(199,0,249,getmaxy());//left stripes
  rectangle(199,0,249,50);
  floodfill(230,30,15);//x ,y,boundary color
  rectangle(199,100,249,150);
  floodfill(230,130,15);
  rectangle(199,200,249,250);
  floodfill(230,230,15);
  rectangle(199,300,249,350);
  floodfill(230,330,15);
  rectangle(199,400,249,450);
  floodfill(230,430,15);
  rectangle(199,500,249,550);
  floodfill(230,530,15);
  rectangle(401,0,451,getmaxy());//right stripes
  rectangle(401,0,451,50);
  floodfill(430,30,15);
  rectangle(401,100,451,150);
  floodfill(430,130,15);
  rectangle(401,200,451,250);
  floodfill(430,230,15);
  rectangle(401,300,451,350);
  floodfill(430,330,15);
  rectangle(401,400,451,450);
  floodfill(430,430,15);
  rectangle(401,500,451,550);
  floodfill(430,530,15);
}
void control_instructions()
{
    setcolor(15);
  settextstyle(0,HORIZ_DIR,2);//fontstyle,direction,size
  outtextxy(0,50,"Use arrow keys");
  outtextxy(0,70,"to control car");
  outtextxy(0,90,"Esc- Exit Game");
  setcolor(4);//red color
  settextstyle(0,HORIZ_DIR,2);
  outtextxy(0,150,"MUSIC COMMANDS");
  setcolor(15);//white
  outtextxy(0,170,"p-Play music");
  outtextxy(0,190,"n-Next song");
  outtextxy(0,210,"e-Stop music");

}

int main()
{
  int gdriver = DETECT, gmode;
  initgraph(&gdriver, &gmode, "C:\\Turboc3\\BGI");

  welcome_screen();
  cleardevice();

  int x = 300, y = 350, score = 0, ch;
  int n=0;
  settextstyle(4, HORIZ_DIR, 4);
  setcolor(WHITE);
  rectangle(249, 0, 401, getmaxy());//
  setfillstyle(SOLID_FILL, 8);
  floodfill(325, getmaxy() / 2, WHITE);
  roadsides();
  control_instructions();

  PlaySound(TEXT("driving.wav"),NULL,SND_ASYNC);

  for (;;)
  {

    for (int i = 0; (i < 15); i++)
    {

      int accident = 0;
      int y1 = 1, x1 = 250 + ((rand() % 3) * 50);
      int y2 = 1, x2 = 250 + ((rand() % 3) * 50);
      score += 1;
      setcolor(WHITE);
      settextstyle(4,HORIZ_DIR,3);
      outtextxy(495, 70, "Score");
      char sc[1];
      sprintf(sc, "%d", score);
      outtextxy(500, 100, sc);


      while (y1 < getmaxy() - 1)
      { if(i==0||i==15||i==8){
      i=i+1;}

        enemycar(x1, y1,i);
        enemycar(x2, y2,i);
        enemyclear(x1, y1);
        enemyclear(x2, y2);
        y1++;
        y2++;
        //stripes
        setcolor(15);
        rectangle(320,y1+104,327,y1+130);
        rectangle(320,y1+280,327,y1+320);

        setcolor(8);
        rectangle(320,y1,327,y1+3);
        rectangle(320,y1+279,327,y1+280);


        if (accident == 1)
        {
          break;
        }
        mycar(x, y);
        if (kbhit())
        {
          ch = getch();
           if(ch==110){
            if(n>2){
                n=0;
            }
            ch=ch+n;
            n++;
           }
          mycar(x, y);


          switch (ch)
          {

         //Music commands
          case 112://p
              PlaySound(TEXT("eshay1.wav"),NULL,SND_ASYNC);
              break;
          case 110:
            PlaySound(TEXT("fly_me_to_the_moon.wav"), NULL,SND_ASYNC);
            break;
          case 111:
            PlaySound(TEXT("Hymn For The Weekend [Remix].wav"), NULL,SND_ASYNC);
            break;
          case 101:
          PlaySound(TEXT("driving.wav"), NULL,SND_ASYNC);
             break;

            //Music commands ends

            //control commands start
          case 27: //exit on pressing esc
            exit(0);
            break;
          case 75://left arrow
            if (x > 250)//restriction
            {
            myclear(x, y);
              x = x - 50;
             mycar(x, y);
            }
            if ((x == x1) || (x == x2))//check accident
              if ((((y - y1) < 100) && ((y - y1) > 0)) || (((y - y2) < 100) && ((y - y2) > 0)))
              {
                accident = 1; //defining accident
              }

            break;
          case 77://right arrow
            mycar(x, y);
            myclear(x, y);
            if (x < 350)
              x = x + 50;
            //inhibit car from moving after hit
            if ((x == x1) || (x == x2))
              if ((((y - y1) < 100) && ((y - y1) > 0)) || (((y - y2) < 100) && ((y - y2) > 0)))
              {
                accident = 1; //defining accident

              }
            if (accident == 1)//gameover
            {  gameover(score);
               exit(0);
            }

            break;
          case 72://up arrow
            mycar(x, y);
            myclear(x, y);
            if (y > 0)
              y = y - 5;
            break;
         case 80://down arrow
            myclear(x, y);
            if (y < getmaxy() - 105) //keep car in border
              y = y + 5;
            mycar(x, y);
            break;
          }
        }
        //car hit from front
        if ((x == x1) || (x == x2))
          if ((((y - y1) < 100) && ((y - y1) > 0)) || (((y - y2) < 100) && ((y - y2) > 0)))
            accident = 1; //defining accident
             if (accident == 1)
            {  gameover(score);
               exit(0);
            }
      }
    }
  }

  getchar();
}
