class ColorPointTest
{
    public:
    static void testCase()
    {
        ColorPoint c1;
        ColorPoint c2;
        c2.read();
        c1.print();
        c2.print();
        ColorPoint c3(c2);
        c2.move(5,5);
        c2.print();
        c3.print();
        
    }
};
