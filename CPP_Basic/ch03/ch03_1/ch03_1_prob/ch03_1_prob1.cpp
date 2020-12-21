#include <iostream>
using namespace std;

struct Point
{
	int xpos;
	int ypos;

	void MovePos(int x, int y)		// Move the point's coordinate
	{
		xpos+=x;
		ypos+=y;
	}

	void AddPoint(const Point &pos)		// Add the point's coordinate to a point
	{
		xpos+=pos.xpos;
		ypos+=pos.ypos;
	}

	void ShowPosition(void)
	{
		cout << "[" << xpos << " , " << ypos << "]" <<  endl;
	}
};


int main(void)
{
	Point pos1={12, 4};
	Point pos2={20, 30};

	pos1.MovePos(-7, 10);
	pos1.ShowPosition();	// Print [5, 14]

	pos1.AddPoint(pos2);
	pos1.ShowPosition();	// Print [25, 44]

	return 0;
}
