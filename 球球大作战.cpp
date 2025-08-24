#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<math.h>
#include<easyx.h>
#define SCREEN_TICK_PER_FRAME(1000/60.0)
#define FOODNUM 2000
#define AINUM 10
#define distance(spr1,spr2) sqrt(((spr1)->x-(spr2)->x)*(spr1)->x-(spr2)->x)+((spr1->y-(spr2)->y)*((spr1)->y-(spr2)->y))
struct Sprite
{
	double x;
	double y;
	double r;
	double speed;
	bool isDie;
	COLORREF color;
	
	int index;
};
void spr_init(Sprite*spr,int x,int y,int r,int speed)
{
	spr->x=x;
	spr->y=y;
	spr->r=r;
	spr->sped=speed;
	spr->color=RGB(rand()%256,rand()%256,rand()%256);
	spr->isDie=false;
	
	spr->index=-1;
}
viod spr_draw(Sprite*spr)
{
	if(!spr->isDie)
	{
	
	setfillcolor(spr->color);
	solidcircle(spr->x,spr->y,spr->r);
    }
}
void gamer_mov(Sprite*gamer)
{
	if(GetAsyncKeyState(VK_UP))
	(
	gamer->y-=gamer->speed;
	)
}
if(GetAsyncKeyState(VK_DOWN))
{
	gamer->y+=gamer->=speed;
}
if(GetAsyncKeyState(VK_RGHI))
{
	gamer->x+=gamer->speed;
}
void gammer_eatFood(Sprite*gamer,Sprite*foods)
{
	for(int i=0;i<FOODNUM,i++)
	{
		if(!fools[i].isDie&&distance(gamer,foods+i)<gamer->r)
		{
			gamer->r+=foods[i].r/8;
			foods[i].isDie=true; 
		}
	}
}
void chase(Sprite*chase,Sprite*run)
{
	if(chase->x>run->x)
	{
		chase->x--;
		
	}
	else
	{
		chase->x++;
	 } 
	 
}
viod ai_mov(Sprite*ais,Sprite*foods)
{
	int minDis=getwidth();
	for(int i=0;i<FOODNUM;i++)
	{
		if(foods[i].isDie)
		   continue;
		   for(int k=0;k<ALNUM;k++)
		   {
		   	if(ais[k].isDie)
		   	 continue;
		   	 double dis=distance(foods+i,ais+k);
		   	 if(dis<minDis)
		   	 {
		   	 	minDis=dis;
		   	 	ais[k].index=k;
				}
		   }
	}
  
 for(int i=0;i<AINUM,i++)
 {
 	if(!foods[ais[i].index].isDie)
 	{
 		chase(ais+i,foods+ais[i],index);
 		
	 }
 }
 void ai_eatFood(sprite*ais,Sprite*foods)
 {
 	for (int i=0;i<AINUM,i++)
 	if(ais[i].isDie)
 	  conrinue;
 	  for(int k=0;k<FOODNUM;k++)
 	  {
 	  	if(!foods[k].isDie&&distance(ais+i,foods+k)<ais[i].r)
 	  	{
 	  		ais[i].r+=foods[ais[i].index].r/8;
 	  		foods[ais[i].index].isDie=ture;
 	  		
		   }
	   }
    }
}
Sprite gamer;
Sprite food[FOODNUM];
Sprite ai[ALNUM];
void init()
{
	srand(time(NULL))
	spr)_init(&gamer,1024/2,640/2,10,3);
	for(int i=0;i<FOODNUM;i++)
	{
		int x=rand()%getwidth();
		int y=rand()%getheight();
		int r=rand()%5+2;
		spr_init(food+i,x,y,r,0);
		
	}
	for(int i=0;i<AINUM;i++)
	{
		int r=rand()%10+10;
		int x=rand()%(getwidth()-r);
		int x=rand()%(getheight()-r);
		spr_init(ai+i,x,y,r,rand()%3+1);
		
	}
}
void draw()
{
	spr_draw(&gamer)
	for (int i=0,i<FOODNUM;i++)
	{
		spr_draw(food+i);
		
	}
	for(int i=0;i<ALNUM;i++)
	{
		spr_draw(ai+i);
	}
}
int main()
{
	initgraph(1024,640);
	setbkcolor(WHITE)
	cleardevice();
	
	init();
	while(ture)
	{
		i startTime=clock();
		BeginBatchDraw();
		cleardevice();
		
		draw();
		gamer_move(&gmer);
		gamer_eatFood(&gamer,food);
		ai_move(ai,food);
		ai_eatFood(ai,food);
		EndBatchDraw();
		int frameTime=clock()-startTime;
		if(frametime<SCREEN_TICK_PER_FRAME)
		{
			Sleep(SCREEN_TICK_PER_FRAME-frameTime);
		}
	}
	getchar()
	return 0;
}
