#include <bits/stdc++.h>
using namespace std;

class LineSegmentTest
{
    public: 
    void testCase()
    {
        int x1,y1,x2,y2;
        cin>>x1>>y1>>x2>>y2;
        LineSegment ls1(x1,y1,x2,y2);
        ls1.print();
        cout<<fixed<<setprecision(1)<<ls1.length()<<endl;
        cout<<ls1.angle()<<endl;
        LineSegment ls2(ls1);
        ls1.move(1,1);
        ls1.print();
        ls2.print();
    }
};
