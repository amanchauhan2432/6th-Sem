#include<iostream>
#include<graphics.h>
using namespace std;

void drawcircle(int x1, int y1, int radius)
{
    int x = radius;
    int y = 0;
    int err = 0;
    while (x >= y)
    {
	putpixel(x1 + x, y1 + y, 7);
	putpixel(x1 + y, y1 + x, 7);
	putpixel(x1 - y, y1 + x, 7);
	putpixel(x1 - x, y1 + y, 7);
	putpixel(x1 - x, y1 - y, 7);
	putpixel(x1 - y, y1 - x, 7);
	putpixel(x1 + y, y1 - x, 7);
	putpixel(x1 + x, y1 - y, 7);
	if (err <= 0)
	{
	    y += 1;
	    err += 2*y + 1;
	}
	if (err > 0)
	{
	    x -= 1;
	    err -= 2*x + 1;
	}
    }
}

int main()
{
    int gd = DETECT, gm, x, y, r;
    initgraph(&gd, &gm, NULL);
    
    cout<<"Enter Radius Of Circle: ";
    cin>>r;
    cout<<"Enter Co-ordinates Of Center: ";
    cin>>x>>y;
    drawcircle(x, y, r);
    
    delay(10000000);
    return 0;
}
