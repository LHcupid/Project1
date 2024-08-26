#include <stdio.h>
#include <graphics.h>

int main()
{
	initgraph(640,480,SHOWCONSOLE);
	setbkcolor(WHITE);
	cleardevice();
	setlinestyle(PS_SOLID, 5);
	setfillcolor(YELLOW);
	setlinecolor(BLUE);
	circle(110,110, 50);
	fillcircle(50, 210, 50);
	solidcircle(50, 310, 50);
	getchar();
	closegraph();
	

	return 0;
}