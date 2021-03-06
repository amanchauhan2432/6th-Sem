#include<iostream>
#include<graphics.h>  
#include<math.h>  
using namespace std;

int main()  
{
    double s,c, angle;
    int gd = DETECT,gm,x1,y1,x2,y2,x3,y3;
    initgraph(&gd, &gm,NULL);
    
    cout << "Enter Coordinates of Triangle: ";
    cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;
    line(x1,y1,x2,y2);
    line(x2,y2, x3,y3);
    line(x3, y3, x1, y1);
    
    cout << "Enter Rotation Angle: ";
    cin >> angle;
    
    c = cos(angle *M_PI/180);
    s = sin(angle *M_PI/180);
    x1 = floor(x1 * c + y1 * s);
    y1 = floor(-x1 * s + y1 * c);
    x2 = floor(x2 * c + y2 * s);
    y2 = floor(-x2 * s + y2 * c);
    x3 = floor(x3 * c + y3 * s);
    y3 = floor(-x3 * s + y3 * c);
    line(x1, y1 ,x2, y2);
    line(x2,y2, x3,y3);
    line(x3, y3, x1, y1);

    delay(100000);
    closegraph(); 
    return 0;
}
