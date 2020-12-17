#include <iostream>
#include <stdlib.h>
using namespace std;
typedef struct __Point
{
	int xpos;
	int ypos;
} Point;

Point& PntAddr(const Point &p1, const Point &p2)
{
	Point *result = new Point;
	result->xpos = p1.xpos + p2.xpos;
	result->ypos = p1.ypos + p2.ypos;

	return *result;
}

int main (void)
{
	Point *a = new Point;
	Point *b = new Point;

	a->xpos = 1;
	a->ypos = 2;

	b->xpos = 3;
	b->ypos = 4;

	Point &s = PntAddr(*a,*b);

	cout<<"Point a: ("<<a->xpos<<","<<a->ypos<<")"<<endl;
	cout<<"Point b: ("<<b->xpos<<","<<b->ypos<<")"<<endl;
	cout<<"Point s: ("<<s.xpos<<","<<s.ypos<<")"<<endl;

	delete a;
	delete b;
	delete &s;

	return 0;
}
