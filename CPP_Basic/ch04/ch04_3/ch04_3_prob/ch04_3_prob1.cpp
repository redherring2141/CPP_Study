#include <iostream>
using namespace std;

class Point
{
private:
    int xpos, ypos;
public:
    Point(int x, int y) : xpos(x), ypos(y)
    {
    }
    void ShowPointInfo() const
    {
        cout << "[" << xpos << ", " << ypos << "]" << endl;
    }
};

class Circle
{
private:
    Point center;
    float radius;
public:
    Circle(int x, int y, float r) : center(x,y), radius(r)
    {
    }
    void ShowCircleInfo() const
    {
        cout << "radius: " << radius << endl;
        center.ShowPointInfo();
    }
};

class Ring
{
private:
    Circle InnerCirc;
    Circle OuterCirc;
public:
    Ring(int xin, int yin, float rin, int xout, int yout, float rout)
    : InnerCirc(xin, yin, rin), OuterCirc(xout, yout, rout)
    {
    }
    void ShowRingInfo() const
    {
        cout << "Inner Circle Info..." << endl;
        InnerCirc.ShowCircleInfo();
        cout << "Outer Circle Info..." << endl;
        OuterCirc.ShowCircleInfo();
    };
};

int main(void)
{
    Ring ring(1, 1, 4, 2, 2, 9);
    ring.ShowRingInfo();
    return 0;
}