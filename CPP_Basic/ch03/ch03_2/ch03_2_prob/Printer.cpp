#include "Printer.hpp"

void Printer::SetString(char* stringIn)
{
    strcpy(string, stringIn);
}

void Printer::ShowString()
{
    cout<<string<<endl;
}
