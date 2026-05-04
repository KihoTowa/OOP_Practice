
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
    Point move(int dx, int dy)
    {
        this->x=x+dx;
        this->y=y+dy;
        return *this;
    }
    double distance()
    {
        int a = this->x;
        int b= this->y;
        float d=sqrt(abs(a*a  + b*b));
        return d;
    }
    double distance(Point P)
    {
        float d=sqrt(pow(this->x - P.getX(),2)  + pow(this->y-P.getY(),2));
        return d;
    }
    int getX() { return x;}
    int getY() { return y;}
    double dotproduct(Point P)
    {
        return (this->x - P.x);
    }

};

class LineSegment
{
    private:
    Point d1; 
    Point d2;
    public:
    LineSegment() : d1(8,5), d2() {};
    LineSegment(Point &d1, Point &d2) 
    {
        this->d1=d1;
        this->d2=d2;
    }
    LineSegment(int x1, int y1, int x2, int y2) //4int
    {
        d1 = Point(x1,y1);
        d2 = Point(x2,y2);
    }
    LineSegment(const LineSegment &Lcopy) 
    {
        this->d1= Lcopy.d1;
        this->d2= Lcopy.d2;
    }
    void print()
    {
        cout<< "[";
        d1.print();
        cout<<"; ";
        d2.print();
        cout<<"]"<<endl;
    }
    void move(int dx, int dy)
    {
        this->d1 = d1.move(dx,dy);
        this->d2 = d2.move(dx,dy);

    }
    double length()
    {
        return round((this->d1.distance(this->d2))*10)/10;
    }
    int angle()
    {
        double cos = (d2.dotproduct(d1))/d2.distance(d1);
        return acos(cos)*(180.0 / M_PI);
    }
};