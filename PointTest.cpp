#include <bits/stdc++.h>
using namespace std;

class PointTest
{
    public:
    void testCase()
    {
        Point p1;
        p1.print();
        Point p2;
        p2.read();
        p2.print();
        p2.move(1,1);
        p2.print();
        cout<<fixed<<setprecision(1)<<p2.distance()<<endl;

    }
};