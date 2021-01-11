#include <iostream>
using namespace std;

class Point
{
public:
	int x;	// x coordinate's range is 0~100
	int y;	// y coordinate's range is 0~100
};

class Rectangle
{
public:
	Point upLeft;
	Point lowRight;

public:
	void ShowRecInfo()
	{
		cout<<"Top left: "<<'['<<upLeft.x<<", ";
		cout<<upLeft.y<<']'<<endl;
		cout<<"Bottom right: "<<'['<<lowRight.x<<", ";
		cout<<lowRight.y<<']'<<endl<<endl;
	}
};

int main(void)
{
	Point pos1={-2, 4};
	Point pos2={5, 9};
	Rectangle rec={pos2, pos1};
	rec.ShowRecInfo();
	return 0;
}
