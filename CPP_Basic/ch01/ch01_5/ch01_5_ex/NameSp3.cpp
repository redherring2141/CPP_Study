#include <iostream>

namespace BestComImpl
{
	void SimpleFunc(void);
}

namespace BestComImpl
{
	void PrettyFunc(void);
}

namespace ProgComImpl
{
	void SimpleFunc(void);
}

int main(void)
{
	BestComImpl::SimpleFunc();
	return 0;
}

void BestComImpl::SimpleFunc(void)
{
	std::cout<<"Function defined by BestCom"<<std::endl;
	PrettyFunc();			//The same namespace
	ProgComImpl::SimpleFunc();	//The different namespace
}

void BestComImpl::PrettyFunc(void)
{
	std::cout<<"So Pretty!!"<<std::endl;
}

void ProgComImpl::SimpleFunc(void)
{
	std::cout<<"Function defined by ProgCom"<<std::endl;
}
