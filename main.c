#include <windows.h>

/* This is where all the input to the window goes to */
LRESULT CALLBACK WndProc(HWND hwnd, UINT Message, WPARAM wParam, LPARAM lParam) {
	switch(Message) {
		
		/* Upon destruction, tell the main thread to stop */
		case WM_DESTROY: {
			PostQuitMessage(0);
			break;
		}
		
		/* All other messages (a lot of them) are processed using default procedures */
		default:
			return DefWindowProc(hwnd, Message, wParam, lParam);
	}
	return 0;
}

/* The 'main' function of Win32 GUI programs: this is where execution starts */
int WINAPI WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, LPSTR lpCmdLine, int nCmdShow) {
	WNDCLASSEX wc; /* A properties struct of our window */
	HWND hwnd; /* A 'HANDLE', hence the H, or a pointer to our window */
	MSG msg; /* A temporary location for all messages */

	/* zero out the struct and set the stuff we want to modify */
	memset(&wc,0,sizeof(wc));
	wc.cbSize		 = sizeof(WNDCLASSEX);
	wc.lpfnWndProc	 = WndProc; /* This is where we will send messages to */
	wc.hInstance	 = hInstance;
	wc.hCursor		 = LoadCursor(NULL, IDC_ARROW);
	
	/* White, COLOR_WINDOW is just a #define for a system color, try Ctrl+Clicking it */
	wc.hbrBackground = (HBRUSH)(COLOR_WINDOW+1);
	wc.lpszClassName = "WindowClass";
	wc.hIcon		 = LoadIcon(NULL, IDI_APPLICATION); /* Load a standard icon */
	wc.hIconSm		 = LoadIcon(NULL, IDI_APPLICATION); /* use the name "A" to use the project icon */

	if(!RegisterClassEx(&wc)) {
		MessageBox(NULL, "Window Registration Failed!","Error!",MB_ICONEXCLAMATION|MB_OK);
		return 0;
	}

	hwnd = CreateWindowEx(WS_EX_CLIENTEDGE,"WindowClass","Caption",WS_VISIBLE|WS_OVERLAPPEDWINDOW,
		CW_USEDEFAULT, /* x */
		CW_USEDEFAULT, /* y */
		640, /* width */
		480, /* height */
		NULL,NULL,hInstance,NULL);

	if(hwnd == NULL) {
		MessageBox(NULL, "Window Creation Failed!","Error!",MB_ICONEXCLAMATION|MB_OK);
		return 0;
	}

	/*
		This is the heart of our program where all input is processed and 
		sent to WndProc. Note that GetMessage blocks code flow until it receives something, so
		this loop will not produce unreasonably high CPU usage
	*/
	while(GetMessage(&msg, NULL, 0, 0) > 0) { /* If no error is received... */
		TranslateMessage(&msg); /* Translate key codes to chars if present */
		DispatchMessage(&msg); /* Send it to WndProc */
	}
	return msg.wParam;
}
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
