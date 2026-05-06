#include <bits/stdc++.h>
using namespace std;

class Point
{
    private:
        int x;
        int y;
    public:
    Point()
    {
        x=0;
        y=1;
    }
    Point(int x, int y)
    {
        this->x=x;
        this->y=y;
    }
    void read()
    {
        cin>>x>>y;
    }
    void print()
    {
        cout<<"("<<this->x<<", "<<this->y<<")";
    }
    void move(int dx, int dy)
    {
        this->x=x+dx;
        this->y=y+dy;
    }
    double distance()
    {
        int a = this->x;
        int b= this->y;
        float d=sqrt(a*a  + b*b);
        return d;
    }
    double distance(Point P)
    {
        float d=sqrt(pow(this->x - P.getX(),2)  + pow(this->y-P.getY(),2));
        return d;
    }
    int getX() { return x;}
    int getY() { return y;}
    void setXY(int x, int y)
    {
        this->x=x;
        this->y=y;
    }
};

class ColorPoint: public Point
{
    private:
    string color;
    public:
    ColorPoint():Point()
    {
        this->color = "xanh";
    }
    ColorPoint(int x, int y, string color): Point(x, y)
    {
        this->color = color;
    }
    ColorPoint(int &x,int &y, ColorPoint &CP): Point(x,y)
    {
        this->color = color;
    }
    void read()
    {
        Point::read();
        cin.ignore();
        getline(cin,color);
    }
    void print()
    {
        Point::print();
        cout<<": "<<color<<endl;
    }
    void move(int dx, int dy)
    {
        Point::move(dx,dy);
    }
};