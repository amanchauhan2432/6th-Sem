#include<iostream>
#include<graphics.h>
using namespace std;

void drawline(int x1, int y1, int x2, int y2)
{
    int dx, dy, p, x, y;
    dx=x2-x1;
    dy=y2-y1;
    x=x1;
    y=y1;
    p=2*dy-dx;
    while(x<x2)
    {
	if(p>=0)
   	{
	    putpixel(x,y,7);
	    y=y+1;
	    p=p+2*dy-2*dx;
	}
	else
	{
	    putpixel(x,y,7);
	    p=p+2*dy;
	}
	x=x+1;
    }
}

int main()
{
    int gd = DETECT, gm, error, x1, y1, x2, y2;
    initgraph(&gd, &gm,NULL);
    
    cout<<"Enter The Value Of x1 And y1 : ";
    cin>>x1>>y1;
    cout<<"Enter The Value Of x2 And y2: ";
    cin>>x2>>y2;
    
    drawline(x1, y1, x2, y2);
    delay(1000000000);	
    closegraph();
    return 0;
}
