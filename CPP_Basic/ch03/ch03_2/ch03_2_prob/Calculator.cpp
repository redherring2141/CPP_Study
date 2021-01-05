#include "Calculator.hpp"

float Calculator::Add(float arg1, float arg2)
{
    opcnt_add++;
    return arg1+arg2;
}

float Calculator::Sub(float arg1, float arg2)
{
    opcnt_sub++;
    return arg1-arg2;
}

float Calculator::Mul(float arg1, float arg2)
{
    opcnt_mul++;
    return arg1*arg2;
}

float Calculator::Div(float arg1, float arg2)
{
    if (arg2==0)
    {
        cout<<"Error: divided by 0."<<endl;
        return 0;
    }
    else
    {
        opcnt_div++;
        return arg1/arg2;
    }
}