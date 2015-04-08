//
//  main.cpp
//  1
//
//  Created by student on 15-3-2.
//  Copyright (c) 2015年 student sun. All rights reserved.
//

#include <iostream>
#include <math.h>
using namespace std;
class Circle
{
public:
    Circle();
public:
    float getRadius();
    float getCentreX();
    float getCentreY();
    void setCircle(float r, float x,float y);
public:
    float distance(Circle c1);
private:
    float _radius;
    float _xCentre;
    float _yCentre;
    
};
Circle::Circle()
{
    _radius=0.0;
    _xCentre=0.0;
    _yCentre=0.0;
    
}
float Circle::getRadius()
{
    return _radius;
}
float Circle::getCentreX()
{
    return _xCentre;
}
float Circle::getCentreY()
{
    return _yCentre;
}
void Circle::setCircle(float r, float x, float y)
{
    _radius=r;
    _xCentre=x;
    _yCentre=y;
    
}
float Circle::distance(Circle c1)
{
    return (sqrt((_xCentre - c1._xCentre)*(_xCentre - c1._xCentre)+(c1._xCentre - _yCentre)*(c1._yCentre - _yCentre)));
}

int main(int argc, const char * argv[])
{

    Circle c[3];
    c[1].setCircle(1.0, 0.0, 0.0);
    c[2].setCircle(1.0, 1.0, 1.0);
    c[3].setCircle(1.0, 0.0, 27.0);
    cout<<"the distance between the centres is "<<c[1].distance(c[2])<<endl;
    cout<<"the distance between the centres is "<<c[1].distance(c[0])<<endl;
    cout<<"\nThe end\n";
     
    return 0;
}

