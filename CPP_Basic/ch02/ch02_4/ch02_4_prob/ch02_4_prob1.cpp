#include <iostream>
using namespace std;
void increaseNum(int &a)
{
	int temp = a;
	a = temp+1;
}

void changeSign(int &a)
{
	int temp = a;
	a = (-1)*temp;
}

int main(void)
{
	int x = 77;
	increaseNum(x);
	cout <<"x is " << x << endl;

	changeSign(x);
	cout <<"x is " << x << endl;
	return 0;
}
