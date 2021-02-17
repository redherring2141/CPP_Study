#include <iostream>
#include <cstring>
using namespace std;

class SoSimple
{
private:
    int num;
public:
    SoSimple(int n) : num(n)
    {
        cout << "num=" << num << ", ";
        cout << "address = " << this << endl;
    }
    void ShowSimpleData()
    {
        cout << num << endl;
    }
    SoSimple *GetThisPointer()
    {
        return this;
    }
};

int main(void)
{
    SoSimple sim1(100);
    SoSimple *ptr1 = sim1.GetThisPointer(); // Store the address of sim1 object
    cout << ptr1 << ", ";
    ptr1->ShowSimpleData();

    SoSimple sim2(200);
    SoSimple *ptr2 = sim2.GetThisPointer();
    ptr2->ShowSimpleData();
    return 0;
}