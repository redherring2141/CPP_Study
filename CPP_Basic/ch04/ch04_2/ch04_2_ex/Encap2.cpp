#include <iostream>
using namespace std;

class SinivelCap    // Capsule to stop running nose
{
public:
    void Take() const {cout<<"Running nose will be stopped clearly~"<<endl;}
};

class SneezeCap     // Capsule to stop sneezing
{
public:
    void Take() const {cout<<"Sneezing will be stopped for sure."<<endl;}
};

class SnuffleCap    // Capsule to stop snuffle
{
public:
    void Take() const {cout<<"Snuffle will be cleared."<<endl;}
};

class CONTAC600
{
private:
    SinivelCap sin;
    SneezeCap sne;
    SnuffleCap snu;

public:
    void Take() const
    {
        sin.Take();
        sne.Take();
        snu.Take();
    }
};

class ColdPatient
{
public:
    void TakeCONTAC600(const CONTAC600 &cap) const { cap.Take(); }
};

int main(void)
{
    CONTAC600 cap;
    ColdPatient sufferer;
    sufferer.TakeCONTAC600(cap);
    return 0;
}