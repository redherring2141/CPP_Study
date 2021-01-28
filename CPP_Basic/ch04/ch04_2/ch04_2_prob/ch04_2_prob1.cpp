#include <iostream>
using namespace std;

class Point
{
private:
    int xpos, ypos;
public:
    void Init(int x, int y)
    {
        xpos = x;
        ypos = y;
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
    void Init(int x, int y, float r)
    {
        center.Init(x,y);
        radius = r;
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
    void Init(int xin, int yin, float rin, int xout, int yout, float rout)
    {
        InnerCirc.Init(xin, yin, rin);
        OuterCirc.Init(xout, yout, rout);
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
    Ring ring;
    ring.Init(1, 1, 4, 2, 2, 9);
    ring.ShowRingInfo();
    return 0;
}