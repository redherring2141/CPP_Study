#ifndef __CALCULATOR_H__
#define __CALCULATOR_H__

#include <iostream>
using namespace std;

class Calculator
{
private:
    int opcnt_add;
    int opcnt_sub;
    int opcnt_mul;
    int opcnt_div;
public:
    void Init();
    float Add(float arg1, float arg2);
    float Sub(float arg1, float arg2);
    float Mul(float arg1, float arg2);
    float Div(float arg1, float arg2);
    void ShowOpCount();
};


inline void Calculator::Init()
{
    opcnt_add=0;
    opcnt_sub=0;
    opcnt_mul=0;
    opcnt_div=0;
}

inline void Calculator::ShowOpCount()
{
    cout<<"Addition: "<<opcnt_add;
    cout<<"\t";
    cout<<"Subtraction: "<<opcnt_sub;
    cout<<"\t";
    cout<<"Multiplication: "<<opcnt_mul;
    cout<<"\t";
    cout<<"Division: "<<opcnt_div;
    cout<<endl<<endl;
}

#endif