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
        Point A(x,y);
    }
    void print()
    {
        cout<<"("<<this->x<<","<<this->y<<")"<<endl;
    }
    void move(int dx, int dy)
    {
        this->x=x+dx;
        this->y=y+dy;
    }
    void distance()
    {
        int a = this->x;
        int b= this->y;
        float d=sqrt(abs(a*a  + b*b));
        cout<<fixed<<setprecision(1)<<d<<endl;
    }
    void distance(Point P)
    {
        P.read();
        float d=sqrt(pow(this->x - P.getX(),2)  + pow(this->y-P.getY(),2));
        cout<<fixed<<setprecision(1)<<d<<endl;
    }
    int getX() { return x;}
    int getY() { return y;}

};

int main()
{
    int x,y;
    Point A;
 //   Point P;
    A.read();
    A.print();
    A.distance();
}