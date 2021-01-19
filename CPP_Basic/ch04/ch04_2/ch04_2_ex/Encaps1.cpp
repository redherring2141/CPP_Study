#include <iostream>
using namespace std;
class SinivelCap    //  Capsule to stop running nose
{
public:
    void Take() const {cout<<"Running nose will be stopped clearly~"<<endl;}
};

class SneezeCap     // Capsule to stop sneezing
{
public:
    void Take() const {cout<<"Sneezing will be stopped for sure."<<endl;}
};

class SnuffleCap       // Capsule to stop snuffle
{
public:
    void Take() const {cout<<"Snuffle will be cleared."<<endl;}
};

class ColdPatient
{
public:
    void TakeSinivelCap(const SinivelCap &cap) const {cap.Take();}
    void TakeSneezeCap(const SneezeCap &cap) const {cap.Take();}
    void TakeSnuffleCap(const SnuffleCap &cap) const {cap.Take();}
};

int main(void)
{
    SinivelCap scap;
    SneezeCap zcap;
    SnuffleCap ncap;

    ColdPatient sufferer;
    sufferer.TakeSinivelCap(scap);
    sufferer.TakeSneezeCap(zcap);
    sufferer.TakeSnuffleCap(ncap);
    return 0;
}