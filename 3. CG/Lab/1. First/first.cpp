#include<graphics.h>
int main()
{
    int i;
    int gd = DETECT,gm,color;
    initgraph(&gd,&gm, NULL);
    for(i=0;i<100;i++)
    {
        putpixel(50+i,60, WHITE);
        putpixel(50,60+i, WHITE);
        putpixel(150,60+i, WHITE);
        putpixel(50+i,160, WHITE);
    }
    
    delay(1000000);
    closegraph();
    return 0;
}
