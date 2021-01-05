#include <iostream>
#include <cstring>
using namespace std;

class Printer
{
private:
    char* string;
public:
    void SetString(char* stringIn);
    void ShowString();
};